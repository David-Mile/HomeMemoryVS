#ifndef WSALOTTO_H
#define WSALOTTO_H

#include <QWidget>

namespace Ui {
class WSalotto;
}

class WSalotto : public QWidget
{
    Q_OBJECT

public:
    explicit WSalotto(QWidget *parent = nullptr);
    ~WSalotto();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void scafLib1Slot();
    void scafLib2Slot();
    void scafLib3Slot();
    void scafLSlot();
    void scafHSlot();
    void scafCuboLSlot();
    void scafCuboHSlot();
    void cassettoDxSlot();
    void cassettoSxSlot();

private:
    Ui::WSalotto *ui;
};

#endif // WSALOTTO_H
