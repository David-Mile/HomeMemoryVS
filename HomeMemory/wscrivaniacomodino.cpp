#include "wscrivaniacomodino.h"
#include "ui_wscrivaniacomodino.h"

WScrivaniaComodino::WScrivaniaComodino(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WScrivaniaComodino)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->cassettinoBtn,SIGNAL(released()),this,SLOT(cassettinoSlot()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->scaf5Btn,SIGNAL(released()),this,SLOT(scaf5Slot()));
    connect(ui->cassettoLeftBtn,SIGNAL(released()),this,SLOT(cassettoLeftSlot()));
    connect(ui->cassettoRightBtn,SIGNAL(released()),this,SLOT(cassettoRightSlot()));
    connect(ui->cassettoHBtn,SIGNAL(released()),this,SLOT(cassettoHSlot()));
    connect(ui->cassettoMBtn,SIGNAL(released()),this,SLOT(cassettoMSlot()));
    connect(ui->cassettoLBtn,SIGNAL(released()),this,SLOT(cassettoLSlot()));

}

WScrivaniaComodino::~WScrivaniaComodino()
{
    delete ui;
}

void WScrivaniaComodino::allObjsEmitter()
{
    emit positionSignal(0,10);
}
void WScrivaniaComodino::cassettinoSlot()
{
    emit positionSignal(78,10);
}
void WScrivaniaComodino::scaf1Slot()
{
    emit positionSignal(79,10);
}
void WScrivaniaComodino::scaf2Slot()
{
    emit positionSignal(80,10);
}
void WScrivaniaComodino::scaf3Slot()
{
    emit positionSignal(81,10);
}
void WScrivaniaComodino::scaf4Slot()
{
    emit positionSignal(82,10);
}
void WScrivaniaComodino::scaf5Slot()
{
    emit positionSignal(83,10);
}
void WScrivaniaComodino::cassettoLeftSlot()
{
    emit positionSignal(84,10);
}
void WScrivaniaComodino::cassettoRightSlot()
{
    emit positionSignal(85,10);
}
void WScrivaniaComodino::cassettoHSlot()
{
    emit positionSignal(86,10);
}
void WScrivaniaComodino::cassettoMSLot()
{
    emit positionSignal(87,10);
}
void WScrivaniaComodino::cassettoLSlot()
{
    emit positionSignal(88,10);
}
