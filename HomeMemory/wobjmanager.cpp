#include "wobjmanager.h"
#include "ui_wobjmanager.h"

#include "global.h"

WObjManager::WObjManager(Global* global,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WObjManager)
{
    ui->setupUi(this);
    if(global!=nullptr)
    g = global;

    connect(ui->clmResizeBtn,SIGNAL(released()),this,SLOT(changeTextResizeBtn()));
    connect(ui->saveBtn,SIGNAL(released()),this,SLOT(saveSlot()));
    connect(ui->deleteBtn,SIGNAL(released()),this,SLOT(deleteSlot()));
    connect(ui->addBtn,SIGNAL(released()),this,SLOT(addSlot()));
    connect(ui->RefreshBtn,SIGNAL(released()),this,SLOT(refreshSlot()));

    //Change column resize policy button clicking traking variable inizialization
    m_textCount = 1;
    ui->labelClmMode->setText("Automatic");

    // Table design
    m_column = g->columnNumber;
    ui->tableWidget->setColumnCount(m_column);
    connect(ui->tableWidget,SIGNAL(cellClicked(int,int)),this,SLOT(selToDelBtn(int,int)));

    // Buttons activators
    connect(ui->tableWidget,SIGNAL(cellClicked(int,int)),this,SLOT(delBtnActivator()));
    ui->deleteBtn->setEnabled(false);
    connect(ui->tableWidget,SIGNAL(cellClicked(int,int)),this,SLOT(clickDetector()));
    connect(ui->tableWidget,SIGNAL(cellChanged(int,int)),this,SLOT(refrSaveActivator()));
    ui->saveBtn->setEnabled(false);
    ui->RefreshBtn->setEnabled(false);

    ui->tableWidget->setHorizontalHeaderLabels(g->columnLabels);
    //ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableWidget->verticalHeader()->setVisible(false);
    //ui->tableWidget->setColumnWidth(1,10);
    ui->tableWidget->horizontalHeader()->setMinimumSectionSize(20);
    ui->tableWidget->horizontalHeader()->resizeSection(0,26);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);
    // Impose automatic changing of columns dimension when I change size
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(3,QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(5,QHeaderView::Stretch);
}

WObjManager::~WObjManager()
{
    delete ui;
}


void WObjManager::changeTextResizeBtn()
{
    if (m_textCount != 1)
    {
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(3,QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(5,QHeaderView::Stretch);
        ui->labelClmMode->setText("Automatic");
        m_textCount = 1;
    }
    else
    {
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Interactive);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Interactive);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(3,QHeaderView::Interactive);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Interactive);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(5,QHeaderView::Interactive);
        ui->labelClmMode->setText("Custom");
        m_textCount = 0;
    }
}


QSqlQuery WObjManager::queryTbFiller()
{
    // I need to create a new query every time because every time there's a new connection, so new db
    // and the query is strictly linked with db, I could iitialize that as QSqlQuery(db)
    QSqlQuery fillerQuery;
    if(m_IdLoc == 0)
    {
        fillerQuery.prepare("select oggetto, colore, materiale, tipo, note, picture  from objectstb where IdSov = :ids order by oggetto asc;");
        fillerQuery.bindValue(":ids",m_IdSov);
    }
    else
    {
        fillerQuery.prepare("select oggetto, colore, materiale, tipo, note, picture  from objectstb where IdSov = :ids and IdLoc = :idl order by oggetto asc;");
        fillerQuery.bindValue(":ids",m_IdSov);
        fillerQuery.bindValue(":idl",m_IdLoc);
    }
    return fillerQuery;
}

bool WObjManager::checkDuplicateObj()
{
    QSqlQuery allQuery;
    allQuery.prepare("select oggetto from objectstb order by oggetto asc;");
    allQuery.exec();
    bool isThereDup = false;

    std::list<QString> allObj;

    // Add all objects from db in allObj list
    while(bool test3 = allQuery.next())
    {
        QString currentObj = allQuery.value(0).toString();
        allObj.push_back(currentObj);
    }

    //Check and add all objects added in the table
    for (int i = m_rowDb; i < m_rowTb; i++)
    {
        QTableWidgetItem *currentItem = ui->tableWidget->item(i,1); // 1 is obj row
        QString currentObj =  currentItem->data(Qt::DisplayRole).toString();
        for (const QString &obj : allObj)
        {
            if(currentObj == obj && QString::compare(obj,g->emptyString,Qt::CaseSensitive) != 0)
            {
                isThereDup = true;
                break;
            }
        }
        allObj.push_back(currentObj);
    }

    return isThereDup;
}

void WObjManager::cellItemFiller(int actRow, int actColumn)
{
    // There are Items inside table cells only for second and last column
    if(actColumn==1 || actColumn ==5 || actColumn == 6)
    {
        QTableWidgetItem *item = new QTableWidgetItem(m_queryString,0);
        if (m_IdLoc == 0)
            item->setFlags(Qt::ItemIsSelectable);
        ui->tableWidget->setItem(actRow,actColumn,item);
    }
}

void WObjManager::cellWidgetFiller(int actRow, int actColumn)
{
    if(actColumn == 2 || actColumn == 3 || actColumn == 4)
    {
        QComboBox *combo = new QComboBox(this);
        QSqlQuery queryCombo;
        if (actColumn==2)
            queryCombo.prepare("select * from colorstb;");
        if (actColumn==3)
            queryCombo.prepare("select * from MaterialsTb;");
        if (actColumn==4)
            queryCombo.prepare("select * from TypeTb");
        queryCombo.exec();
        int k = 0;
        while(queryCombo.next())
        {
            QString actualField = queryCombo.value(0).toString();
            combo->insertItem(k,actualField);
            //Set height of the combobox so that when the column is risizing vertically it remain constant
            // combo->setFixedHeight(25); // Fixing the height breaks the
            if (QString::compare(actualField,m_queryString,Qt::CaseSensitive) == 0 )
                combo->setCurrentIndex(k);
            k++;
        }
        // connect a change in selection of the combo box with cellclicked signal of tablewidget
        connect(combo,SIGNAL(activated(int)),this,SLOT(comboChangedSlot()));
        if (m_IdLoc == 0)
            combo->setEnabled(false);
        ui->tableWidget->setCellWidget(actRow,actColumn,combo);
    }
}

// It allows tablewidget to see if I am clicking a combobox
void WObjManager::comboChangedSlot()
{
    emit ui->tableWidget->cellClicked(1,1);
    emit ui->tableWidget->cellChanged(1,1);
}

void WObjManager::toDelBtnFiller(int row)
{
    QTableWidgetItem *iconItem = new QTableWidgetItem;
    iconItem->setIcon(QIcon(qApp->applicationDirPath() + "/img/arrowIconForward.png"));
    ui->tableWidget->setItem(row,0,iconItem);
    ui->tableWidget->item(row,0)->setFlags(Qt::ItemIsSelectable);
    selDelBtns.push_back(0);
}

//It fill the table
void WObjManager::tableFiller(int IdLoc, int IdSov, bool isSaveBtn)
{
    // Update variable to handle buttons activation
    clicked = false;

    // Check if there are changes in the table and if the user want to proceed.
    // When IdLoc is 0 it meas I am coming from sottoambienti so there I already checked
    // if I wanted to save my changes when I leave the previous table view.
    // When I call tableFiller from Save btn I don't want to check for changes, since I know there are changes
    // due to the alfabetical order of the query that rearrenged the new rows just added.
    bool proceed = true;
    if (!isSaveBtn)
    {
        if (IdLoc != 0)
        {
            if (checkChanges())
                proceed = tbIsChangedMb();
        }
    }

    // Save current IdLoc and IdSov as private variable
    m_IdLoc = IdLoc;
    m_IdSov = IdSov;

    // If IdLoc == 0 we are in a sovraposition and not in a position. So no Add actions allowed.
    if(IdLoc == 0)
    {
        ui->addBtn->setEnabled(false);
    }
    else
    {
        ui->addBtn->setEnabled(true);
    }

    if(proceed)
    {
        // Database is open and close at each transaction otherwise it doesn't work. Is it a best practise?
        QSqlDatabase db = g->openConnection();

        if(db.isOpen())
        {
            // Prepare fillerQuery
            QSqlQuery fillerQuery = queryTbFiller();
            bool validity = fillerQuery.exec();

            /*- Compute and set the correct number of rows from Db-*/
            m_rowDb = 0;
            while(fillerQuery.next())
            {
                ++m_rowDb;
            }
            m_rowTb = m_rowDb;
            fillerQuery.first();
            ui->tableWidget->setRowCount(m_rowDb);

            if (validity)
            {
                for (int i=0; i < m_rowDb; i++)
                {
                    toDelBtnFiller(i);
                    for (int j=1; j < m_column; j++)
                    {
                        m_queryString = fillerQuery.value(j-1).toString();
                        cellItemFiller(i,j);
                        cellWidgetFiller(i,j);
                    }
                    fillerQuery.next();
                }

            }
            else
            {
                dbFailMb = new QMessageBox(this);
                dbFailMb->setText("Query built to fill the table not valid.");
                dbFailMb->setWindowTitle("Query Control Error Box");
                dbFailMb->exec();
            }
        }
        else
        {
            queryFailMb = new QMessageBox(this);
            queryFailMb->setText("Database not connected");
            queryFailMb->setWindowTitle("Database Connection Error Box");
            queryFailMb->exec();
        }
        db.close();
        ui->saveBtn->setEnabled(false);
        ui->RefreshBtn->setEnabled(false);
    }
}

// Check changes between tablewidget and db table
bool WObjManager::checkChanges()
{
    QSqlDatabase db = g->openConnection();
    QSqlQuery query = queryTbFiller();
    query.exec();
    query.first(); //verify if I can delete this line
    if (m_rowDb != m_rowTb)
        return true;
    else
    {
        for (int i = 0; i < m_rowDb; i++)
        {
            for (int j = 1; j < m_column; j++)
            {
                QString actualField = query.value(j-1).toString();
                QString tableField;
                if(j == 2 || j == 3 || j == 4)
                {
                    QWidget *tableWidget = ui->tableWidget->cellWidget(i,j);
                    if(tableWidget)
                    {
                        QComboBox *tableCombo = dynamic_cast<QComboBox*>(tableWidget);
                        tableField = tableCombo->currentText();
                    }
                }
                if(j == 1 || j== 5)
                {
                    QTableWidgetItem* tableItem = ui->tableWidget->item(i,j);
                    if(tableItem)
                        tableField = tableItem->data(Qt::DisplayRole).toString();
                }

                if(QString::compare(actualField,tableField,Qt::CaseSensitive) != 0)
                {
                    return true;
                }
            }
            query.next();
        }
    }
    return false;
}

// Create a message box with two buttons yes and no.
bool WObjManager::tbIsChangedMb()
{
    bool proceed = false;
    QMessageBox* tbChangedMb = new QMessageBox(this);
    tbChangedMb->setText("Your changes will be lost. Do you want to continue?");
    tbChangedMb->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    tbChangedMb->setDefaultButton(QMessageBox::No);
    int ret = tbChangedMb->exec();
    switch (ret)
    {
    case QMessageBox::Yes:
        proceed = true;
        break;
    case QMessageBox::No:
        break;
    }
    return proceed;
}

// Check if table is clicked after tablefiller calling
void WObjManager::clickDetector()
{
    clicked = true;
}

// Check if there are changes and activate or deactivate save and refresh btns
void WObjManager::refrSaveActivator()
{
    if(clicked)
    {
        bool changed = checkChanges();
        ui->saveBtn->setEnabled(changed);
        ui->RefreshBtn->setEnabled(changed);
    }
}

void WObjManager::saveSlot()
{
    QSqlDatabase db = g->openConnection();
    QSqlQuery fillerQuery = queryTbFiller();
    fillerQuery.exec();
    fillerQuery.first();
    isChanged = false;
    isThereEmptyObj = false;

    if(checkDuplicateObj())
    {
        duplicateObj = new QMessageBox(this);
        duplicateObj->setText("Two objects with the same name cannot be saved in the database.");
        duplicateObj->setWindowTitle("Duplicate Object");
        duplicateObj->exec();
        return;
    }

    for(int i=0; i < m_rowTb; i++)
    {
        if(i < m_rowDb)
        {
            for (int j=1; j < m_column; j++)
            {
                m_pCurrentItem = ui->tableWidget->item(i,j);
                if (j == 1 || j == 5 || j== 6)
                    m_tableString = m_pCurrentItem->data(Qt::DisplayRole).toString();
                else
                {
                    QWidget *tableWidget = ui->tableWidget->cellWidget(i,j);
                    QComboBox *tableCombo = dynamic_cast<QComboBox*>(tableWidget);
                    m_tableString = tableCombo->currentText();
                }
                m_queryString = fillerQuery.value(j-1).toString();

                if(j==1)
                {
                    oggettoTb = m_tableString;
                    oggettoDb = m_queryString;
                }
                if(j==2)
                {
                    coloreTb = m_tableString;
                }
                if(j==3)
                {
                    materialeTb = m_tableString;
                }
                if(j==4)
                {
                    tipoTb = m_tableString;
                }
                if(j==5)
                {
                    noteTb = m_tableString;
                }
                /*if(j==5)
                {
                    pictureTb = m_tableString;
                }*/

                if(QString::compare(m_queryString,m_tableString,Qt::CaseSensitive) != 0 )
                {
                    isChanged = true;
                }
            }


            if (QString::compare(oggettoTb,g->emptyString,Qt::CaseSensitive) == 0)
            {
                isThereEmptyObj = true;
                break;
            }

            if(isChanged)
            {
                QSqlQuery queryOldLine;
                queryOldLine.prepare("delete from objectstb where oggetto = :oggetto;");
                queryOldLine.bindValue(":oggetto",oggettoDb);
                if (!queryOldLine.exec())
                {
                    failOldLine = new QMessageBox(this);
                    failOldLine->setText("Query built to delete current line from objectstb table not valid.");
                    failOldLine->setWindowTitle("Query Control Error Box");
                    failOldLine->exec();
                }
                QSqlQuery queryNewLine;
                queryNewLine.prepare("insert into objectstb values (:oggetto,:idl,:ids,:colore,:materiale,:tipo,:note,null);"); //:picture
                queryNewLine.bindValue(":oggetto",oggettoTb);
                queryNewLine.bindValue(":idl",m_IdLoc);
                queryNewLine.bindValue(":ids",m_IdSov);
                queryNewLine.bindValue(":colore",coloreTb);
                queryNewLine.bindValue(":materiale",materialeTb);
                queryNewLine.bindValue(":tipo",tipoTb);
                queryNewLine.bindValue(":note",noteTb);
                //querySibmit.bindValue(":picture",pictureTb);
                if (!queryNewLine.exec())
                {
                    failNewLine = new QMessageBox(this);
                    failNewLine->setText("Query built to update objectstb table not valid.");
                    failNewLine->setWindowTitle("Query Control Error Box");
                    failNewLine->exec();
                }

                // Update isChanged for the next row
                isChanged = false;
            }

        }
        else
        {
            for (int j=1; j < m_column; j++)
            {
                QString tableString;
                QTableWidgetItem *currentItem = ui->tableWidget->item(i,j);

                if (j == 1 || j == 5 || j == 6)
                    tableString = currentItem->data(Qt::DisplayRole).toString();
                else
                {
                    QWidget *tableWidget = ui->tableWidget->cellWidget(i,j);
                    QComboBox *tableCombo = dynamic_cast<QComboBox*>(tableWidget);
                    tableString = tableCombo->currentText();
                }
                if(j==1)
                {
                    oggettoTb = tableString;
                }
                if(j==2)
                {
                    coloreTb = tableString;
                }
                if(j==3)
                {
                    materialeTb = tableString;
                }
                if(j==4)
                {
                    tipoTb = tableString;
                }
                /*if(j==4)
                {
                    pictureTb = tableString;
                    pictureDb = queryString;
                }*/
            }

            if(bool test = QString::compare(oggettoTb,g->emptyString,Qt::CaseSensitive) != 0)
            {
                QSqlQuery queryNewLine;
                queryNewLine.prepare("insert into objectstb values (:oggetto,:idl,:ids,:colore,:materiale,:tipo,null);"); //:picture
                queryNewLine.bindValue(":oggetto",oggettoTb);
                queryNewLine.bindValue(":idl",m_IdLoc);
                queryNewLine.bindValue(":ids",m_IdSov);
                queryNewLine.bindValue(":colore",coloreTb);
                queryNewLine.bindValue(":materiale",materialeTb);
                queryNewLine.bindValue(":tipo",tipoTb);
                //querySibmit.bindValue(":picture",pictureTb);
                if(queryNewLine.exec())
                    m_rowDb++;
                }
            else
            {
                isThereEmptyObj = true;
            }
        }
        fillerQuery.next();
    }

    if(isThereEmptyObj)
    {
        emptyLine = new QMessageBox(this);
        emptyLine->setText("An empty object cannot be added in the database.");
        emptyLine->setWindowTitle("Empty Object");
        emptyLine->exec();
        fillerQuery.next();
    }

    // update row count and close db
    if (m_rowDb == m_rowTb)
        tableFiller(m_IdLoc,m_IdSov,true);
    db.close();
}

// It color the first cell of the row if clicked and update selDelBtns list of clicked row for delete.
void WObjManager::selToDelBtn(int i, int j)
{

    if(j == 0)
    {
        if(selDelBtns[i] == 0)
        {
            ui->tableWidget->item(i,0)->setBackground(QColor(104, 59, 127));
            ui->tableWidget->item(i,0)->setIcon(QIcon(qApp->applicationDirPath() + "/img/arrowIconForwardWhite"));
            selDelBtns[i] = 1;
        }
        else
        {
            ui->tableWidget->item(i,0)->setBackground(Qt::transparent);
            ui->tableWidget->item(i,0)->setIcon(QIcon(qApp->applicationDirPath() + "/img/arrowIconForward"));
            selDelBtns[i] = 0;
        }
    }
}

// It rules the delete button activation, when a row is select to be delete, del btn must be active otherwise inactive.
void WObjManager::delBtnActivator()
{
    bool isactive = false;
    for(int k : selDelBtns)
    {
        if(k==1)
        {
            isactive = true;
            break;
        }
    }
    if(isactive)
        ui->deleteBtn->setEnabled(true);
    else
        ui->deleteBtn->setEnabled(false);
}

// Ask the user if he is really sure to del all the selected objects
bool WObjManager::sureToDelMb()
{
    bool proceed = false;
    QMessageBox* tbChangedMb = new QMessageBox(this);
    tbChangedMb->setText("Do you want to permanently delete all selected objects?");
    tbChangedMb->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    tbChangedMb->setDefaultButton(QMessageBox::No);
    int ret = tbChangedMb->exec();
    switch (ret)
    {
    case QMessageBox::Yes:
        proceed = true;
        break;
    case QMessageBox::No:
        break;
    }
    return proceed;
}

void WObjManager::deleteSlot()
{
    // check result from Mb
    if(!sureToDelMb())
        return;
    QSqlDatabase db = g->openConnection();
    QList<int> rowToDel;
    for(int k=m_rowTb-1; k >= 0; k--)
    {
        if(selDelBtns[k] == 1)
        {
            rowToDel.push_back(k);
            if(k < m_rowDb)
            {
                QSqlQuery fillerQuery = queryTbFiller();
                fillerQuery.exec();
                for (int i=0; i <= k; i++)
                    fillerQuery.next();
                QString objToDel = fillerQuery.value(0).toString();
                QSqlQuery queryOldLine;
                queryOldLine.prepare("delete from objectstb where oggetto = :oggetto;");
                queryOldLine.bindValue(":oggetto",objToDel);
                queryOldLine.exec();
                m_rowDb--;
            }
            selDelBtns[k] = 0;
        }
    }
    for(int k : rowToDel)
    {
        ui->tableWidget->removeRow(k);
        m_rowTb--;
    }
    db.close();
    delBtnActivator();
}

void WObjManager::addSlot()
{
    QSqlDatabase db = g->openConnection();

    // Overload queryString to add an empty line
    m_queryString = g->emptyString;
    if( m_rowDb == m_rowTb)
        m_rowTb = m_rowDb + 1;
    else
        m_rowTb = m_rowTb +1;
    ui->tableWidget->setRowCount(m_rowTb);
    for(int i = 0; i < m_column; i++)
    {
        cellItemFiller(m_rowTb-1,i+1);
        cellWidgetFiller(m_rowTb-1,i+1);
        toDelBtnFiller(m_rowTb-1);
    }
    db.close();
}

void WObjManager::refreshSlot()
{
    //check if there are changes in the table
    /*if(checkChanges())
    {
        //check if the user clicked yes button to proceed
        if(tbIsChangedMb())*/
            tableFiller(m_IdLoc,m_IdSov);
   // }
}

void WObjManager::backEmitter()
{
    bool proceed = true;
    if(checkChanges())
        proceed = tbIsChangedMb();
    if(proceed)
        emit backSignal();
}
