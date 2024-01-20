/********************************************************************************
** Form generated from reading UI file 'warmadiettolav.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARMADIETTOLAV_H
#define UI_WARMADIETTOLAV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WArmadiettoLav
{
public:
    QPushButton *antaDaviBtn;
    QPushButton *allObjsBtn;
    QPushButton *backBtn;
    QPushButton *antaAryBtn;
    QPushButton *scafLavBtn;

    void setupUi(QWidget *WArmadiettoLav)
    {
        if (WArmadiettoLav->objectName().isEmpty())
            WArmadiettoLav->setObjectName(QString::fromUtf8("WArmadiettoLav"));
        WArmadiettoLav->resize(774, 631);
        antaDaviBtn = new QPushButton(WArmadiettoLav);
        antaDaviBtn->setObjectName(QString::fromUtf8("antaDaviBtn"));
        antaDaviBtn->setGeometry(QRect(390, 160, 80, 161));
        allObjsBtn = new QPushButton(WArmadiettoLav);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(220, 80, 80, 24));
        backBtn = new QPushButton(WArmadiettoLav);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(79, 80, 121, 24));
        antaAryBtn = new QPushButton(WArmadiettoLav);
        antaAryBtn->setObjectName(QString::fromUtf8("antaAryBtn"));
        antaAryBtn->setGeometry(QRect(470, 160, 80, 161));
        scafLavBtn = new QPushButton(WArmadiettoLav);
        scafLavBtn->setObjectName(QString::fromUtf8("scafLavBtn"));
        scafLavBtn->setGeometry(QRect(390, 320, 161, 31));

        retranslateUi(WArmadiettoLav);

        QMetaObject::connectSlotsByName(WArmadiettoLav);
    } // setupUi

    void retranslateUi(QWidget *WArmadiettoLav)
    {
        WArmadiettoLav->setWindowTitle(QCoreApplication::translate("WArmadiettoLav", "Form", nullptr));
        antaDaviBtn->setText(QCoreApplication::translate("WArmadiettoLav", "Anta Davi", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WArmadiettoLav", "All Objects", nullptr));
        backBtn->setText(QCoreApplication::translate("WArmadiettoLav", "Back to Bagno", nullptr));
        antaAryBtn->setText(QCoreApplication::translate("WArmadiettoLav", "Anta Ary", nullptr));
        scafLavBtn->setText(QCoreApplication::translate("WArmadiettoLav", "ScafLav", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WArmadiettoLav: public Ui_WArmadiettoLav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARMADIETTOLAV_H
