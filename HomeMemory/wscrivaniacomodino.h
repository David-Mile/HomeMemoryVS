#ifndef WSCRIVANIACOMODINO_H
#define WSCRIVANIACOMODINO_H

#include <QWidget>

namespace Ui {
class WScrivaniaComodino;
}

class WScrivaniaComodino : public QWidget
{
    Q_OBJECT

public:
    explicit WScrivaniaComodino(QWidget *parent = nullptr);
    ~WScrivaniaComodino();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void cassettinoSlot();
    void scaf1Slot();
    void scaf2Slot();
    void scaf3Slot();
    void scaf4Slot();
    void scaf5Slot();
    void cassettoLeftSlot();
    void cassettoRightSlot();
    void cassettoHSlot();
    void cassettoMSlot();
    void cassettoLSlot();

private:
    Ui::WScrivaniaComodino *ui;
};

#endif // WSCRIVANIACOMODINO_H
