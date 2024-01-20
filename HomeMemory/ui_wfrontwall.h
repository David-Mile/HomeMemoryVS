/********************************************************************************
** Form generated from reading UI file 'wfrontwall.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WFRONTWALL_H
#define UI_WFRONTWALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WFrontWall
{
public:
    QPushButton *backBtn;
    QPushButton *topBtn;
    QPushButton *scaf1Btn;
    QPushButton *scaf2Btn;
    QPushButton *scaf3Btn;
    QPushButton *scaf4Btn;
    QPushButton *bottomBtn;
    QPushButton *floorBtn;
    QPushButton *allObjsBtn;

    void setupUi(QWidget *WFrontWall)
    {
        if (WFrontWall->objectName().isEmpty())
            WFrontWall->setObjectName(QString::fromUtf8("WFrontWall"));
        WFrontWall->resize(1144, 664);
        backBtn = new QPushButton(WFrontWall);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(80, 50, 131, 24));
        topBtn = new QPushButton(WFrontWall);
        topBtn->setObjectName(QString::fromUtf8("topBtn"));
        topBtn->setGeometry(QRect(170, 110, 301, 21));
        scaf1Btn = new QPushButton(WFrontWall);
        scaf1Btn->setObjectName(QString::fromUtf8("scaf1Btn"));
        scaf1Btn->setGeometry(QRect(170, 130, 301, 81));
        scaf2Btn = new QPushButton(WFrontWall);
        scaf2Btn->setObjectName(QString::fromUtf8("scaf2Btn"));
        scaf2Btn->setGeometry(QRect(170, 210, 301, 81));
        scaf3Btn = new QPushButton(WFrontWall);
        scaf3Btn->setObjectName(QString::fromUtf8("scaf3Btn"));
        scaf3Btn->setGeometry(QRect(170, 290, 301, 81));
        scaf4Btn = new QPushButton(WFrontWall);
        scaf4Btn->setObjectName(QString::fromUtf8("scaf4Btn"));
        scaf4Btn->setGeometry(QRect(170, 370, 301, 81));
        bottomBtn = new QPushButton(WFrontWall);
        bottomBtn->setObjectName(QString::fromUtf8("bottomBtn"));
        bottomBtn->setGeometry(QRect(170, 450, 301, 24));
        floorBtn = new QPushButton(WFrontWall);
        floorBtn->setObjectName(QString::fromUtf8("floorBtn"));
        floorBtn->setGeometry(QRect(520, 450, 381, 24));
        allObjsBtn = new QPushButton(WFrontWall);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(240, 50, 91, 24));

        retranslateUi(WFrontWall);

        QMetaObject::connectSlotsByName(WFrontWall);
    } // setupUi

    void retranslateUi(QWidget *WFrontWall)
    {
        WFrontWall->setWindowTitle(QCoreApplication::translate("WFrontWall", "Form", nullptr));
        backBtn->setText(QCoreApplication::translate("WFrontWall", "Back to Cantina", nullptr));
        topBtn->setText(QCoreApplication::translate("WFrontWall", "Top", nullptr));
        scaf1Btn->setText(QCoreApplication::translate("WFrontWall", "Scaf1", nullptr));
        scaf2Btn->setText(QCoreApplication::translate("WFrontWall", "Scaf2", nullptr));
        scaf3Btn->setText(QCoreApplication::translate("WFrontWall", "Scaf3", nullptr));
        scaf4Btn->setText(QCoreApplication::translate("WFrontWall", "Scaf4", nullptr));
        bottomBtn->setText(QCoreApplication::translate("WFrontWall", "Bottom", nullptr));
        floorBtn->setText(QCoreApplication::translate("WFrontWall", "Floor", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WFrontWall", "All Objects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WFrontWall: public Ui_WFrontWall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WFRONTWALL_H
