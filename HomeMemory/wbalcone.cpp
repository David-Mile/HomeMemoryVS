#include "wbalcone.h"
#include "ui_wbalcone.h"

WBalcone::WBalcone(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WBalcone)
{
    ui->setupUi(this);

    connect(ui->cameraBtn,SIGNAL(released()),this,SIGNAL(cameraSignal()));
    connect(ui->openSpaceBtn,SIGNAL(released()),this,SIGNAL(openSpaceSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->cassapancaBtn,SIGNAL(released()),this,SLOT(cassapancaSlot()));
    connect(ui->scafLeft1Btn,SIGNAL(released()),this,SLOT(scafLeft1Slot()));
    connect(ui->scafLeft2Btn,SIGNAL(released()),this,SLOT(scafLeft2Slot()));
    connect(ui->scafLeft3Btn,SIGNAL(released()),this,SLOT(scafLeft3Slot()));
    connect(ui->scafLeft4Btn,SIGNAL(released()),this,SLOT(scafLeft4Slot()));
    connect(ui->floorLeftBtn,SIGNAL(released()),this,SLOT(floorLeftSlot()));
    connect(ui->scafRight1Btn,SIGNAL(released()),this,SLOT(scafRight1Slot()));
    connect(ui->scafRight2Btn,SIGNAL(released()),this,SLOT(scafRight2Slot()));
    connect(ui->scafRight3Btn,SIGNAL(released()),this,SLOT(scafRight3Slot()));
    connect(ui->scafRight4Btn,SIGNAL(released()),this,SLOT(scafRight4Slot()));
}

WBalcone::~WBalcone()
{
    delete ui;
}

void WBalcone::allObjsEmitter()
{
    emit positionSignal(0,8);
}
void WBalcone::cassapancaSlot()
{
    emit positionSignal(51,8);
}
void WBalcone::scafLeft1Slot()
{
    emit positionSignal(52,8);
}
void WBalcone::scafLeft2Slot()
{
    emit positionSignal(53,8);
}
void WBalcone::scafLeft3Slot()
{
    emit positionSignal(54,8);
}
void WBalcone::scafLeft4Slot()
{
    emit positionSignal(55,8);
}
void WBalcone::floorLeftSlot()
{
    emit positionSignal(56,8);
}
void WBalcone::scafRight1Slot()
{
    emit positionSignal(57,8);
}
void WBalcone::scafRight2Slot()
{
    emit positionSignal(58,8);
}
void WBalcone::scafRight3Slot()
{
    emit positionSignal(59,8);
}
void WBalcone::scafRight4Slot()
{
    emit positionSignal(60,8);
}
