#include "wanticamera.h"
#include "ui_wanticamera.h"

WAnticamera::WAnticamera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WAnticamera)
{
    ui->setupUi(this);

    connect(ui->ripostiglioBtn,SIGNAL(released()),this,SLOT(ripostiglioEmitter()));
    connect(ui->openSpaceBtn,SIGNAL(released()),this,SIGNAL(openSpaceSignal()));
    connect(ui->cameraBtn,SIGNAL(released()),this,SIGNAL(cameraSignal()));
    connect(ui->bagnoBtn,SIGNAL(released()),this,SIGNAL(bagnoSignal()));

}

WAnticamera::~WAnticamera()
{
    delete ui;
}

void WAnticamera::ripostiglioEmitter()
{
    emit ripostiglioSignal(0,5);
}
