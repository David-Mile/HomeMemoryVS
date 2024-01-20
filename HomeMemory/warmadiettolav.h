#ifndef WARMADIETTOLAV_H
#define WARMADIETTOLAV_H

#include <QWidget>

namespace Ui {
class WArmadiettoLav;
}

class WArmadiettoLav : public QWidget
{
    Q_OBJECT

public:
    explicit WArmadiettoLav(QWidget *parent = nullptr);
    ~WArmadiettoLav();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void antaArySlot();
    void antaDaviSlot();
    void scafLavSlot();

private:
    Ui::WArmadiettoLav *ui;
};

#endif // WARMADIETTOLAV_H
