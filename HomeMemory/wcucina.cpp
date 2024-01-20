#include "wcucina.h"
#include "ui_wcucina.h"

WCucina::WCucina(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCucina)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->cassettoBigBtn,SIGNAL(released()),this,SLOT(cassettoBigSlot()));
    connect(ui->cassettoLBtn,SIGNAL(released()),this,SLOT(cassettoLSlot()));
    connect(ui->cassettoHBtn,SIGNAL(released()),this,SLOT(cassettoHSlot()));
    connect(ui->antaBigDxBtn,SIGNAL(released()),this,SLOT(antaBigDxSlot()));
    connect(ui->carrelloBtn,SIGNAL(released()),this,SLOT(carrelloSlot()));
    connect(ui->antinaBtn,SIGNAL(released()),this,SLOT(antinaSlot()));
    connect(ui->antaAngBtn,SIGNAL(released()),this,SLOT(antaAngSlot()));
    connect(ui->antaTrashBtn,SIGNAL(released()),this,SLOT(antaTrashSlot()));
    connect(ui->antaScolBtn,SIGNAL(released()),this,SLOT(antaScolSlot()));
    connect(ui->antaBigSxBtn,SIGNAL(released()),this,SLOT(antaBigSxSlot()));
    connect(ui->scafFrigBtn,SIGNAL(released()),this,SLOT(scafFrigSlot()));
}

WCucina::~WCucina()
{
    delete ui;
}

void WCucina::allObjsEmitter()
{
    emit positionSignal(0,3);
}

void WCucina::cassettoBigSlot()
{
    emit positionSignal(16,3);
}
void WCucina::cassettoLSlot()
{
    emit positionSignal(17,3);
}
void WCucina::cassettoHSlot()
{
    emit positionSignal(18,3);
}
void WCucina::antaBigDxSlot()
{
    emit positionSignal(19,3);
}
void WCucina::carrelloSlot()
{
    emit positionSignal(20,3);
}
void WCucina::antinaSlot()
{
    emit positionSignal(21,3);
}
void WCucina::antaAngSlot()
{
    emit positionSignal(22,3);
}
void WCucina::antaTrashSlot()
{
    emit positionSignal(23,3);
}
void WCucina::antaScolSlot()
{
    emit positionSignal(24,3);
}
void WCucina::antaBigSxSlot()
{
    emit positionSignal(25,3);
}
void WCucina::scafFrigSlot()
{
    emit positionSignal(26,3);
}

