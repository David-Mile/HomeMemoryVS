/********************************************************************************
** Form generated from reading UI file 'wripostiglio.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRIPOSTIGLIO_H
#define UI_WRIPOSTIGLIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WRipostiglio
{
public:
    QPushButton *scaf3Btn;
    QPushButton *scaf4Btn;
    QPushButton *scaf5Btn;
    QPushButton *scaf6Btn;
    QPushButton *scaf7Btn;
    QPushButton *scaf8Btn;
    QPushButton *scaf2Btn;
    QPushButton *scaf1Btn;
    QPushButton *scaf9Btn;
    QPushButton *floorBtn;
    QPushButton *backBtn;
    QPushButton *allObjsBtn;

    void setupUi(QWidget *WRipostiglio)
    {
        if (WRipostiglio->objectName().isEmpty())
            WRipostiglio->setObjectName(QString::fromUtf8("WRipostiglio"));
        WRipostiglio->resize(1024, 699);
        scaf3Btn = new QPushButton(WRipostiglio);
        scaf3Btn->setObjectName(QString::fromUtf8("scaf3Btn"));
        scaf3Btn->setGeometry(QRect(340, 160, 161, 61));
        scaf4Btn = new QPushButton(WRipostiglio);
        scaf4Btn->setObjectName(QString::fromUtf8("scaf4Btn"));
        scaf4Btn->setGeometry(QRect(340, 220, 161, 61));
        scaf5Btn = new QPushButton(WRipostiglio);
        scaf5Btn->setObjectName(QString::fromUtf8("scaf5Btn"));
        scaf5Btn->setGeometry(QRect(340, 280, 161, 61));
        scaf6Btn = new QPushButton(WRipostiglio);
        scaf6Btn->setObjectName(QString::fromUtf8("scaf6Btn"));
        scaf6Btn->setGeometry(QRect(340, 340, 161, 61));
        scaf7Btn = new QPushButton(WRipostiglio);
        scaf7Btn->setObjectName(QString::fromUtf8("scaf7Btn"));
        scaf7Btn->setGeometry(QRect(340, 400, 161, 61));
        scaf8Btn = new QPushButton(WRipostiglio);
        scaf8Btn->setObjectName(QString::fromUtf8("scaf8Btn"));
        scaf8Btn->setGeometry(QRect(340, 460, 161, 61));
        scaf2Btn = new QPushButton(WRipostiglio);
        scaf2Btn->setObjectName(QString::fromUtf8("scaf2Btn"));
        scaf2Btn->setGeometry(QRect(340, 100, 161, 61));
        scaf1Btn = new QPushButton(WRipostiglio);
        scaf1Btn->setObjectName(QString::fromUtf8("scaf1Btn"));
        scaf1Btn->setGeometry(QRect(340, 43, 161, 61));
        scaf9Btn = new QPushButton(WRipostiglio);
        scaf9Btn->setObjectName(QString::fromUtf8("scaf9Btn"));
        scaf9Btn->setGeometry(QRect(340, 520, 161, 61));
        floorBtn = new QPushButton(WRipostiglio);
        floorBtn->setObjectName(QString::fromUtf8("floorBtn"));
        floorBtn->setGeometry(QRect(269, 580, 311, 31));
        backBtn = new QPushButton(WRipostiglio);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(40, 60, 121, 24));
        allObjsBtn = new QPushButton(WRipostiglio);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(180, 60, 80, 24));

        retranslateUi(WRipostiglio);

        QMetaObject::connectSlotsByName(WRipostiglio);
    } // setupUi

    void retranslateUi(QWidget *WRipostiglio)
    {
        WRipostiglio->setWindowTitle(QCoreApplication::translate("WRipostiglio", "Form", nullptr));
        scaf3Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf3", nullptr));
        scaf4Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf4", nullptr));
        scaf5Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf5", nullptr));
        scaf6Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf6", nullptr));
        scaf7Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf7", nullptr));
        scaf8Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf8", nullptr));
        scaf2Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf2", nullptr));
        scaf1Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf1", nullptr));
        scaf9Btn->setText(QCoreApplication::translate("WRipostiglio", "Scaf9", nullptr));
        floorBtn->setText(QCoreApplication::translate("WRipostiglio", "Floor", nullptr));
        backBtn->setText(QCoreApplication::translate("WRipostiglio", "Back to Anticamera", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WRipostiglio", "All Objects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WRipostiglio: public Ui_WRipostiglio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRIPOSTIGLIO_H
