/********************************************************************************
** Form generated from reading UI file 'wscrivaniacomodino.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSCRIVANIACOMODINO_H
#define UI_WSCRIVANIACOMODINO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WScrivaniaComodino
{
public:
    QPushButton *backBtn;
    QPushButton *allObjsBtn;
    QPushButton *scaf1Btn;
    QPushButton *scaf2Btn;
    QPushButton *cassettoLeftBtn;
    QPushButton *cassettoRightBtn;
    QPushButton *cassettinoBtn;
    QPushButton *scaf3Btn;
    QPushButton *scaf4Btn;
    QPushButton *scaf5Btn;
    QPushButton *cassettoHBtn;
    QPushButton *cassettoMBtn;
    QPushButton *cassettoLBtn;

    void setupUi(QWidget *WScrivaniaComodino)
    {
        if (WScrivaniaComodino->objectName().isEmpty())
            WScrivaniaComodino->setObjectName(QString::fromUtf8("WScrivaniaComodino"));
        WScrivaniaComodino->resize(1199, 664);
        backBtn = new QPushButton(WScrivaniaComodino);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(40, 50, 111, 24));
        allObjsBtn = new QPushButton(WScrivaniaComodino);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(170, 50, 80, 24));
        scaf1Btn = new QPushButton(WScrivaniaComodino);
        scaf1Btn->setObjectName(QString::fromUtf8("scaf1Btn"));
        scaf1Btn->setGeometry(QRect(160, 300, 121, 41));
        scaf2Btn = new QPushButton(WScrivaniaComodino);
        scaf2Btn->setObjectName(QString::fromUtf8("scaf2Btn"));
        scaf2Btn->setGeometry(QRect(160, 340, 121, 41));
        cassettoLeftBtn = new QPushButton(WScrivaniaComodino);
        cassettoLeftBtn->setObjectName(QString::fromUtf8("cassettoLeftBtn"));
        cassettoLeftBtn->setGeometry(QRect(280, 270, 261, 31));
        cassettoRightBtn = new QPushButton(WScrivaniaComodino);
        cassettoRightBtn->setObjectName(QString::fromUtf8("cassettoRightBtn"));
        cassettoRightBtn->setGeometry(QRect(540, 270, 221, 31));
        cassettinoBtn = new QPushButton(WScrivaniaComodino);
        cassettinoBtn->setObjectName(QString::fromUtf8("cassettinoBtn"));
        cassettinoBtn->setGeometry(QRect(160, 270, 121, 31));
        scaf3Btn = new QPushButton(WScrivaniaComodino);
        scaf3Btn->setObjectName(QString::fromUtf8("scaf3Btn"));
        scaf3Btn->setGeometry(QRect(160, 380, 121, 31));
        scaf4Btn = new QPushButton(WScrivaniaComodino);
        scaf4Btn->setObjectName(QString::fromUtf8("scaf4Btn"));
        scaf4Btn->setGeometry(QRect(160, 410, 121, 41));
        scaf5Btn = new QPushButton(WScrivaniaComodino);
        scaf5Btn->setObjectName(QString::fromUtf8("scaf5Btn"));
        scaf5Btn->setGeometry(QRect(160, 450, 121, 41));
        cassettoHBtn = new QPushButton(WScrivaniaComodino);
        cassettoHBtn->setObjectName(QString::fromUtf8("cassettoHBtn"));
        cassettoHBtn->setGeometry(QRect(910, 310, 101, 61));
        cassettoMBtn = new QPushButton(WScrivaniaComodino);
        cassettoMBtn->setObjectName(QString::fromUtf8("cassettoMBtn"));
        cassettoMBtn->setGeometry(QRect(910, 370, 101, 61));
        cassettoLBtn = new QPushButton(WScrivaniaComodino);
        cassettoLBtn->setObjectName(QString::fromUtf8("cassettoLBtn"));
        cassettoLBtn->setGeometry(QRect(910, 430, 101, 61));

        retranslateUi(WScrivaniaComodino);

        QMetaObject::connectSlotsByName(WScrivaniaComodino);
    } // setupUi

    void retranslateUi(QWidget *WScrivaniaComodino)
    {
        WScrivaniaComodino->setWindowTitle(QCoreApplication::translate("WScrivaniaComodino", "Form", nullptr));
        backBtn->setText(QCoreApplication::translate("WScrivaniaComodino", "Back to Camera", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WScrivaniaComodino", "All objects", nullptr));
        scaf1Btn->setText(QCoreApplication::translate("WScrivaniaComodino", "Scaf1", nullptr));
        scaf2Btn->setText(QCoreApplication::translate("WScrivaniaComodino", "Scaf2", nullptr));
        cassettoLeftBtn->setText(QCoreApplication::translate("WScrivaniaComodino", "CassettoLeft", nullptr));
        cassettoRightBtn->setText(QCoreApplication::translate("WScrivaniaComodino", "CasseetoRight", nullptr));
        cassettinoBtn->setText(QCoreApplication::translate("WScrivaniaComodino", "Cassettino", nullptr));
        scaf3Btn->setText(QCoreApplication::translate("WScrivaniaComodino", "Scaf3", nullptr));
        scaf4Btn->setText(QCoreApplication::translate("WScrivaniaComodino", "Scaf4", nullptr));
        scaf5Btn->setText(QCoreApplication::translate("WScrivaniaComodino", "Scaf5", nullptr));
        cassettoHBtn->setText(QCoreApplication::translate("WScrivaniaComodino", "CassettoH", nullptr));
        cassettoMBtn->setText(QCoreApplication::translate("WScrivaniaComodino", "CassettoM", nullptr));
        cassettoLBtn->setText(QCoreApplication::translate("WScrivaniaComodino", "CassettoL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WScrivaniaComodino: public Ui_WScrivaniaComodino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSCRIVANIACOMODINO_H
