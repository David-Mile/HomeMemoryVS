#include "mainwindow.h"
#include "global.h"

#include <QApplication>
#include <QFile>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // ------ Set Global variables ------ //
    // Create Global Class
    Global *g = new Global();
    // General
    g->emptyString = QString("");
    // Table design
    g->columnNumber = 7;
    g->columnLabels = {"","Object","Color","Material","Type","Notes","Picture"};
    //Database
    g->dbDriver = "QPSQL";
    g->dbHostName = "localhost";
    g->dbName = "HomeMemoryDb";
    g->dbUser = "postgres";
    g->dbPw = "admin";
    g->dbPort = 5432;
    // ------ |||||||||||||||||||| ------ //

    MainWindow w(g);


    w.show();
    return a.exec();
}
