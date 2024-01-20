#ifndef GLOBAL_H
#define GLOBAL_H

#include <QString>
#include <QSqlDatabase>
#include <QList>


class Global {
public:
    Global();
    ~Global();
    // ------ Global Variables Declaration ------ //
    // General
    QString emptyString;
    // Table
    int columnNumber;
    QStringList columnLabels;
    //Database
    QString dbDriver;
    QString dbHostName;
    QString dbName;
    QString dbUser;
    QString dbPw;
    int dbPort;

    // Global Methods //
    QSqlDatabase openConnection();

signals:
    void positionSignal(int IdLoc, int IdSov);
};

#endif // GLOBAL_H
