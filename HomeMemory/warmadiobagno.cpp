#include "warmadiobagno.h"
#include "ui_warmadiobagno.h"

WArmadioBagno::WArmadioBagno(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WArmadioBagno)
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
}

WArmadioBagno::~WArmadioBagno()
{
    delete ui;
}

void WArmadioBagno::allObjsEmitter()
{
    emit positionSignal(0,6);
}
void WArmadioBagno::scaf1Slot()
{
    emit positionSignal(42,6);
}
void WArmadioBagno::scaf2Slot()
{
    emit positionSignal(43,6);
}
void WArmadioBagno::scaf3Slot()
{
    emit positionSignal(44,6);
}
void WArmadioBagno::scaf4Slot()
{
    emit positionSignal(45,6);
}
void WArmadioBagno::scaf5Slot()
{
    emit positionSignal(46,6);
}
void WArmadioBagno::scaf6Slot()
{
    emit positionSignal(47,6);
}
