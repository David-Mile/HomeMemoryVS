#ifndef WSCARPIERA_H
#define WSCARPIERA_H

#include "global.h"

#include <QWidget>

namespace Ui {
class WScarpiera;
}

class WScarpiera : public QWidget
{
    Q_OBJECT

public:
    explicit WScarpiera(Global *global, QWidget *parent = nullptr);
    ~WScarpiera();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void scafLSlot();
    void scafMSlot();
    void scafHSlot();
    void antaLSlot();
    void antaHSlot();

private:
    Ui::WScarpiera *ui;
    Global* g;
    QList<QPushButton*>* m_positionBtnList;
};

#endif // WSCARPIERA_H
