#include "wscarpiera.h"
#include "ui_wscarpiera.h"

WScarpiera::WScarpiera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WScarpiera)
{
    ui->setupUi(this);

    connect(ui->backBtrn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scafLBtn,SIGNAL(released()),this,SLOT(scafLSlot()));
    connect(ui->scafMBtn,SIGNAL(released),this,SLOT(scafMSlot()));
    connect(ui->scafHBtn,SIGNAL(released()),this,SLOT(csafHSlot()));
    connect(ui->antaLBtn,SIGNAL(released()),this,SLOT(antaLSlot()));
    connect(ui->antaHBtn,SIGNAL(released()),this,SLOT(antaHSlot()));
}

WScarpiera::~WScarpiera()
{
    delete ui;
}

void WScarpiera::allObjsEmitter()
{
    emit positionSignal(0,4);
}
void WScarpiera::scafLSlot()
{
    emit positionSignal(27,4);
}
void WScarpiera::scafMSlot()
{
    emit positionSignal(28,4);
}
void WScarpiera::csafHSlot()
{
    emit positionSignal(29,4);
}
void WScarpiera::antaLSlot()
{
    emit positionSignal(30,4);
}
void WScarpiera::antaHSlot()
{
    emit positionSignal(31,4);
}
