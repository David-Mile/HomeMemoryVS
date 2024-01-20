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

