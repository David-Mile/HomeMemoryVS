#ifndef WCUCINA_H
#define WCUCINA_H

#include "global.h"

#include <QWidget>
#include <QPushButton>
#include <QList>

namespace Ui {
class WCucina;
}

class WCucina : public QWidget
{
    Q_OBJECT

public:
    explicit WCucina(Global *global, QWidget *parent = nullptr);
    ~WCucina();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:

    void allObjsEmitter();
    void cassettoBigSlot();
    void cassettoLSlot();
    void cassettoHSlot();
    void antaBigDxSlot();
    void carrelloSlot();
    void antinaSlot();
    void antaAngSlot();
    void antaTrashSlot();
    void antaScolSlot();
    void antaBigSxSlot();
    void scafFrigSlot();


private:
    Ui::WCucina *ui;
    Global* g;
    QList<QPushButton*>* m_positionBtnList;

};

#endif // WCUCINA_H
