#include "wfrontwall.h"
#include "ui_wfrontwall.h"

WFrontWall::WFrontWall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WFrontWall)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->topBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->bottomBtn,SIGNAL(released()),this,SLOT(bottomSlot()));
    connect(ui->floorBtn,SIGNAL(released()),this,SLOT(floorSlot()));
}

WFrontWall::~WFrontWall()
{
    delete ui;
}

void WFrontWall::allObjsEmitter()
{
    emit positionSignal(0,12);
}
void WFrontWall::topSlot()
{
    emit positionSignal(99,12);
}
void WFrontWall::scaf1Slot()
{
    emit positionSignal(100,12);
}
void WFrontWall::scaf2Slot()
{
    emit positionSignal(101,12);
}
void WFrontWall::scaf3Slot()
{
    emit positionSignal(102,12);
}
void WFrontWall::scaf4Slot()
{
    emit positionSignal(103,12);
}
void WFrontWall::bottomSlot()
{
    emit positionSignal(104,12);
}
void WFrontWall::floorSlot()
{
    emit positionSignal(105,12);
}
