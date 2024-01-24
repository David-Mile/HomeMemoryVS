#include "wcucina.h"
#include "ui_wcucina.h"

WCucina::WCucina(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCucina)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->cassettoBigBtn);
    m_positionBtnList->push_back(ui->cassettoLBtn);
    m_positionBtnList->push_back(ui->cassettoHBtn);
    m_positionBtnList->push_back(ui->antaBigDxBtn);
    m_positionBtnList->push_back(ui->carrelloBtn);
    m_positionBtnList->push_back(ui->antinaBtn);
    m_positionBtnList->push_back(ui->antaAngBtn);
    m_positionBtnList->push_back(ui->antaTrashBtn);
    m_positionBtnList->push_back(ui->antaScolBtn);
    m_positionBtnList->push_back(ui->antaBigSxBtn);
    m_positionBtnList->push_back(ui->scafFrigBtn);


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
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,3);
}

void WCucina::cassettoBigSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoBigBtn);
    emit positionSignal(16,3);
}
void WCucina::cassettoLSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoLBtn);
    emit positionSignal(17,3);
}
void WCucina::cassettoHSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoHBtn);
    emit positionSignal(18,3);
}
void WCucina::antaBigDxSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaBigDxBtn);
    emit positionSignal(19,3);
}
void WCucina::carrelloSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->carrelloBtn);
    emit positionSignal(20,3);
}
void WCucina::antinaSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antinaBtn);
    emit positionSignal(21,3);
}
void WCucina::antaAngSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaAngBtn);
    emit positionSignal(22,3);
}
void WCucina::antaTrashSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaTrashBtn);
    emit positionSignal(23,3);
}
void WCucina::antaScolSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaScolBtn);
    emit positionSignal(24,3);
}
void WCucina::antaBigSxSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaBigSxBtn);
    emit positionSignal(25,3);
}
void WCucina::scafFrigSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafFrigBtn);
    emit positionSignal(26,3);
}