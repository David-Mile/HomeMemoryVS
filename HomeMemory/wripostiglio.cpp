#include "wripostiglio.h"
#include "ui_wripostiglio.h"

WRipostiglio::WRipostiglio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WRipostiglio)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->scaf5Btn,SIGNAL(released()),this,SLOT(scaf5Slot()));
    connect(ui->scaf6Btn,SIGNAL(released()),this,SLOT(scaf6Slot()));
    connect(ui->scaf7Btn,SIGNAL(released()),this,SLOT(scaf7Slot()));
    connect(ui->scaf8Btn,SIGNAL(released()),this,SLOT(scaf8Slot()));
    connect(ui->scaf9Btn,SIGNAL(released()),this,SLOT(scaf9Slot()));
    connect(ui->floorBtn,SIGNAL(released()),this,SLOT(floorSlot()));
}

WRipostiglio::~WRipostiglio()
{
    delete ui;
}

void WRipostiglio::allObjsEmitter()
{
    emit positionSignal(0,5);
}
void WRipostiglio::scaf1Slot()
{
    emit positionSignal(32,5);
}
void WRipostiglio::scaf2Slot()
{
    emit positionSignal(33,5);
}
void WRipostiglio::scaf3Slot()
{
    emit positionSignal(34,5);
}
void WRipostiglio::scaf4Slot()
{
    emit positionSignal(35,5);
}
void WRipostiglio::scaf5Slot()
{
    emit positionSignal(36,5);
}
void WRipostiglio::scaf6Slot()
{
    emit positionSignal(37,5);
}
void WRipostiglio::scaf7Slot()
{
    emit positionSignal(38,5);
}
void WRipostiglio::scaf8Slot()
{
    emit positionSignal(39,5);
}
void WRipostiglio::scaf9Slot()
{
    emit positionSignal(40,5);
}
void WRipostiglio::floorSlot()
{
    emit positionSignal(41,5);
}
