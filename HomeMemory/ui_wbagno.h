/********************************************************************************
** Form generated from reading UI file 'wbagno.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBAGNO_H
#define UI_WBAGNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WBagno
{
public:
    QPushButton *backBtn;
    QPushButton *armadiettoLavBtn;
    QPushButton *armadioBagnoBtn;

    void setupUi(QWidget *WBagno)
    {
        if (WBagno->objectName().isEmpty())
            WBagno->setObjectName(QString::fromUtf8("WBagno"));
        WBagno->resize(1058, 645);
        backBtn = new QPushButton(WBagno);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(39, 60, 121, 24));
        armadiettoLavBtn = new QPushButton(WBagno);
        armadiettoLavBtn->setObjectName(QString::fromUtf8("armadiettoLavBtn"));
        armadiettoLavBtn->setGeometry(QRect(260, 170, 151, 71));
        armadioBagnoBtn = new QPushButton(WBagno);
        armadioBagnoBtn->setObjectName(QString::fromUtf8("armadioBagnoBtn"));
        armadioBagnoBtn->setGeometry(QRect(510, 170, 151, 71));

        retranslateUi(WBagno);

        QMetaObject::connectSlotsByName(WBagno);
    } // setupUi

    void retranslateUi(QWidget *WBagno)
    {
        WBagno->setWindowTitle(QCoreApplication::translate("WBagno", "Form", nullptr));
        backBtn->setText(QCoreApplication::translate("WBagno", "Back to Anticamera", nullptr));
        armadiettoLavBtn->setText(QCoreApplication::translate("WBagno", "Armadietto Lavandino", nullptr));
        armadioBagnoBtn->setText(QCoreApplication::translate("WBagno", "Armadio Bagno", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WBagno: public Ui_WBagno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBAGNO_H
