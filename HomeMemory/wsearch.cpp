#include "wsearch.h"
#include "ui_wsearch.h"
//#include "global.h"

WSearch::WSearch(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WSearch)
{
    ui->setupUi(this);
    g = global;
    m_column = g->columnNumber;

    // Table
    ui->tableWidget->setColumnCount(g->columnNumber);
    ui->tableWidget->setHorizontalHeaderLabels(g->columnLabels);
    ui->tableWidget->setMinimumWidth(610);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    // Comboboxes
    comboFiller(ui->colorCombo);
    comboFiller(ui->matCombo);
    comboFiller(ui->typeCombo);

    // Btns icons
    ui->addColorBtn->setIcon(QIcon(qApp->applicationDirPath() + "/img/plus.png"));
    ui->addColorBtn->setEnabled(false);
    ui->addMatBtn->setIcon(QIcon(qApp->applicationDirPath() + "/img/plus.png"));
    ui->addMatBtn->setEnabled(false);
    ui->addTypeBtn->setIcon(QIcon(qApp->applicationDirPath() + "/img/plus.png"));
    ui->addTypeBtn->setEnabled(false);
    ui->rmColorBtn->setIcon(QIcon(qApp->applicationDirPath() + "/img/minus.png"));
    ui->rmColorBtn->setEnabled(false);
    ui->rmMatBtn->setIcon(QIcon(qApp->applicationDirPath() + "/img/minus.png"));
    ui->rmMatBtn->setEnabled(false);
    ui->rmTypeBtn->setIcon(QIcon(qApp->applicationDirPath() + "/img/minus.png"));
    ui->rmTypeBtn->setEnabled(false);
    // Btns activation
    connect(ui->colorCombo,SIGNAL(currentIndexChanged(int)),this,SLOT(btnActivator()));
    connect(ui->matCombo,SIGNAL(currentIndexChanged(int)),this,SLOT(btnActivator()));
    connect(ui->typeCombo,SIGNAL(currentIndexChanged(int)),this,SLOT(btnActivator()));
    // Btns action
    connect(ui->addColorBtn,SIGNAL(released()),this,SLOT(addColorSlot()));
    connect(ui->rmColorBtn,SIGNAL(released()),this,SLOT(rmColorSlot()));
    connect(ui->addTypeBtn,SIGNAL(released()),this,SLOT(addTypeSlot()));
    connect(ui->rmTypeBtn,SIGNAL(released()),this,SLOT(rmTypeSlot()));
    connect(ui->addMatBtn,SIGNAL(released()),this,SLOT(addMatSlot()));
    connect(ui->rmMatBtn,SIGNAL(released()),this,SLOT(rmMatSlot()));
    connect(ui->searchBtn,SIGNAL(released()),this,SLOT(searchSlot()));
    connect(ui->clearBtn,SIGNAL(released()),this,SLOT(clearBtnSlot()));

    // Color buttons initialization
    colorBtn0 = new QPushButton();  colorBtn1 = new QPushButton();  colorBtn2 = new QPushButton();
    colorBtn3 = new QPushButton();  colorBtn4 = new QPushButton();  colorBtn5 = new QPushButton();
    colorBtn6 = new QPushButton();  colorBtn7 = new QPushButton();  colorBtn8 = new QPushButton();
    colorBtn9 = new QPushButton();
    colorBtnArray[0] = colorBtn0; colorBtnArray[1] = colorBtn1; colorBtnArray[2] = colorBtn2; colorBtnArray[3] = colorBtn3;
    colorBtnArray[4] = colorBtn4; colorBtnArray[5] = colorBtn5; colorBtnArray[6] = colorBtn6; colorBtnArray[7] = colorBtn7;
    colorBtnArray[8] = colorBtn8; colorBtnArray[9]  = colorBtn9;
    connect(colorBtn0,SIGNAL(released()),this,SLOT(colorBtn0Emitter()));
    connect(colorBtn1,SIGNAL(released()),this,SLOT(colorBtn1Emitter()));
    connect(colorBtn2,SIGNAL(released()),this,SLOT(colorBtn2Emitter()));
    connect(colorBtn3,SIGNAL(released()),this,SLOT(colorBtn3Emitter()));
    connect(colorBtn4,SIGNAL(released()),this,SLOT(colorBtn4Emitter()));
    connect(colorBtn5,SIGNAL(released()),this,SLOT(colorBtn5Emitter()));
    connect(colorBtn6,SIGNAL(released()),this,SLOT(colorBtn6Emitter()));
    connect(colorBtn7,SIGNAL(released()),this,SLOT(colorBtn7Emitter()));
    connect(colorBtn8,SIGNAL(released()),this,SLOT(colorBtn8Emitter()));
    connect(colorBtn9,SIGNAL(released()),this,SLOT(colorBtn9Emitter()));
    connect(this,SIGNAL(colorBtnSignal(int)),this,SLOT(colorBtnSlot(int)));

    // Type buttons initialization
    typeBtn0 = new QPushButton();  typeBtn1 = new QPushButton();  typeBtn2 = new QPushButton();
    typeBtn3 = new QPushButton();  typeBtn4 = new QPushButton();  typeBtn5 = new QPushButton();
    typeBtn6 = new QPushButton();  typeBtn7 = new QPushButton();  typeBtn8 = new QPushButton();
    typeBtn9 = new QPushButton();
    typeBtnArray[0] = typeBtn0; typeBtnArray[1] = typeBtn1; typeBtnArray[2] = typeBtn2; typeBtnArray[3] = typeBtn3;
    typeBtnArray[4] = typeBtn4; typeBtnArray[5] = typeBtn5; typeBtnArray[6] = typeBtn6; typeBtnArray[7] = typeBtn7;
    typeBtnArray[8] = typeBtn8; typeBtnArray[9]  = typeBtn9;
    connect(typeBtn0,SIGNAL(released()),this,SLOT(typeBtn0Emitter()));
    connect(typeBtn1,SIGNAL(released()),this,SLOT(typeBtn1Emitter()));
    connect(typeBtn2,SIGNAL(released()),this,SLOT(typeBtn2Emitter()));
    connect(typeBtn3,SIGNAL(released()),this,SLOT(typeBtn3Emitter()));
    connect(typeBtn4,SIGNAL(released()),this,SLOT(typeBtn4Emitter()));
    connect(typeBtn5,SIGNAL(released()),this,SLOT(typeBtn5Emitter()));
    connect(typeBtn6,SIGNAL(released()),this,SLOT(typeBtn6Emitter()));
    connect(typeBtn7,SIGNAL(released()),this,SLOT(typeBtn7Emitter()));
    connect(typeBtn8,SIGNAL(released()),this,SLOT(typeBtn8Emitter()));
    connect(typeBtn9,SIGNAL(released()),this,SLOT(typeBtn9Emitter()));
    connect(this,SIGNAL(typeBtnSignal(int)),this,SLOT(typeBtnSlot(int)));

    // Mat buttons initialization
    matBtn0 = new QPushButton();  matBtn1 = new QPushButton();  matBtn2 = new QPushButton();
    matBtn3 = new QPushButton();  matBtn4 = new QPushButton();  matBtn5 = new QPushButton();
    matBtn6 = new QPushButton();  matBtn7 = new QPushButton();  matBtn8 = new QPushButton();
    matBtn9 = new QPushButton();
    matBtnArray[0] = matBtn0; matBtnArray[1] = matBtn1; matBtnArray[2] = matBtn2; matBtnArray[3] = matBtn3;
    matBtnArray[4] = matBtn4; matBtnArray[5] = matBtn5; matBtnArray[6] = matBtn6; matBtnArray[7] = matBtn7;
    matBtnArray[8] = matBtn8; matBtnArray[9]  = matBtn9;
    connect(matBtn0,SIGNAL(released()),this,SLOT(matBtn0Emitter()));
    connect(matBtn1,SIGNAL(released()),this,SLOT(matBtn1Emitter()));
    connect(matBtn2,SIGNAL(released()),this,SLOT(matBtn2Emitter()));
    connect(matBtn3,SIGNAL(released()),this,SLOT(matBtn3Emitter()));
    connect(matBtn4,SIGNAL(released()),this,SLOT(matBtn4Emitter()));
    connect(matBtn5,SIGNAL(released()),this,SLOT(matBtn5Emitter()));
    connect(matBtn6,SIGNAL(released()),this,SLOT(matBtn6Emitter()));
    connect(matBtn7,SIGNAL(released()),this,SLOT(matBtn7Emitter()));
    connect(matBtn8,SIGNAL(released()),this,SLOT(matBtn8Emitter()));
    connect(matBtn9,SIGNAL(released()),this,SLOT(matBtn9Emitter()));
    connect(this,SIGNAL(matBtnSignal(int)),this,SLOT(matBtnSlot(int)));

    // Selected field btns config
    m_lastColorIdx = 0;
    m_lastTypeIdx = 0;
    m_lastMatIdx = 0;
    ui->hLayColors->setSpacing(0);
    ui->hLayTypes->setSpacing(0);
    ui->hLayMats->setSpacing(0);

    // Fill table with all objects in the db
    searchSlot();
}

WSearch::~WSearch()
{
    delete ui;
}

void WSearch::themeSlot(bool isDark)
{
    if(isDark)
    {
        // Dark theme configuration
        QFile f(qApp->applicationDirPath() + "/styles/qdarkstyle/dark/darkstyle.qss");
        f.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&f);
        setStyleSheet(ts.readAll());
    }
    else
    {
        setStyleSheet("");
    }
}

// It fills the comboboxes when the info retrived by the db.
// The input is the combobox asked to be filled.
void WSearch::comboFiller(QComboBox* combo)
{
    db = g->openConnection();
   QSqlQuery queryCombo;
    if (combo == ui->colorCombo)
        queryCombo.prepare("select * from colorstb order by colore asc;");
    if (combo == ui->matCombo)
        queryCombo.prepare("select * from MaterialsTb order by materiale asc;");
    if (combo == ui->typeCombo)
        queryCombo.prepare("select * from TypeTb order by tipo asc;");
    queryCombo.exec();
    int k = 0;
    while(queryCombo.next())
    {
        QString actualField = queryCombo.value(0).toString();
        combo->insertItem(k,actualField);
        if (QString::compare(actualField,g->emptyString,Qt::CaseSensitive) == 0 )
            combo->setCurrentIndex(k);
        k++;
    }
    db.close();
}

// Slot called when the search btn is clicked
void WSearch::searchSlot()
{
    QSqlDatabase db = g->openConnection();
    //bool queryValidity = false;
    bool isWhere = false;
    QString queryString = "select oggetto, colore, materiale, tipo, note, picture  from objectstb";

    // Check object line edit and add it to query
    QString oggetto = ui->objLine->text();
    if(QString::compare(oggetto,g->emptyString,Qt::CaseSensitive) != 0)
    {
        queryString.append(" where oggetto like '%" + oggetto + "%'");
        //queryValidity = true;
        isWhere = true;
    }

    // check selected colors presence and add it to query
    QString tempColString = tempStringBuilder(m_selColors, isWhere);
    queryString.append(tempColString);
    // check selected types presence and add them to query
    QString tempTypeString = tempStringBuilder(m_selTypes, isWhere);
    queryString.append(tempTypeString);
    // check selected materials presence and add it to query
    QString tempMatString = tempStringBuilder(m_selMats, isWhere);
    queryString.append(tempMatString);

    // impose alphabetical order
    queryString.append(" order by oggetto asc;");

    // Translate Qstring into a query
    QSqlQuery query;
    query.prepare(queryString);
    query.exec();
    int row = 0;
    while(query.next())
    {
        row++;
    }
    ui->tableWidget->setRowCount(row);
    query.first();
    for(int i=0; i < row; i++)
    {
        for(int j=0; j < m_column; j++)
        {
            QString queryResult = query.value(j).toString();
            cellItemFiller(i,j,queryResult);
        }
        query.next();
    }
    db.close();
}

// Clear Slot, called when clear is clicked
void WSearch::clearAll()
{
    // Clear object line edit and combo boxes
    ui->objLine->clear();
    ui->colorCombo->setCurrentIndex(ui->colorCombo->findText(""));
    ui->typeCombo->setCurrentIndex(ui->typeCombo->findText(""));
    ui->matCombo->setCurrentIndex(ui->matCombo->findText(""));

    // Hide all selections btn and remove them to rispective layout
    for(int i=0; i < 10; i++)
    {
        colorBtnArray[i]->hide();
        ui->hLayColors->removeWidget(colorBtnArray[i]);
        typeBtnArray[i]->hide();
        ui->hLayTypes->removeWidget(typeBtnArray[i]);
        matBtnArray[i]->hide();
        ui->hLayMats->removeWidget(matBtnArray[i]);

        // Clear all selection variables
        m_selColors[i] = "";
        m_selTypes[i] = "";
        m_selMats[i] = "";
    }

    // Impose zero indexes for all fields
    m_lastColorIdx = 0;
    m_lastTypeIdx = 0;
    m_lastMatIdx = 0;

    // Fill the table with all the objects in the db
    searchSlot();
}

// Build the temporary string to append to the queryString, for each combo box.
QString WSearch::tempStringBuilder(QString selField[], bool &isWhere)
{
    // check selected actual field presence and add it to query
    QString tempString;
    for(int i=0; i < 10; i++)
    {
        // Verify if there is a color in m_selColors
        if(QString::compare(selField[i],g->emptyString,Qt::CaseSensitive) != 0)
        {
            if(!isWhere)
            {
                tempString.append(" where (");
                isWhere = true;
            }
            else
            {
                tempString.append(" and (");
            }
            for (int j=0; j < 10; j++)
            {
                if(QString::compare(selField[j],g->emptyString,Qt::CaseSensitive) != 0)
                {
                    if(selField == m_selColors)
                        tempString.append("colore ='" + selField[j] + "' or ");
                    if(selField == m_selTypes)
                        tempString.append("tipo ='" + selField[j] + "' or ");
                    if(selField == m_selMats)
                        tempString.append("materiale ='" + selField[j] + "' or ");
                }
            }
            // remove last "or" in the string
            tempString.remove(tempString.size()-4,tempString.size());
            tempString.append(")");
            // I append the temp string to the query
            // queryString.append(tempColString);
            break;
        }
    }
    return tempString;
}


void WSearch::cellItemFiller(int actRow, int actColumn, QString queryResult)
{
    QTableWidgetItem *item = new QTableWidgetItem(queryResult,0);
    // item->setFlags(item->flags()^(Qt::ItemIsSelectable|Qt::ItemIsEditable));
    ui->tableWidget->setItem(actRow,actColumn,item);
}

// it checks the activation condition for all the btns
void WSearch::btnActivator()
{
    // Add buttons checks
    comboCheck(ui->colorCombo,ui->addColorBtn);
    comboCheck(ui->matCombo,ui->addMatBtn);
    comboCheck(ui->typeCombo,ui->addTypeBtn);
    // Rm buttons checks
    rmCheck();

}

// it checks if the input combobox has a not empty string and activate or deactivate the input btn
void WSearch::comboCheck(QComboBox *combo,QPushButton *btn)
{
    QString actualField = combo->currentText();
    if (QString::compare(actualField,g->emptyString,Qt::CaseSensitive) == 0 )
        btn->setEnabled(false);
    else
        btn->setEnabled(true);
    if(combo == ui->colorCombo)
    {
        for(QString color : m_selColors)
        {
             if(QString::compare(color,actualField,Qt::CaseSensitive) == 0)
                btn->setEnabled(false);
        }
    }
    if(combo == ui->typeCombo)
    {
        for(QString type : m_selTypes)
        {
             if(QString::compare(type,actualField,Qt::CaseSensitive) == 0)
                btn->setEnabled(false);
        }
    }
    if(combo == ui->matCombo)
    {
        for(QString mat : m_selMats)
        {
             if(QString::compare(mat,actualField,Qt::CaseSensitive) == 0)
                btn->setEnabled(false);
        }
    }
}

void WSearch::rmCheck()
{
    if(m_lastColorIdx == 0)
        ui->rmColorBtn->setEnabled(false);
    else
        ui->rmColorBtn->setEnabled(true);

    if(m_lastTypeIdx == 0)
        ui->rmTypeBtn->setEnabled(false);
    else
        ui->rmTypeBtn->setEnabled(true);

    if(m_lastMatIdx == 0)
        ui->rmMatBtn->setEnabled(false);
    else
        ui->rmMatBtn->setEnabled(true);

}

void WSearch::addColorSlot()
{
    if(addAttrBtn(m_lastColorIdx, m_selColors, colorBtnArray, ui->colorCombo, ui->hLayColors, ui->addColorBtn))
    {
        // update last color index for next insertion
        m_lastColorIdx++;
    }
    btnActivator();
}

void WSearch::addTypeSlot()
{
    if(addAttrBtn(m_lastTypeIdx, m_selTypes, typeBtnArray, ui->typeCombo, ui->hLayTypes, ui->addTypeBtn))
    {
        // update last type index for next insertion
        m_lastTypeIdx++;
    }
    btnActivator();

}

void WSearch::addMatSlot()
{
    if(addAttrBtn(m_lastMatIdx, m_selMats, matBtnArray, ui->matCombo, ui->hLayMats, ui->addMatBtn))
    {
        // update last material index for next insertion
        m_lastMatIdx++;
    }
    btnActivator();
}

// Add a button associated to a selected attribute (such as color or type) in the h lay of that attribute.
// Remember that it can be used only if Attrs = const for all the inputs, that are the following:
// lastAttrsIdx: index of the last button available inside the HBoxLay.
// selAttrs[]: is an array of QStrings with all the selected Attrs, in the right order, first relected on the left.
// combo: combobox of the specific attribute.
// hLayAttrs: is the h lay where buttons will be inserted in.
// addAttrBtn: btn to add in the layout.
bool WSearch::addAttrBtn(int lastAttrIdx,QString selAttrs[], QPushButton* attrBtnArray[], QComboBox *combo, QHBoxLayout *hlayAttr, QPushButton *addAttrBtn)
{
    if(lastAttrIdx == 9)
    {
        maxSelectedItemsMb();
        return false;
    }
    // update selected attribute array
    selAttrs[lastAttrIdx] = combo->currentText();
    // add the btn inside attribute h layout
    addSelBtn(selAttrs[lastAttrIdx],attrBtnArray[lastAttrIdx],hlayAttr,lastAttrIdx);
    addAttrBtn->setEnabled(false);
    return true;
}

// Slot called when the minus btn on the selected color row is clicked.
// It removes the colors clicked and highlighted with a different btn background color.
void WSearch::rmColorSlot()
{
    // Update m_selColors variable.
    selAttrsUpdate(m_lastColorIdx,m_actColorIdx, m_selColors, colorBtnArray,ui->hLayColors);
    // Update last color index for the next time this method is colled
    m_lastColorIdx = lastAttrIdxUpdate(m_selColors,colorBtnArray,ui->hLayColors);
    // Add btns with correct label
    selBtnUpdate(m_selColors,m_lastColorIdx,colorBtnArray,ui->hLayColors);
    actAttrIdxZero(m_actColorIdx);
    comboCheck(ui->colorCombo,ui->addColorBtn);
}

void WSearch::rmTypeSlot()
{
    // Update m_selTypes variable.
    selAttrsUpdate(m_lastTypeIdx,m_actTypeIdx, m_selTypes, typeBtnArray,ui->hLayTypes);
    // Update last type index for the next time this method is colled
    m_lastTypeIdx = lastAttrIdxUpdate(m_selTypes,typeBtnArray,ui->hLayTypes);
    // Add btns with correct label
    selBtnUpdate(m_selTypes,m_lastTypeIdx,typeBtnArray,ui->hLayTypes);
    actAttrIdxZero(m_actTypeIdx);
    comboCheck(ui->typeCombo,ui->addTypeBtn);
}

void WSearch::rmMatSlot()
{
    // Update m_selMats variable.
    selAttrsUpdate(m_lastMatIdx,m_actMatIdx, m_selMats, matBtnArray,ui->hLayMats);
    // Update last mat index for the next time this method is colled
    m_lastMatIdx = lastAttrIdxUpdate(m_selMats,matBtnArray,ui->hLayMats);
    // Add btns with correct label
    selBtnUpdate(m_selMats,m_lastMatIdx,matBtnArray,ui->hLayMats);
    actAttrIdxZero(m_actMatIdx);
    comboCheck(ui->matCombo,ui->addMatBtn);
}

// It updates m_selAttrs array pointer, remove all btns inside the HBOoxLay of the specific Attr.
// This method remove also all button from the layout, so that thay can be added in the new correct numeber again, later.
// Remember that it can be used only if Attrs = const for all the inputs, that are the following:
// lastAttrsIdx: index of the last button available inside the HBoxLay.
// actAttrIdx[]: it is an int array of 10, if 1, the button assosiated to that location, array index, has been clicked,
// so it is colored, if 0, it has not been clicked, so it is a wanted attribute and when I click minus button I expect
// to still see that button.
// selAttrs[]: is an array of QStrings with all the selected Attrs, in the right order, first relected on the left.
// attrBtnArray[]: is an array of 10 btns, they will be all hide.
// hLayAttrs: is the h lay where buttons will be inserted in.
void WSearch::selAttrsUpdate(int lastAttrIdx, int actAttrIdx[],  QString selAttrs[], QPushButton* attrBtnArray[], QHBoxLayout* hLayAttrs)
{
    QString selAttrsUpd[10] = {"","","","","","","","","",""};
    int j = 0;
    for(int i = 0; i < lastAttrIdx; i++)
    {
        if(actAttrIdx[i] == 1)
        {
             selAttrs[i] = g->emptyString;
        }
        if(QString::compare(selAttrs[i],g->emptyString,Qt::CaseSensitive) != 0)
        {
             selAttrsUpd[j] = selAttrs[i];
             j++;
        }
        // Remove all button from layout
        rmSelBtn(attrBtnArray[i],hLayAttrs);
    }
    for(int i=0; i < 10; i++)
    {
        selAttrs[i] = selAttrsUpd[i];
    }
}

// Update m_lastAttrIdx private variable, as equal to the new button number.
// Remember that it can be used only if Attrs = const for all the inputs, that are the following:
// selAttrs[]: is an array of QStrings with all the selected Attrs, in the right order, first relected on the left.
// attrBtnArray[]: is an array of 10 btns associated to the Attr.
// hLayAttrs: is the h lay where buttons will be inserted in.
int WSearch::lastAttrIdxUpdate(QString selAttrs[], QPushButton* attrBtnArray[], QHBoxLayout* hLayAttrs)
{
    int j = 0;
    for(int i = 0; i < 10; i++)
    {
        if(QString::compare(selAttrs[i],g->emptyString,Qt::CaseSensitive) != 0)
        {
             j++;
        }
    }
    // Set new last attribute index
    return j;
}

// Add the updated button number (= m_lastAttrIdx)
void WSearch::selBtnUpdate(QString selAttrs[], int lastAttrIdx, QPushButton* attrBtnArray[], QHBoxLayout* hLayAttrs)
{
    for(int j = 0; j < lastAttrIdx; j++)
    {
        // Insert only necessary button inside layout with proper oder
        addSelBtn(selAttrs[j],attrBtnArray[j],hLayAttrs,j);
    }
}

int* WSearch::actAttrIdxZero(int actAttrIdx[])
{
    for(int i=0; i < 10; i++)
    {
        // actAttrIdx must be a 0 array because there will be no active button
        actAttrIdx[i] = 0;
    }
    return actAttrIdx;
}

// add btn inside selection layout, but it doesn't take into account counter array
void WSearch::addSelBtn(QString actSel, QPushButton *actBtn, QHBoxLayout *actLay, int IdBtn)
{
    actBtn->setText(actSel);
    // Count character to impose the  fixed btn dimension
    actBtn->setMinimumWidth(actSel.toStdString().length() * 8);
    actBtn->setMaximumWidth(actSel.toStdString().length() * 8);
    actBtn->setStyleSheet("");
    actLay->insertWidget(IdBtn,actBtn,Qt::AlignLeft);
    actBtn->show();
}

// remove the button from the widget and hide it but it doesn't take into account counter arrays
void WSearch::rmSelBtn(QPushButton *actBtn, QHBoxLayout *actLay)
{
    actLay->removeWidget(actBtn);
    actBtn->hide();
}

void WSearch::colorBtn0Emitter()
{
    emit colorBtnSignal(0);
}
void WSearch::colorBtn1Emitter()
{
    emit colorBtnSignal(1);
}
void WSearch::colorBtn2Emitter()
{
    emit colorBtnSignal(2);
}
void WSearch::colorBtn3Emitter()
{
    emit colorBtnSignal(3);
}
void WSearch::colorBtn4Emitter()
{
    emit colorBtnSignal(4);
}
void WSearch::colorBtn5Emitter()
{
    emit colorBtnSignal(5);
}
void WSearch::colorBtn6Emitter()
{
    emit colorBtnSignal(6);
}
void WSearch::colorBtn7Emitter()
{
    emit colorBtnSignal(7);
}
void WSearch::colorBtn8Emitter()
{
    emit colorBtnSignal(8);
}
void WSearch::colorBtn9Emitter()
{
    emit colorBtnSignal(9);
}

void WSearch::colorBtnSlot(int hlayColorIdx)
{
    attrBtnPainter(m_actColorIdx,hlayColorIdx,colorBtnArray);
}

void WSearch::typeBtn0Emitter()
{
    emit typeBtnSignal(0);
}
void WSearch::typeBtn1Emitter()
{
    emit typeBtnSignal(1);
}
void WSearch::typeBtn2Emitter()
{
    emit typeBtnSignal(2);
}
void WSearch::typeBtn3Emitter()
{
    emit typeBtnSignal(3);
}
void WSearch::typeBtn4Emitter()
{
    emit typeBtnSignal(4);
}
void WSearch::typeBtn5Emitter()
{
    emit typeBtnSignal(5);
}
void WSearch::typeBtn6Emitter()
{
    emit typeBtnSignal(6);
}
void WSearch::typeBtn7Emitter()
{
    emit typeBtnSignal(7);
}
void WSearch::typeBtn8Emitter()
{
    emit typeBtnSignal(8);
}
void WSearch::typeBtn9Emitter()
{
    emit typeBtnSignal(9);
}

void WSearch::typeBtnSlot(int hlayTypeIdx)
{
    attrBtnPainter(m_actTypeIdx,hlayTypeIdx,typeBtnArray);
}

void WSearch::matBtn0Emitter()
{
    emit matBtnSignal(0);
}
void WSearch::matBtn1Emitter()
{
    emit matBtnSignal(1);
}
void WSearch::matBtn2Emitter()
{
    emit matBtnSignal(2);
}
void WSearch::matBtn3Emitter()
{
    emit matBtnSignal(3);
}
void WSearch::matBtn4Emitter()
{
    emit matBtnSignal(4);
}
void WSearch::matBtn5Emitter()
{
    emit matBtnSignal(5);
}
void WSearch::matBtn6Emitter()
{
    emit matBtnSignal(6);
}
void WSearch::matBtn7Emitter()
{
    emit matBtnSignal(7);
}
void WSearch::matBtn8Emitter()
{
    emit matBtnSignal(8);
}
void WSearch::matBtn9Emitter()
{
    emit matBtnSignal(9);
}

void WSearch::matBtnSlot(int hlayMatIdx)
{
    attrBtnPainter(m_actMatIdx,hlayMatIdx,matBtnArray);
}

// This method is called when a selcted attribute is clicked to be eliminated after minus click.
// It colors the backgrond and makes the label white from the graphic point of view.
// It update the actAttrIdx array with one if the btn becomes colored, 0 otherwise.
// Remember that it can be used only if Attrs = const for all the inputs, that are the following:
// actAttrIdx[]: it is an int array of 10, if 1, the button assosiated to that location, array index, has been clicked,
// so it is colored, if 0, it has not been clicked (or the number of clicks is even), so it is a wanted attribute and when I click minus button I expect
// to still see that button.
// attrBtnArray[]: is an array of 10 btns associated to the Attr.
void WSearch::attrBtnPainter(int actAttrIdx[], int hlayAttrIdx, QPushButton* attrBtnArray[])
{
    if(!actAttrIdx[hlayAttrIdx])
    {
        actAttrIdx[hlayAttrIdx] = 1;
        attrBtnArray[hlayAttrIdx]->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
    }
    else
    {
        actAttrIdx[hlayAttrIdx] = 0;
        attrBtnArray[hlayAttrIdx]->setStyleSheet("");
    }
}

void WSearch::maxSelectedItemsMb()
{
    QMessageBox *msg = new QMessageBox();
    msg->setText("Sorry, only a maximum of 10 items for field can be selected.");
    msg->setWindowTitle("Maximum reached");
}
