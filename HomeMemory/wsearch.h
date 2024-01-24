#ifndef WSEARCH_H
#define WSEARCH_H

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
class WSearch;
}

class WSearch : public QWidget
{
    Q_OBJECT

public:
    explicit WSearch(Global *global, QWidget *parent = nullptr);
    ~WSearch();

    Global *g;

signals:
    void colorBtnSignal(int hlayColorsIdx);
    void typeBtnSignal(int hlayTypeIdx);
    void matBtnSignal(int hlayMatIdx);

public slots:
    void searchSlot();
    void btnActivator();
    void addColorSlot();
    void rmColorSlot();
    void addTypeSlot();
    void rmTypeSlot();
    void addMatSlot();
    void rmMatSlot();
    void clearAll();
    void themeSlot(bool isDark);

    // Slots for emitting signal index sfter realising color buttons
    void colorBtn0Emitter();   void colorBtn1Emitter();   void colorBtn2Emitter();   void colorBtn3Emitter();   void colorBtn4Emitter();
    void colorBtn5Emitter();   void colorBtn6Emitter();   void colorBtn7Emitter();   void colorBtn8Emitter();   void colorBtn9Emitter();
    void colorBtnSlot(int hlayColorsIdx);

    // Slots for emitting signal index sfter realising type buttons
    void typeBtn0Emitter();   void typeBtn1Emitter();   void typeBtn2Emitter();   void typeBtn3Emitter();   void typeBtn4Emitter();
    void typeBtn5Emitter();   void typeBtn6Emitter();   void typeBtn7Emitter();   void typeBtn8Emitter();   void typeBtn9Emitter();
    void typeBtnSlot(int hlayTypeIdx);

    // Slots for emitting signal index sfter realising material buttons
    void matBtn0Emitter();   void matBtn1Emitter();   void matBtn2Emitter();   void matBtn3Emitter();   void matBtn4Emitter();
    void matBtn5Emitter();   void matBtn6Emitter();   void matBtn7Emitter();   void matBtn8Emitter();   void matBtn9Emitter();
    void matBtnSlot(int hlayMatIdx);

private:
    Ui::WSearch *ui;
    QSqlDatabase db;
    QString m_selColors[10] = {"","","","","","","","","",""};
    QString m_selTypes[10] = {"","","","","","","","","",""};
    QString m_selMats[10] = {"","","","","","","","","",""};
    // Grid layout params
    int m_lastColorIdx;
    int m_lastTypeIdx;
    int m_lastMatIdx;
    int m_column;
    void comboFiller(QComboBox* combo);
    void comboCheck(QComboBox* combo, QPushButton *btn);
    void rmCheck();
    void maxSelectedItemsMb();
    void cellItemFiller(int actRow, int actColumn, QString queryResult);
    bool addAttrBtn(int m_lastAttrIdx,QString m_selAttr[], QPushButton* attrBtnArray[], QComboBox *combo, QHBoxLayout *hlayAttr, QPushButton *addAttrBtn);
    void selAttrsUpdate(int lastAttrIdx, int actAttrIdx[],  QString selAttrs[], QPushButton* attrBtnArray[], QHBoxLayout* hLayAttrs);
    int lastAttrIdxUpdate(QString selAttrs[], QPushButton* attrBtnArray[], QHBoxLayout* hLayAttrs);
    void selBtnUpdate(QString selAttrs[], int lastAttrIdx, QPushButton* attrBtnArray[], QHBoxLayout* hLayAttrs);
    int* actAttrIdxZero(int actAttrIdx[]);
    void addSelBtn(QString actSel, QPushButton *actBtn, QHBoxLayout *actLay, int IdBtn);
    void rmSelBtn(QPushButton *actBtn, QHBoxLayout *actLay);
    void attrBtnPainter(int actAttrIdx[], int hlayAttrIdx, QPushButton* attrBtnArray[]);
    QString tempStringBuilder(QString selField[], bool &isWhere);

    // Vatiables for creation of color buttons with selected color from combo boxes
    QPushButton *colorBtn0; QPushButton *colorBtn1; QPushButton *colorBtn2; QPushButton *colorBtn3; QPushButton *colorBtn4;
    QPushButton *colorBtn5; QPushButton *colorBtn6; QPushButton *colorBtn7; QPushButton *colorBtn8; QPushButton *colorBtn9;
    QPushButton *colorBtnArray[10] = {nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr};
    int m_actColorIdx[10] = {0,0,0,0,0,0,0,0,0,0};
    // Vatiables for creation of type buttons with selected type from combo boxes
    QPushButton *typeBtn0; QPushButton *typeBtn1; QPushButton *typeBtn2; QPushButton *typeBtn3; QPushButton *typeBtn4;
    QPushButton *typeBtn5; QPushButton *typeBtn6; QPushButton *typeBtn7; QPushButton *typeBtn8; QPushButton *typeBtn9;
    QPushButton *typeBtnArray[10] = {nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr};
    int m_actTypeIdx[10] = {0,0,0,0,0,0,0,0,0,0};
    // Vatiables for creation of material buttons with selected material from combo boxes
    QPushButton *matBtn0; QPushButton *matBtn1; QPushButton *matBtn2; QPushButton *matBtn3; QPushButton *matBtn4;
    QPushButton *matBtn5; QPushButton *matBtn6; QPushButton *matBtn7; QPushButton *matBtn8; QPushButton *matBtn9;
    QPushButton *matBtnArray[10] = {nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr};
    int m_actMatIdx[10] = {0,0,0,0,0,0,0,0,0,0};

};

#endif // WSEARCH_H
