#ifndef WBAGNO_H
#define WBAGNO_H

#include <QWidget>

namespace Ui {
class WBagno;
}

class WBagno : public QWidget
{
    Q_OBJECT

public:
    explicit WBagno(QWidget *parent = nullptr);
    ~WBagno();

signals:
    void armadioBagnoSignal(int IdLoc, int IdSov);
    void armadiettoLavSignal(int IdLoc, int IdSov);
    void anticameraSignal();

public slots:
    void armadioBagnoEmitter();
    void armadiettoLavEmitter();

private:
    Ui::WBagno *ui;
};

#endif // WBAGNO_H
