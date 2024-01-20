#include "wcantina.h"
#include "ui_wcantina.h"

WCantina::WCantina(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCantina)
{
    ui->setupUi(this);
    connect(ui->leftWallBtn,SIGNAL(released()),this,SLOT(leftWallSlot()));
    connect(ui->frontWallBtn,SIGNAL(released()),this,SLOT(frontWallSlot()));
}

WCantina::~WCantina()
{
    delete ui;
}

void WCantina::leftWallSlot()
{
    emit leftWallSignal(0,11);
}

void WCantina::frontWallSlot()
{
    emit frontWallSignal(0,12);
}
