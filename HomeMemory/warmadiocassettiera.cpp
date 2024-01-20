#include "warmadiocassettiera.h"
#include "ui_warmadiocassettiera.h"

WArmadioCassettiera::WArmadioCassettiera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WArmadioCassettiera)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scafLeft1Btn,SIGNAL(released()),this,SLOT(scafLeft1Slot()));
    connect(ui->scafLeft2Btn,SIGNAL(released()),this,SLOT(scafLeft2Slot()));
    connect(ui->scafLeft3Btn,SIGNAL(released()),this,SLOT(scafLeft3Slot()));
    connect(ui->appendiLeftBtn,SIGNAL(released()),this,SLOT(appendiLeftSlot()));
    connect(ui->floorAppendiLeftBtn,SIGNAL(released()),this,SLOT(floorAppendiLeftSlot()));
    connect(ui->appendiRightBtn,SIGNAL(released()),this,SLOT(appendiRightSlot()));
    connect(ui->floorAppendiRightBtn,SIGNAL(released()),this,SLOT(floorAppendiRightSlot()));
    connect(ui->scafRight1Btn,SIGNAL(released()),this,SLOT(scafRight1Slot()));
    connect(ui->scafRight2Btn,SIGNAL(released()),this,SLOT(scafRight2Slot()));
    connect(ui->scafRight3Btn,SIGNAL(released()),this,SLOT(scafRight3Slot()));
    connect(ui->cassetto1Btn,SIGNAL(released()),this,SLOT(cassetto1Slot()));
    connect(ui->cassetto2Btn,SIGNAL(released()),this,SLOT(cassetto2Slot()));
    connect(ui->cassetto3Btn,SIGNAL(released()),this,SLOT(cassetto3Slot()));
    connect(ui->cassettoLeftHBtn,SIGNAL(released()),this,SLOT(cassettoLeftHSlot()));
    connect(ui->cassettoLeftLBtn,SIGNAL(released()),this,SLOT(cassettoLeftLSlot()));
    connect(ui->cassettoRightHBtn,SIGNAL(released()),this,SLOT(cassettoRightHSlot()));
    connect(ui->cassettoRightLBtn,SIGNAL(released()),this,SLOT(cassettoRightLSlot()));

}

WArmadioCassettiera::~WArmadioCassettiera()
{
    delete ui;
}

void WArmadioCassettiera::allObjsEmitter()
{
    emit positionSignal(0,9);
}

void WArmadioCassettiera::scafLeft1Slot()
{
    emit positionSignal(61,9);
}
void WArmadioCassettiera::scafLeft2Slot()
{
    emit positionSignal(62,9);
}
void WArmadioCassettiera::scafLeft3Slot()
{
    emit positionSignal(63,9);
}
void WArmadioCassettiera::appendiLeftSlot()
{
    emit positionSignal(64,9);
}
void WArmadioCassettiera::floorAppendiLeftSlot()
{
    emit positionSignal(65,9);
}
void WArmadioCassettiera::appendiRightSlot()
{
    emit positionSignal(66,9);
}
void WArmadioCassettiera::floorAppendiRightSlot()
{
    emit positionSignal(67,9);
}
void WArmadioCassettiera::scafRight1Slot()
{
    emit positionSignal(68,9);
}
void WArmadioCassettiera::scafRight2Slot()
{
    emit positionSignal(69,9);
}
void WArmadioCassettiera::scafRight3Slot()
{
    emit positionSignal(70,9);
}
void WArmadioCassettiera::cassetto1Slot()
{
    emit positionSignal(71,9);
}
void WArmadioCassettiera::cassetto2Slot()
{
    emit positionSignal(72,9);
}
void WArmadioCassettiera::cassetto3Slot()
{
    emit positionSignal(73,9);
}
void WArmadioCassettiera::cassettoLeftHSlot()
{
    emit positionSignal(74,9);
}
void WArmadioCassettiera::cassettoLeftLSlot()
{
    emit positionSignal(75,9);
}
void WArmadioCassettiera::cassettoRightHSlot()
{
    emit positionSignal(76,9);
}
void WArmadioCassettiera::cassettoRightLSlot()
{
    emit positionSignal(77,9);
}
