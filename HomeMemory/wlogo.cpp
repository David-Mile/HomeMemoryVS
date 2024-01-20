#include "wlogo.h"



WLogo::WLogo(QWidget *parent)
    : QWidget{parent}
{
    // Access database
    QSqlDatabase testdb = QSqlDatabase::addDatabase("QPSQL");
    testdb.setHostName("localhost");
    testdb.setDatabaseName("HomeMemoryDb");
    testdb.setUserName("postgres");
    testdb.setPassword("admin");
    testdb.setPort(5432);


    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *logoLabel = new QLabel();
    if (testdb.open())
    {
        logoLabel->setText("<html><head/><body><p align='center'><span style=' font-size:22pt; font-weight:700; color:#13b0b8;'>Database Connected</span></p></body></html>");
    }
    else
    {
        logoLabel->setText("<html><head/><body><p align='center'><span style=' font-size:22pt; font-weight:700; color:#13b0b8;'>Database Connection Failed</span></p></body></html>");
    }

    testdb.close();

    logoLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(logoLabel);
    resize(1900,967); // -> use this, I can use it including a file where I set the variable using #define statement


}
