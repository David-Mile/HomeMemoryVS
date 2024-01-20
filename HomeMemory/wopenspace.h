#ifndef WOPENSPACE_H
#define WOPENSPACE_H

#include <QWidget>

namespace Ui {
class WOpenSpace;
}

class WOpenSpace : public QWidget
{
    Q_OBJECT

public:
    explicit WOpenSpace(QWidget *parent = nullptr);
    ~WOpenSpace();

signals:
    void anticameraSignal();
    void balconeSignal(int IdLoc, int IdSov);
    void libuniSignal(int IdLoc, int IdSov);
    void salottoSignal(int IdLoc, int IdSov);
    void cucinaSignal(int IdLoc, int IdSov);
    void scarpieraSignal(int IdLoc, int IdSov);

private slots:
    void libuniEmitter();
    void salottoEmitter();
    void cucinaEmitter();
    void scarpieraEmitter();
    void balconeEmitter();

private:
    Ui::WOpenSpace *ui;
};

#endif // WOPENSPACE_H
