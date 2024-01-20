#include "wbox.h"
#include "ui_wbox.h"

WBox::WBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WBox)
{
    ui->setupUi(this);
}

WBox::~WBox()
{
    delete ui;
}

void WBox::positionEmitter()
{
    emit positionSignal(106,13);
}
