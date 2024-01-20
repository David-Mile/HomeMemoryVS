#ifndef WLOGO_H
#define WLOGO_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QtSql>
#include <QSqlDatabase>


class WLogo : public QWidget
{
    Q_OBJECT
public:
    explicit WLogo(QWidget *parent = nullptr);

signals:

};

#endif // WLOGO_H
