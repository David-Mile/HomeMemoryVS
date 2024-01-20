#include "wcamera.h"
#include "ui_wcamera.h"

WCamera::WCamera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCamera)
{
    ui->setupUi(this);

    connect(ui->anticameraBtn,SIGNAL(released()),this,SIGNAL(anticameraSignal()));
    connect(ui->balconeBtn,SIGNAL(released()),this,SLOT(balconeEmitter()));
    connect(ui->ArmadioCassettieraBtn,SIGNAL(released()),this,SLOT(armadioCassettieraEmitter()));
    connect(ui->ScrivaniaComodinoBtn,SIGNAL(released()),this,SLOT(scrivaniaComodinoEmitter()));
}

WCamera::~WCamera()
{
    delete ui;
}

void WCamera::balconeEmitter()
{
    emit    balconeSignal(0,8);
}
void WCamera::armadioCassettieraEmitter()
{
    emit armadioCassettieraSignal(0,9);
}
void WCamera::scrivaniaComodinoEmitter()
{
    emit scrivaniaComodinoSignal(0,10);
}
