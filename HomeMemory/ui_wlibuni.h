/********************************************************************************
** Form generated from reading UI file 'wlibuni.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLIBUNI_H
#define UI_WLIBUNI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WLibUni
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *backBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *allObjsBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *scaf1Btn;
    QPushButton *ant1Btn;
    QPushButton *scaf2Btn;
    QPushButton *scaf3Btn;
    QPushButton *ant2Btn;
    QPushButton *ant3Btn;

    void setupUi(QWidget *WLibUni)
    {
        if (WLibUni->objectName().isEmpty())
            WLibUni->setObjectName(QString::fromUtf8("WLibUni"));
        WLibUni->resize(1138, 827);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WLibUni->sizePolicy().hasHeightForWidth());
        WLibUni->setSizePolicy(sizePolicy);
        WLibUni->setMinimumSize(QSize(1138, 827));
        WLibUni->setMaximumSize(QSize(1138, 827));
        verticalLayout = new QVBoxLayout(WLibUni);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        backBtn = new QPushButton(WLibUni);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));

        horizontalLayout->addWidget(backBtn);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        allObjsBtn = new QPushButton(WLibUni);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));

        horizontalLayout->addWidget(allObjsBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(WLibUni);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(20, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        label->setFont(font);
        label->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(label);

        scaf1Btn = new QPushButton(WLibUni);
        scaf1Btn->setObjectName(QString::fromUtf8("scaf1Btn"));
        sizePolicy1.setHeightForWidth(scaf1Btn->sizePolicy().hasHeightForWidth());
        scaf1Btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(scaf1Btn);

        ant1Btn = new QPushButton(WLibUni);
        ant1Btn->setObjectName(QString::fromUtf8("ant1Btn"));
        sizePolicy1.setHeightForWidth(ant1Btn->sizePolicy().hasHeightForWidth());
        ant1Btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ant1Btn);

        scaf2Btn = new QPushButton(WLibUni);
        scaf2Btn->setObjectName(QString::fromUtf8("scaf2Btn"));
        sizePolicy1.setHeightForWidth(scaf2Btn->sizePolicy().hasHeightForWidth());
        scaf2Btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(scaf2Btn);

        scaf3Btn = new QPushButton(WLibUni);
        scaf3Btn->setObjectName(QString::fromUtf8("scaf3Btn"));
        sizePolicy1.setHeightForWidth(scaf3Btn->sizePolicy().hasHeightForWidth());
        scaf3Btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(scaf3Btn);

        ant2Btn = new QPushButton(WLibUni);
        ant2Btn->setObjectName(QString::fromUtf8("ant2Btn"));
        sizePolicy1.setHeightForWidth(ant2Btn->sizePolicy().hasHeightForWidth());
        ant2Btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ant2Btn);

        ant3Btn = new QPushButton(WLibUni);
        ant3Btn->setObjectName(QString::fromUtf8("ant3Btn"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ant3Btn->sizePolicy().hasHeightForWidth());
        ant3Btn->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(ant3Btn);


        retranslateUi(WLibUni);

        QMetaObject::connectSlotsByName(WLibUni);
    } // setupUi

    void retranslateUi(QWidget *WLibUni)
    {
        WLibUni->setWindowTitle(QCoreApplication::translate("WLibUni", "Form", nullptr));
        backBtn->setText(QCoreApplication::translate("WLibUni", "Back to OpenSpace", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WLibUni", "All Objects", nullptr));
        label->setText(QCoreApplication::translate("WLibUni", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">Libreria Universit\303\240 </span></p></body></html>", nullptr));
        scaf1Btn->setText(QCoreApplication::translate("WLibUni", "Primo Scaffale", nullptr));
        ant1Btn->setText(QCoreApplication::translate("WLibUni", "Prima Anta", nullptr));
        scaf2Btn->setText(QCoreApplication::translate("WLibUni", "Secondo Scaffale", nullptr));
        scaf3Btn->setText(QCoreApplication::translate("WLibUni", "Terzo Scaffale", nullptr));
        ant2Btn->setText(QCoreApplication::translate("WLibUni", "Seconda Anta", nullptr));
        ant3Btn->setText(QCoreApplication::translate("WLibUni", "Terza Anta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WLibUni: public Ui_WLibUni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLIBUNI_H
