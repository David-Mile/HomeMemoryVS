#include "wsettings.h"
#include "ui_wsettings.h"

WSettings::WSettings(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WSettings)
{
    ui->setupUi(this);
    g = global;

    connect(ui->colorBtn,SIGNAL(released()),this,SLOT(colorBtnSlot()));
    connect(ui->matBtn,SIGNAL(released()),this,SLOT(matBtnSlot()));
    connect(ui->typeBtn,SIGNAL(released()),this,SLOT(typeBtnSlot()));
    connect(ui->addBtn,SIGNAL(released()),this,SLOT(addSlot()));
    connect(ui->removeBtn,SIGNAL(released()),this,SLOT(removeSlot()));
    connect(ui->clearBtn,SIGNAL(released()),this,SLOT(clearSlot()));
    connect(ui->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(addBtnActivator(QString)));
    connect(ui->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(firstToUpperSlot(QString)));
    connect(ui->comboMain,SIGNAL(currentTextChanged(QString)),this,SLOT(removeBtnActivator()));
    connect(ui->radioDark,SIGNAL(clicked(bool)),this,SLOT(radioDarkSlot(bool)));
    connect(ui->radioLight,SIGNAL(clicked(bool)),this,SLOT(radioLightSlot(bool)));

    idBtn = 1;
    idComboSub = 0; // means no combo sub by default.
    ui->colorBtn->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
    comboFiller(ui->comboMain);
    ui->addBtn->setEnabled(false);
    ui->removeBtn->setEnabled(false);
}

WSettings::~WSettings()
{
    delete ui;
}

void WSettings::closeEvent(QCloseEvent *xClick)
{
    clearAll();
}

void WSettings::radioDarkSlot(bool state)
{
    if(state)
        emit themeSignal(true);
}

void WSettings::radioLightSlot(bool state)
{
    if(state)
        emit themeSignal(false);
}

void WSettings::themeSlot(bool isDark)
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

void WSettings::initConfig()
{
    if (ui->radioDark->isChecked())
        radioDarkSlot(true);
    else
        radioLightSlot(true);
}

void WSettings::colorBtnSlot()
{
    if(idBtn != 1)
    {
        idBtn = 1;
        ui->colorBtn->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
        ui->matBtn->setStyleSheet("");
        ui->typeBtn->setStyleSheet("");
        comboFiller(ui->comboMain);
    }
}

void WSettings::matBtnSlot()
{
    if(idBtn != 2)
    {
        idBtn = 2;
        ui->colorBtn->setStyleSheet("");
        ui->matBtn->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
        ui->typeBtn->setStyleSheet("");
        comboFiller(ui->comboMain);
    }
}

void WSettings::typeBtnSlot()
{
    if(idBtn != 3)
    {
        idBtn = 3;
        ui->colorBtn->setStyleSheet("");
        ui->matBtn->setStyleSheet("");
        ui->typeBtn->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
        comboFiller(ui->comboMain);
    }
}
 // Clear btn slot
void WSettings::clearSlot()
{
    int idTemp = idBtn;
    clearAll();
    idBtn = idTemp;
    if(idBtn == 2)
    {
        ui->colorBtn->setStyleSheet("");
        ui->matBtn->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
        ui->typeBtn->setStyleSheet("");
    }
    if(idBtn == 3)
    {
        ui->colorBtn->setStyleSheet("");
        ui->matBtn->setStyleSheet("");
        ui->typeBtn->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
    }
    comboFiller(ui->comboMain);
}

// It fills the comboboxes when the info retrived by the db.
// The input is the combobox asked to be filled.
void WSettings::comboFiller(QComboBox *combo)
{
    // remove all items, otherwise they will sum up to alredy inserted items.
    combo->clear();
    db = g->openConnection();
    QSqlQuery queryCombo;
    if (idBtn == 1)
        queryCombo.prepare("select * from colorstb order by colore asc;");
    if (idBtn == 2)
        queryCombo.prepare("select * from materialstb order by materiale asc;");
    if (idBtn == 3)
        queryCombo.prepare("select * from typetb order by tipo asc;");
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

// Add in the db the new item as written in the line edit.
// Then show the new item in the combo box and clear the line edit.
void WSettings::addSlot()
{
    db = g->openConnection();
    QString newItem = ui->lineEdit->text();
    QString queryString = "insert into ";
    QString table;
    QString tableLabel;
    QString columnLabel;
    tableVarCreator(idBtn, table, tableLabel, columnLabel);
    queryString += table + " values ('" + newItem + "');";
    QSqlQuery query;
    query.prepare(queryString);
    if (!query.exec())
    {
        QMessageBox *duplicateMsg = new QMessageBox(this);
        duplicateMsg->setText("This " + tableLabel + " is already in the database.");
        duplicateMsg->setWindowTitle("Duplicate detected");
        duplicateMsg->exec();
    }
    else
    {
        comboFiller(ui->comboMain);
    }
    db.close();
    ui->comboMain->setCurrentText(newItem);
    ui->lineEdit->clear();
}

void WSettings::addBtnActivator(QString text)
{
    if(idComboSub == 0)
    {
        if(QString::compare(text,g->emptyString,Qt::CaseSensitive) != 0)
            ui->addBtn->setEnabled(true);
        else
            ui->addBtn->setEnabled(false);
    }
}

void WSettings::removeSlot()
{
    switch (idComboSub)
    {
        case 0:
        {
            db = g->openConnection();
            QString actField = ui->comboMain->currentText();
            QString queryString = "delete from ";
            QString table;
            QString tableLabel;
            QString columnLabel;
            tableVarCreator(idBtn, table, tableLabel, columnLabel);
            queryString += table + " where " + columnLabel + " = '" + actField + "';";
            QSqlQuery query;
            query.prepare(queryString);
            if (!query.exec())
            {
                //update objectstb set colore = replace(colore,'Nero','');
                horlay = new QHBoxLayout(this);
                label = new QLabel(this);
                label->setText("This " + tableLabel + " is associated with at least one object inside the database. \n"
                                "Substitute it with an other one or with an empty " + tableLabel + ". \n"
                                "To confirm operation click 'Remove', otherwise 'Clear'.");
                comboSub = new QComboBox(this);
                comboFiller(comboSub);
                // Remove the selected field in the main combo from the sub combo.
                comboSub->removeItem(comboSub->findText(actField));
                horlay->addWidget(label);
                horlay->addWidget(comboSub);
                ui->verticalLayout->removeItem(ui->verticalSpacer);
                ui->verticalLayout->addLayout(horlay);
                ui->verticalLayout->addSpacerItem(ui->verticalSpacer);
                ui->removeBtn->setEnabled(false);
                ui->comboMain->setEnabled(false);
                ui->addBtn->setEnabled(false);
                ui->lineEdit->setEnabled(false);
                connect(comboSub,SIGNAL(activated(int)),this,SLOT(removeBtnActivator()));
                idComboSub = 1;
            }
            else
            {
            comboFiller(ui->comboMain);
            }
            break;
        }
        case 1:
        {
            db = g->openConnection();
            QString actField = ui->comboMain->currentText();
            QString subField = comboSub->currentText();
            QString table;
            QString tableLabel;
            QString columnLabel;
            tableVarCreator(idBtn, table, tableLabel, columnLabel);
            // Update objectstb and delete the field from the table with now no foreign key constraint
            QString queryStringUp = "update objectstb set " + columnLabel + " = replace(" + columnLabel
                                  + ", '" + actField + "', '" + subField + "');";
            QString queryStringDel = "delete from " + table + " where " + columnLabel + " = '" + actField + "';";
            QSqlQuery query;
            query.prepare(queryStringUp);
            query.exec();
            query.clear();
            query.prepare(queryStringDel);
            query.exec();
            horlay->removeWidget(label); label->hide();
            horlay->removeWidget(comboSub); comboSub->hide();
            ui->verticalLayout->removeItem(horlay);
            ui->comboMain->setEnabled(true);
            ui->lineEdit->setEnabled(true);
            comboFiller(ui->comboMain);
            idComboSub = 0;

        }
    }

    db.close();
}

// It activates Remove Btn.
void WSettings::removeBtnActivator()
{
    if(QString::compare(ui->comboMain->currentText(),g->emptyString,Qt::CaseSensitive) != 0)
        ui->removeBtn->setEnabled(true);
    else
        ui->removeBtn->setEnabled(false);
}

void WSettings::firstToUpperSlot(QString text)
{
    if(text.size() == 1)
    {
        QChar firstChar = text[0].toUpper();
        text[0] = firstChar;
        ui->lineEdit->setText(text);
    }
}

void WSettings::tableVarCreator(int idBtn, QString &table, QString &tableLabel, QString &columnLabel)
{
    if (idBtn == 1)
    {
        table = "colorstb";
        tableLabel = "color";
        columnLabel = "colore";
    }
    if(idBtn == 2)
    {
        table = "materialstb";
        tableLabel = "material";
        columnLabel = "materiale";
    }
    if(idBtn == 3)
    {
        table = "typetb";
        tableLabel = "type";
        columnLabel = "tipo";
    }
}

void WSettings::clearAll()
{
    colorBtnSlot();
    ui->lineEdit->clear();
    comboFiller(ui->comboMain);
    if(idComboSub == 1)
    {
        horlay->removeWidget(label); label->hide();
        horlay->removeWidget(comboSub); comboSub->hide();
        ui->verticalLayout->removeItem(horlay);
        removeBtnActivator();
        addBtnActivator(ui->lineEdit->text());
        ui->comboMain->setEnabled(true);
        ui->lineEdit->setEnabled(true);
        idComboSub = 0;
    }

}
