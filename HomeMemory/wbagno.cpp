#include "wbagno.h"
#include "ui_wbagno.h"

WBagno::WBagno(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WBagno)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(anticameraSignal()));
    connect(ui->armadioBagnoBtn,SIGNAL(released()),this,SLOT(armadioBagnoEmitter()));
    connect(ui->armadiettoLavBtn,SIGNAL(released()),this,SLOT(armadiettoLavEmitter()));

}

WBagno::~WBagno()
{
    delete ui;
}

void WBagno::armadioBagnoEmitter()
{
    emit armadioBagnoSignal(0,6);
}
void WBagno::armadiettoLavEmitter()
{
    emit armadiettoLavSignal(0,7);
}
