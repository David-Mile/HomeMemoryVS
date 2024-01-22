#ifndef WOBJMANAGER_H
#define WOBJMANAGER_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QTableWidget>

#include "global.h"

namespace Ui {
class WObjManager;
}

class WObjManager : public QWidget
{
    Q_OBJECT

public:
    explicit WObjManager(Global* global, QWidget *parent = nullptr);
    ~WObjManager();
    // QSqlDatabase db;
    QMessageBox *dbFailMb;
    QMessageBox *queryFailMb;
    QMessageBox *failNewLine;
    QMessageBox *failOldLine;
    QMessageBox *emptyLine;
    QMessageBox *duplicateObj;
    bool isChanged;
    bool isThereEmptyObj;
    QString oggettoTb;
    QString coloreTb;
    QString materialeTb;
    QString tipoTb;
    QString noteTb;
    QString oggettoDb;
    bool checkChanges();
    bool tbIsChangedMb();

signals:
    void backSignal();

public slots:
    void changeTextResizeBtn();
    void tableFiller(int IdLoc, int IdSov, bool isSaveBtn = false);
    void saveSlot();
    void deleteSlot();
    void addSlot();
    void refreshSlot();
    void backEmitter();
    void selToDelBtn(int row, int clm);
    void delBtnActivator();
    void refrSaveActivator();
    void clickDetector();
    void comboChangedSlot();

private:
    Ui::WObjManager *ui;
    Global *g;
    QList<int> selDelBtns;
    int m_IdSov;
    int m_IdLoc;
    int m_textCount;
    int m_column;
    int m_rowDb;
    int m_rowTb;
    bool clicked;
    QSqlQuery queryTbFiller();
    bool checkDuplicateObj();
    void cellItemFiller(int actRow, int actColumn);
    void cellWidgetFiller(int actRow, int actColumn);
    void toDelBtnFiller(int row);
    bool sureToDelMb();
    QString m_tableString;
    QString m_queryString;
    QTableWidgetItem *m_pCurrentItem;
};

#endif // WOBJMANAGER_H
