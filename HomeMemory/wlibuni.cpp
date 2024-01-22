#include "wlibuni.h"
#include "ui_wlibuni.h"

WLibUni::WLibUni(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WLibUni)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->ant1Btn,SIGNAL(released()),this,SLOT(ant1Slot()));
    connect(ui->ant2Btn,SIGNAL(released()),this,SLOT(ant2Slot()));
    connect(ui->ant3Btn,SIGNAL(released()),this,SLOT(ant3Slot()));
}

WLibUni::~WLibUni()
{
    delete ui;
}

void WLibUni::allObjsEmitter()
{
    allButtonsActivator();
    btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,1);
}


void WLibUni::scaf1Slot()
{
    allButtonsActivator();
    btnDeactivator(ui->scaf1Btn);
    emit positionSignal(1,1);
}

void WLibUni::ant1Slot()
{
    allButtonsActivator();
    btnDeactivator(ui->ant1Btn);
    emit positionSignal(2,1);
}

void WLibUni::scaf2Slot()
{
    allButtonsActivator();
    btnDeactivator(ui->scaf2Btn);
    emit positionSignal(3,1);
}

void WLibUni::scaf3Slot()
{
    allButtonsActivator();
    btnDeactivator(ui->scaf3Btn);
    emit positionSignal(4,1);
}

void WLibUni::ant2Slot()
{
    allButtonsActivator();
    btnDeactivator(ui->ant2Btn);
    emit positionSignal(5,1);
}

void WLibUni::ant3Slot()
{
    allButtonsActivator();
    btnDeactivator(ui->ant3Btn);
    emit positionSignal(6,1);
}

void WLibUni::allButtonsActivator()
{
    ui->allObjsBtn->setEnabled(true);
    btnDefaultColor(ui->allObjsBtn);
    ui->scaf1Btn->setEnabled(true);
    btnDefaultColor(ui->scaf1Btn);
    ui->scaf2Btn->setEnabled(true);
    btnDefaultColor(ui->scaf2Btn);
    ui->scaf3Btn->setEnabled(true);
    btnDefaultColor(ui->scaf3Btn);
    ui->ant1Btn->setEnabled(true);
    btnDefaultColor(ui->ant1Btn);
    ui->ant2Btn->setEnabled(true);
    btnDefaultColor(ui->ant2Btn);
    ui->ant3Btn->setEnabled(true);
    btnDefaultColor(ui->ant3Btn);
}

void WLibUni::btnDeactivator(QPushButton *btn)
{
    btn->setEnabled(false);
    btn->setStyleSheet("background-color: rgb(104, 59, 127); color: white;");
}

void WLibUni::btnDefaultColor(QPushButton *btn)
{
    btn->setStyleSheet("");
}