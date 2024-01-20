#ifndef WBOX_H
#define WBOX_H

#include <QWidget>

namespace Ui {
class WBox;
}

class WBox : public QWidget
{
    Q_OBJECT

public:
    explicit WBox(QWidget *parent = nullptr);
    ~WBox();

signals:
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void positionEmitter();

private:
    Ui::WBox *ui;
};

#endif // WBOX_H
