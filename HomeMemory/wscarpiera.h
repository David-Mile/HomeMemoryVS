#ifndef WSCARPIERA_H
#define WSCARPIERA_H

#include <QWidget>

namespace Ui {
class WScarpiera;
}

class WScarpiera : public QWidget
{
    Q_OBJECT

public:
    explicit WScarpiera(QWidget *parent = nullptr);
    ~WScarpiera();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void scafLSlot();
    void scafMSlot();
    void csafHSlot();
    void antaLSlot();
    void antaHSlot();

private:
    Ui::WScarpiera *ui;
};

#endif // WSCARPIERA_H
