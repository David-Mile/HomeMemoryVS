#ifndef WARMADIOBAGNO_H
#define WARMADIOBAGNO_H

#include "global.h"

#include <QWidget>

namespace Ui {
class WArmadioBagno;
}

class WArmadioBagno : public QWidget
{
    Q_OBJECT

public:
    explicit WArmadioBagno(Global *global, QWidget *parent = nullptr);
    ~WArmadioBagno();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void scaf1Slot();
    void scaf2Slot();
    void scaf3Slot();
    void scaf4Slot();
    void scaf5Slot();
    void scaf6Slot();

private:
    Ui::WArmadioBagno *ui;
    Global* g;
    QList<QPushButton*>* m_positionBtnList;
};

#endif // WARMADIOBAGNO_H
