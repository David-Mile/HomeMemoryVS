#ifndef WSETTINGS_H
#define WSETTINGS_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QTableWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QMessageBox>
#include <QCloseEvent>

#include "global.h"

namespace Ui {
class WSettings;
}

class WSettings : public QWidget
{
    Q_OBJECT

public:
    explicit WSettings(Global *global, QWidget *parent = nullptr);
    ~WSettings();

    Global *g;
    void clearAll();

signals:
    // If true dark theme active, otherwise light.
    void themeSignal(bool isDark);

private slots:
    void colorBtnSlot();
    void typeBtnSlot();
    void matBtnSlot();
    void addSlot();
    void addBtnActivator(QString text);
    void removeSlot();
    void removeBtnActivator();
    void clearSlot();
    void firstToUpperSlot(QString text);
    void radioDarkSlot(bool state);
    void radioLightSlot(bool state);
    void themeSlot(bool isDark);

private:
    Ui::WSettings *ui;
    void closeEvent(QCloseEvent *xClick);
    QSqlDatabase db;
    QComboBox *comboSub;
    QLabel *label;
    QHBoxLayout *horlay;
    // idBtn = 1, color btn active
    // idBtn = 2, material btn active
    // idBtn = 3, type btn active
    int idBtn;
    // Indicates if I have the second combo box sub active or not. It needs for Remove btn definition.
    int idComboSub;
    void comboFiller(QComboBox *combo);
    void tableVarCreator(int idBtn, QString &table, QString &tableLabel, QString &columnLabel);

public:
    void initConfig();
};

#endif // WSETTINGS_H
