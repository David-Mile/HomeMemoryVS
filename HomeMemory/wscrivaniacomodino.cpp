#include "wscrivaniacomodino.h"
#include "ui_wscrivaniacomodino.h"

WScrivaniaComodino::WScrivaniaComodino(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WScrivaniaComodino)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->cassettinoBtn);
    m_positionBtnList->push_back(ui->scaf1Btn);
    m_positionBtnList->push_back(ui->scaf2Btn);
    m_positionBtnList->push_back(ui->scaf3Btn);
    m_positionBtnList->push_back(ui->scaf4Btn);
    m_positionBtnList->push_back(ui->scaf5Btn);
    m_positionBtnList->push_back(ui->cassettoLeftBtn);
    m_positionBtnList->push_back(ui->cassettoRightBtn);
    m_positionBtnList->push_back(ui->cassettoHBtn);
    m_positionBtnList->push_back(ui->cassettoMBtn);
    m_positionBtnList->push_back(ui->cassettoLBtn);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->cassettinoBtn,SIGNAL(released()),this,SLOT(cassettinoSlot()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->scaf5Btn,SIGNAL(released()),this,SLOT(scaf5Slot()));
    connect(ui->cassettoLeftBtn,SIGNAL(released()),this,SLOT(cassettoLeftSlot()));
    connect(ui->cassettoRightBtn,SIGNAL(released()),this,SLOT(cassettoRightSlot()));
    connect(ui->cassettoHBtn,SIGNAL(released()),this,SLOT(cassettoHSlot()));
    connect(ui->cassettoMBtn,SIGNAL(released()),this,SLOT(cassettoMSlot()));
    connect(ui->cassettoLBtn,SIGNAL(released()),this,SLOT(cassettoLSlot()));

}

WScrivaniaComodino::~WScrivaniaComodino()
{
    delete ui;
}

void WScrivaniaComodino::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,10);
}
void WScrivaniaComodino::cassettinoSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettinoBtn);
    emit positionSignal(78,10);
}
void WScrivaniaComodino::scaf1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf1Btn);
    emit positionSignal(79,10);
}
void WScrivaniaComodino::scaf2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf2Btn);
    emit positionSignal(80,10);
}
void WScrivaniaComodino::scaf3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf3Btn);
    emit positionSignal(81,10);
}
void WScrivaniaComodino::scaf4Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf4Btn);
    emit positionSignal(82,10);
}
void WScrivaniaComodino::scaf5Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf5Btn);
    emit positionSignal(83,10);
}
void WScrivaniaComodino::cassettoLeftSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoLeftBtn);
    emit positionSignal(84,10);
}
void WScrivaniaComodino::cassettoRightSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoRightBtn);
    emit positionSignal(85,10);
}
void WScrivaniaComodino::cassettoHSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoHBtn);
    emit positionSignal(86,10);
}
void WScrivaniaComodino::cassettoMSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoMBtn);
    emit positionSignal(87,10);
}
void WScrivaniaComodino::cassettoLSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoLBtn);
    emit positionSignal(88,10);
}
