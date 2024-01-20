#include "wleftwall.h"
#include "ui_wleftwall.h"

WLeftWall::WLeftWall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WLeftWall)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->topBtn,SIGNAL(released()),this,SLOT(topSlot()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->scaf5Btn,SIGNAL(released()),this,SLOT(scaf5Slot()));
    connect(ui->scaf6Btn,SIGNAL(released()),this,SLOT(scaf6Slot()));
    connect(ui->scaf7Btn,SIGNAL(released()),this,SLOT(scaf7Slot()));
    connect(ui->scaf8Btn,SIGNAL(released()),this,SLOT(scaf8Slot()));
    connect(ui->floorBtn,SIGNAL(released()),this,SLOT(floorSlot()));
}

WLeftWall::~WLeftWall()
{
    delete ui;
}

void WLeftWall::allObjsEmitter()
{
    emit positionSignal(0,11);
}
void WLeftWall::topSlot()
{
    emit positionSignal(89,11);
}
void WLeftWall::scaf1Slot()
{
    emit positionSignal(90,11);
}
void WLeftWall::scaf2Slot()
{
    emit positionSignal(91,11);
}
void WLeftWall::scaf3Slot()
{
    emit positionSignal(92,11);
}
void WLeftWall::scaf4Slot()
{
    emit positionSignal(93,11);
}
void WLeftWall::scaf5Slot()
{
    emit positionSignal(94,11);
}
void WLeftWall::scaf6Slot()
{
    emit positionSignal(95,11);
}
void WLeftWall::scaf7Slot()
{
    emit positionSignal(96,11);
}
void WLeftWall::scaf8Slot()
{
    emit positionSignal(97,11);
}
void WLeftWall::floorSlot()
{
    emit positionSignal(98,11);
}
