#ifndef WANTICAMERA_H
#define WANTICAMERA_H

#include <QWidget>

namespace Ui {
class WAnticamera;
}

class WAnticamera : public QWidget
{
    Q_OBJECT

public:
    explicit WAnticamera(QWidget *parent = nullptr);
    ~WAnticamera();

signals:
    void ripostiglioSignal(int IdLoc, int IdSov);
    void openSpaceSignal();
    void cameraSignal();
    void bagnoSignal();

public slots:
    void ripostiglioEmitter();

private:
    Ui::WAnticamera *ui;
};

#endif // WANTICAMERA_H
