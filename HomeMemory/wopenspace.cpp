#include "wopenspace.h"
#include "ui_wopenspace.h"

WOpenSpace::WOpenSpace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WOpenSpace)
{
    ui->setupUi(this);

    connect(ui->libUniBtn,SIGNAL(released()),this,SLOT(libuniEmitter()));
    connect(ui->salottoBtn,SIGNAL(released()),this,SLOT(salottoEmitter()));
    connect(ui->cucinaBtn,SIGNAL(released()),this,SLOT(cucinaEmitter()));
    connect(ui->scarpieraBtn,SIGNAL(released()),this,SLOT(scarpieraEmitter()));
    connect(ui->anticameraBtn,SIGNAL(released()),this,SIGNAL(anticameraSignal()));
    connect(ui->balconeBtn,SIGNAL(released()),this,SLOT(balconeEmitter()));
}

WOpenSpace::~WOpenSpace()
{
    delete ui;
}
void WOpenSpace::libuniEmitter()
{
    emit libuniSignal(0,1);
}

void WOpenSpace::salottoEmitter()
{
    emit salottoSignal(0,2);
}

void WOpenSpace::cucinaEmitter()
{
    emit cucinaSignal(0,3);
}

void WOpenSpace::scarpieraEmitter()
{
    emit scarpieraSignal(0,4);
}

void WOpenSpace::balconeEmitter()
{
    emit balconeSignal(0,8);
}
