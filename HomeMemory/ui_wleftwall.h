/********************************************************************************
** Form generated from reading UI file 'wleftwall.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLEFTWALL_H
#define UI_WLEFTWALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WLeftWall
{
public:
    QPushButton *backBtn;
    QPushButton *scaf1Btn;
    QPushButton *topBtn;
    QPushButton *scaf3Btn;
    QPushButton *scaf2Btn;
    QPushButton *scaf8Btn;
    QPushButton *scaf7Btn;
    QPushButton *scaf4Btn;
    QPushButton *scaf6Btn;
    QPushButton *scaf5Btn;
    QPushButton *floorBtn;
    QPushButton *allObjsBtn;

    void setupUi(QWidget *WLeftWall)
    {
        if (WLeftWall->objectName().isEmpty())
            WLeftWall->setObjectName(QString::fromUtf8("WLeftWall"));
        WLeftWall->resize(1143, 659);
        backBtn = new QPushButton(WLeftWall);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(70, 50, 131, 24));
        scaf1Btn = new QPushButton(WLeftWall);
        scaf1Btn->setObjectName(QString::fromUtf8("scaf1Btn"));
        scaf1Btn->setGeometry(QRect(170, 130, 251, 51));
        topBtn = new QPushButton(WLeftWall);
        topBtn->setObjectName(QString::fromUtf8("topBtn"));
        topBtn->setGeometry(QRect(170, 110, 251, 24));
        scaf3Btn = new QPushButton(WLeftWall);
        scaf3Btn->setObjectName(QString::fromUtf8("scaf3Btn"));
        scaf3Btn->setGeometry(QRect(170, 230, 251, 51));
        scaf2Btn = new QPushButton(WLeftWall);
        scaf2Btn->setObjectName(QString::fromUtf8("scaf2Btn"));
        scaf2Btn->setGeometry(QRect(170, 180, 251, 51));
        scaf8Btn = new QPushButton(WLeftWall);
        scaf8Btn->setObjectName(QString::fromUtf8("scaf8Btn"));
        scaf8Btn->setGeometry(QRect(170, 480, 251, 51));
        scaf7Btn = new QPushButton(WLeftWall);
        scaf7Btn->setObjectName(QString::fromUtf8("scaf7Btn"));
        scaf7Btn->setGeometry(QRect(170, 430, 251, 51));
        scaf4Btn = new QPushButton(WLeftWall);
        scaf4Btn->setObjectName(QString::fromUtf8("scaf4Btn"));
        scaf4Btn->setGeometry(QRect(170, 280, 251, 51));
        scaf6Btn = new QPushButton(WLeftWall);
        scaf6Btn->setObjectName(QString::fromUtf8("scaf6Btn"));
        scaf6Btn->setGeometry(QRect(170, 380, 251, 51));
        scaf5Btn = new QPushButton(WLeftWall);
        scaf5Btn->setObjectName(QString::fromUtf8("scaf5Btn"));
        scaf5Btn->setGeometry(QRect(170, 330, 251, 51));
        floorBtn = new QPushButton(WLeftWall);
        floorBtn->setObjectName(QString::fromUtf8("floorBtn"));
        floorBtn->setGeometry(QRect(480, 500, 471, 24));
        allObjsBtn = new QPushButton(WLeftWall);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(230, 50, 80, 24));

        retranslateUi(WLeftWall);

        QMetaObject::connectSlotsByName(WLeftWall);
    } // setupUi

    void retranslateUi(QWidget *WLeftWall)
    {
        WLeftWall->setWindowTitle(QCoreApplication::translate("WLeftWall", "Form", nullptr));
        backBtn->setText(QCoreApplication::translate("WLeftWall", "Back to Cantina", nullptr));
        scaf1Btn->setText(QCoreApplication::translate("WLeftWall", "Scaf1", nullptr));
        topBtn->setText(QCoreApplication::translate("WLeftWall", "Top", nullptr));
        scaf3Btn->setText(QCoreApplication::translate("WLeftWall", "Scaf3", nullptr));
        scaf2Btn->setText(QCoreApplication::translate("WLeftWall", "Scaf2", nullptr));
        scaf8Btn->setText(QCoreApplication::translate("WLeftWall", "Scaf8", nullptr));
        scaf7Btn->setText(QCoreApplication::translate("WLeftWall", "Scaf7", nullptr));
        scaf4Btn->setText(QCoreApplication::translate("WLeftWall", "Scaf4", nullptr));
        scaf6Btn->setText(QCoreApplication::translate("WLeftWall", "Scaf6", nullptr));
        scaf5Btn->setText(QCoreApplication::translate("WLeftWall", "Scaf5", nullptr));
        floorBtn->setText(QCoreApplication::translate("WLeftWall", "Floor", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WLeftWall", "All Objects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WLeftWall: public Ui_WLeftWall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLEFTWALL_H
