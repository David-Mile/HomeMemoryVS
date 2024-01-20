#include "wsalotto.h"
#include "ui_wsalotto.h"

WSalotto::WSalotto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WSalotto)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scafLib1Btn,SIGNAL(released()),this,SLOT(scafLib1Slot()));
    connect(ui->scafLib2Btn,SIGNAL(released()),this,SLOT(scafLib2Slot()));
    connect(ui->scafLib3Btn,SIGNAL(released()),this,SLOT(scafLib3Slot()));
    connect(ui->scafLBtn,SIGNAL(released()),this,SLOT(scafLSlot()));
    connect(ui->scafHBtn,SIGNAL(released()),this,SLOT(scafHSlot()));
    connect(ui->scafCuboLBtn,SIGNAL(released()),this,SLOT(scafCuboLSlot()));
    connect(ui->scafCuboHBtn,SIGNAL(released()),this,SLOT(scafCuboHSlot()));
    connect(ui->cassettoDxBtn,SIGNAL(released()),this,SLOT(cassettoDxSlot()));
    connect(ui->cassettoSxBtn,SIGNAL(released()),this,SLOT(cassettoSxSlot()));
}

WSalotto::~WSalotto()
{
    delete ui;
}

void WSalotto::allObjsEmitter()
{
    emit positionSignal(0,2);
}

void WSalotto::scafLib1Slot()
{
    emit positionSignal(7,2);
}

void WSalotto::scafLib2Slot()
{
    emit positionSignal(8,2);
}

void WSalotto::scafLib3Slot()
{
    emit positionSignal(9,2);
}

void WSalotto::scafHSlot()
{
    emit positionSignal(10,2);
}

void WSalotto::scafLSlot()
{
    emit positionSignal(11,2);
}

void WSalotto::scafCuboLSlot()
{
    emit positionSignal(12,2);
}

void WSalotto::scafCuboHSlot()
{
    emit positionSignal(13,2);
}

void WSalotto::cassettoDxSlot()
{
    emit positionSignal(14,2);
}

void WSalotto::cassettoSxSlot()
{
    emit positionSignal(15,2);
}
