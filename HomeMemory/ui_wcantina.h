/********************************************************************************
** Form generated from reading UI file 'wcantina.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCANTINA_H
#define UI_WCANTINA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WCantina
{
public:
    QPushButton *leftWallBtn;
    QPushButton *frontWallBtn;

    void setupUi(QWidget *WCantina)
    {
        if (WCantina->objectName().isEmpty())
            WCantina->setObjectName(QString::fromUtf8("WCantina"));
        WCantina->resize(1009, 641);
        leftWallBtn = new QPushButton(WCantina);
        leftWallBtn->setObjectName(QString::fromUtf8("leftWallBtn"));
        leftWallBtn->setGeometry(QRect(200, 160, 131, 121));
        frontWallBtn = new QPushButton(WCantina);
        frontWallBtn->setObjectName(QString::fromUtf8("frontWallBtn"));
        frontWallBtn->setGeometry(QRect(570, 150, 131, 121));

        retranslateUi(WCantina);

        QMetaObject::connectSlotsByName(WCantina);
    } // setupUi

    void retranslateUi(QWidget *WCantina)
    {
        WCantina->setWindowTitle(QCoreApplication::translate("WCantina", "Form", nullptr));
        leftWallBtn->setText(QCoreApplication::translate("WCantina", "LeftWall", nullptr));
        frontWallBtn->setText(QCoreApplication::translate("WCantina", "FrontWall", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WCantina: public Ui_WCantina {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCANTINA_H
