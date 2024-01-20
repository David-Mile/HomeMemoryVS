/********************************************************************************
** Form generated from reading UI file 'wopenspace.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOPENSPACE_H
#define UI_WOPENSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WOpenSpace
{
public:
    QPushButton *libUniBtn;
    QPushButton *salottoBtn;
    QPushButton *cucinaBtn;
    QPushButton *scarpieraBtn;
    QPushButton *anticameraBtn;
    QPushButton *balconeBtn;

    void setupUi(QWidget *WOpenSpace)
    {
        if (WOpenSpace->objectName().isEmpty())
            WOpenSpace->setObjectName(QString::fromUtf8("WOpenSpace"));
        WOpenSpace->resize(854, 384);
        libUniBtn = new QPushButton(WOpenSpace);
        libUniBtn->setObjectName(QString::fromUtf8("libUniBtn"));
        libUniBtn->setGeometry(QRect(90, 110, 80, 24));
        salottoBtn = new QPushButton(WOpenSpace);
        salottoBtn->setObjectName(QString::fromUtf8("salottoBtn"));
        salottoBtn->setGeometry(QRect(240, 110, 80, 24));
        cucinaBtn = new QPushButton(WOpenSpace);
        cucinaBtn->setObjectName(QString::fromUtf8("cucinaBtn"));
        cucinaBtn->setGeometry(QRect(400, 110, 80, 24));
        scarpieraBtn = new QPushButton(WOpenSpace);
        scarpieraBtn->setObjectName(QString::fromUtf8("scarpieraBtn"));
        scarpieraBtn->setGeometry(QRect(560, 110, 80, 24));
        anticameraBtn = new QPushButton(WOpenSpace);
        anticameraBtn->setObjectName(QString::fromUtf8("anticameraBtn"));
        anticameraBtn->setGeometry(QRect(90, 170, 80, 24));
        balconeBtn = new QPushButton(WOpenSpace);
        balconeBtn->setObjectName(QString::fromUtf8("balconeBtn"));
        balconeBtn->setGeometry(QRect(240, 170, 80, 24));

        retranslateUi(WOpenSpace);

        QMetaObject::connectSlotsByName(WOpenSpace);
    } // setupUi

    void retranslateUi(QWidget *WOpenSpace)
    {
        WOpenSpace->setWindowTitle(QCoreApplication::translate("WOpenSpace", "Form", nullptr));
        libUniBtn->setText(QCoreApplication::translate("WOpenSpace", "Libreria Uni", nullptr));
        salottoBtn->setText(QCoreApplication::translate("WOpenSpace", "Salotto", nullptr));
        cucinaBtn->setText(QCoreApplication::translate("WOpenSpace", "Cucina", nullptr));
        scarpieraBtn->setText(QCoreApplication::translate("WOpenSpace", "Scarpiera", nullptr));
        anticameraBtn->setText(QCoreApplication::translate("WOpenSpace", "Anticamera", nullptr));
        balconeBtn->setText(QCoreApplication::translate("WOpenSpace", "Balcone", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WOpenSpace: public Ui_WOpenSpace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOPENSPACE_H
