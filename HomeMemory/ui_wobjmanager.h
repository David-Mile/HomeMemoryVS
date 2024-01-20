/********************************************************************************
** Form generated from reading UI file 'wobjmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOBJMANAGER_H
#define UI_WOBJMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WObjManager
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *clmResizeBtn;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *labelClmMode;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *saveBtn;
    QPushButton *addBtn;
    QPushButton *deleteBtn;
    QPushButton *RefreshBtn;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *WObjManager)
    {
        if (WObjManager->objectName().isEmpty())
            WObjManager->setObjectName(QString::fromUtf8("WObjManager"));
        WObjManager->setWindowModality(Qt::NonModal);
        WObjManager->setEnabled(true);
        WObjManager->resize(650, 967);
        horizontalLayout_3 = new QHBoxLayout(WObjManager);
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(9, 9, 9, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        clmResizeBtn = new QPushButton(WObjManager);
        clmResizeBtn->setObjectName(QString::fromUtf8("clmResizeBtn"));
        clmResizeBtn->setMinimumSize(QSize(135, 0));

        horizontalLayout_5->addWidget(clmResizeBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label = new QLabel(WObjManager);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        labelClmMode = new QLabel(WObjManager);
        labelClmMode->setObjectName(QString::fromUtf8("labelClmMode"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelClmMode->sizePolicy().hasHeightForWidth());
        labelClmMode->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(labelClmMode);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableWidget = new QTableWidget(WObjManager);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget->setBaseSize(QSize(0, 0));
        tableWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setVisible(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);

        horizontalLayout_2->addWidget(tableWidget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        saveBtn = new QPushButton(WObjManager);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(saveBtn->sizePolicy().hasHeightForWidth());
        saveBtn->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(saveBtn);

        addBtn = new QPushButton(WObjManager);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));

        verticalLayout_4->addWidget(addBtn);

        deleteBtn = new QPushButton(WObjManager);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));

        verticalLayout_4->addWidget(deleteBtn);

        RefreshBtn = new QPushButton(WObjManager);
        RefreshBtn->setObjectName(QString::fromUtf8("RefreshBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(RefreshBtn->sizePolicy().hasHeightForWidth());
        RefreshBtn->setSizePolicy(sizePolicy3);
        RefreshBtn->setMinimumSize(QSize(80, 0));

        verticalLayout_4->addWidget(RefreshBtn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(WObjManager);

        QMetaObject::connectSlotsByName(WObjManager);
    } // setupUi

    void retranslateUi(QWidget *WObjManager)
    {
        WObjManager->setWindowTitle(QCoreApplication::translate("WObjManager", "Form", nullptr));
        clmResizeBtn->setText(QCoreApplication::translate("WObjManager", "Switch Column Resizing", nullptr));
        label->setText(QCoreApplication::translate("WObjManager", "Column Resizing: ", nullptr));
        labelClmMode->setText(QCoreApplication::translate("WObjManager", "Automatic", nullptr));
        saveBtn->setText(QCoreApplication::translate("WObjManager", "Save", nullptr));
        addBtn->setText(QCoreApplication::translate("WObjManager", "Add", nullptr));
        deleteBtn->setText(QCoreApplication::translate("WObjManager", "Delete", nullptr));
        RefreshBtn->setText(QCoreApplication::translate("WObjManager", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WObjManager: public Ui_WObjManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOBJMANAGER_H
