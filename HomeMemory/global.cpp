#include <global.h>

Global::Global()
{
}

// Global Methods Declaration //

// Establish connection to the db
QSqlDatabase Global::openConnection()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase(dbDriver);
    db.setHostName(dbHostName);
    db.setDatabaseName(dbName);
    db.setUserName(dbUser);
    db.setPassword(dbPw);
    db.setPort(dbPort);
    db.open();
    return db;
}

// Activates all btns in the input list
void Global::allButtonsActivator(QList<QPushButton*>* positionBtnList)
{
    for (int i = 0; i < positionBtnList->count(); i++)
    {
        QPushButton* btn = positionBtnList->value(i);
        btn->setEnabled(true);
        btnDefaultColor(btn);
    }
}

// Disable the btn and set color to violet
void Global::btnDeactivator(QPushButton* btn)
{
    btn->setEnabled(false);
    btn->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
}

// Set btn color to default
void Global::btnDefaultColor(QPushButton* btn)
{
    btn->setStyleSheet("");
}
