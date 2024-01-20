/********************************************************************************
** Form generated from reading UI file 'wbox.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBOX_H
#define UI_WBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WBox
{
public:
    QLabel *label;

    void setupUi(QWidget *WBox)
    {
        if (WBox->objectName().isEmpty())
            WBox->setObjectName(QString::fromUtf8("WBox"));
        WBox->resize(1135, 661);
        label = new QLabel(WBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 240, 621, 181));

        retranslateUi(WBox);

        QMetaObject::connectSlotsByName(WBox);
    } // setupUi

    void retranslateUi(QWidget *WBox)
    {
        WBox->setWindowTitle(QCoreApplication::translate("WBox", "Form", nullptr));
        label->setText(QCoreApplication::translate("WBox", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#6d00a3;\">Just an image of the Box</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WBox: public Ui_WBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBOX_H
