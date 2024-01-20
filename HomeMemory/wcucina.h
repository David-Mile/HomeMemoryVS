#ifndef WCUCINA_H
#define WCUCINA_H

#include <QWidget>

namespace Ui {
class WCucina;
}

class WCucina : public QWidget
{
    Q_OBJECT

public:
    explicit WCucina(QWidget *parent = nullptr);
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
};

#endif // WCUCINA_H
