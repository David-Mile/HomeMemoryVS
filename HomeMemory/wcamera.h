#ifndef WCAMERA_H
#define WCAMERA_H

#include <QWidget>

namespace Ui {
class WCamera;
}

class WCamera : public QWidget
{
    Q_OBJECT

public:
    explicit WCamera(QWidget *parent = nullptr);
    ~WCamera();

signals:
    void anticameraSignal();
    void balconeSignal(int IdLoc, int IdSov);
    void armadioCassettieraSignal(int IdLoc, int IdSov);
    void scrivaniaComodinoSignal(int IdLoc, int IdSov);

public slots:
    void balconeEmitter();
    void armadioCassettieraEmitter();
    void scrivaniaComodinoEmitter();

private:
    Ui::WCamera *ui;
};

#endif // WCAMERA_H
