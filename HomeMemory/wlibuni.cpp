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
    emit positionSignal(0,1);
}

void WLibUni::scaf1Slot()
{
    emit positionSignal(1,1);
}

void WLibUni::ant1Slot()
{
    emit positionSignal(2,1);
}

void WLibUni::scaf2Slot()
{
    emit positionSignal(3,1);
}

void WLibUni::scaf3Slot()
{
    emit positionSignal(4,1);
}

void WLibUni::ant2Slot()
{
    emit positionSignal(5,1);
}

void WLibUni::ant3Slot()
{
    emit positionSignal(6,1);
}
