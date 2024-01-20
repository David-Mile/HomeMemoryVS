/********************************************************************************
** Form generated from reading UI file 'warmadiobagno.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARMADIOBAGNO_H
#define UI_WARMADIOBAGNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WArmadioBagno
{
public:
    QPushButton *scaf1Btn;
    QPushButton *scaf2Btn;
    QPushButton *scaf3Btn;
    QPushButton *scaf4Btn;
    QPushButton *scaf5Btn;
    QPushButton *scaf6Btn;
    QPushButton *allObjsBtn;
    QPushButton *backBtn;

    void setupUi(QWidget *WArmadioBagno)
    {
        if (WArmadioBagno->objectName().isEmpty())
            WArmadioBagno->setObjectName(QString::fromUtf8("WArmadioBagno"));
        WArmadioBagno->resize(780, 658);
        scaf1Btn = new QPushButton(WArmadioBagno);
        scaf1Btn->setObjectName(QString::fromUtf8("scaf1Btn"));
        scaf1Btn->setGeometry(QRect(310, 60, 80, 81));
        scaf2Btn = new QPushButton(WArmadioBagno);
        scaf2Btn->setObjectName(QString::fromUtf8("scaf2Btn"));
        scaf2Btn->setGeometry(QRect(310, 140, 80, 81));
        scaf3Btn = new QPushButton(WArmadioBagno);
        scaf3Btn->setObjectName(QString::fromUtf8("scaf3Btn"));
        scaf3Btn->setGeometry(QRect(310, 220, 80, 81));
        scaf4Btn = new QPushButton(WArmadioBagno);
        scaf4Btn->setObjectName(QString::fromUtf8("scaf4Btn"));
        scaf4Btn->setGeometry(QRect(310, 300, 80, 81));
        scaf5Btn = new QPushButton(WArmadioBagno);
        scaf5Btn->setObjectName(QString::fromUtf8("scaf5Btn"));
        scaf5Btn->setGeometry(QRect(310, 380, 80, 81));
        scaf6Btn = new QPushButton(WArmadioBagno);
        scaf6Btn->setObjectName(QString::fromUtf8("scaf6Btn"));
        scaf6Btn->setGeometry(QRect(310, 460, 80, 81));
        allObjsBtn = new QPushButton(WArmadioBagno);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(191, 60, 80, 24));
        backBtn = new QPushButton(WArmadioBagno);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(50, 60, 121, 24));

        retranslateUi(WArmadioBagno);

        QMetaObject::connectSlotsByName(WArmadioBagno);
    } // setupUi

    void retranslateUi(QWidget *WArmadioBagno)
    {
        WArmadioBagno->setWindowTitle(QCoreApplication::translate("WArmadioBagno", "Form", nullptr));
        scaf1Btn->setText(QCoreApplication::translate("WArmadioBagno", "Scaf1", nullptr));
        scaf2Btn->setText(QCoreApplication::translate("WArmadioBagno", "Scaf2", nullptr));
        scaf3Btn->setText(QCoreApplication::translate("WArmadioBagno", "Scaf3", nullptr));
        scaf4Btn->setText(QCoreApplication::translate("WArmadioBagno", "Scaf4", nullptr));
        scaf5Btn->setText(QCoreApplication::translate("WArmadioBagno", "Scaf5", nullptr));
        scaf6Btn->setText(QCoreApplication::translate("WArmadioBagno", "Scaf6", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WArmadioBagno", "All Objects", nullptr));
        backBtn->setText(QCoreApplication::translate("WArmadioBagno", "Back to Bagno", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WArmadioBagno: public Ui_WArmadioBagno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARMADIOBAGNO_H
