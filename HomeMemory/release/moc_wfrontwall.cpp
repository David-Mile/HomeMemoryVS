/****************************************************************************
** Meta object code from reading C++ file 'wfrontwall.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wfrontwall.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wfrontwall.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WFrontWall_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[15];
    char stringdata7[8];
    char stringdata8[10];
    char stringdata9[10];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[11];
    char stringdata13[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WFrontWall_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WFrontWall_t qt_meta_stringdata_WFrontWall = {
    {
        QT_MOC_LITERAL(0, 10),  // "WFrontWall"
        QT_MOC_LITERAL(11, 10),  // "backSignal"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 14),  // "positionSignal"
        QT_MOC_LITERAL(38, 5),  // "IdLoc"
        QT_MOC_LITERAL(44, 5),  // "IdSov"
        QT_MOC_LITERAL(50, 14),  // "allObjsEmitter"
        QT_MOC_LITERAL(65, 7),  // "topSlot"
        QT_MOC_LITERAL(73, 9),  // "scaf1Slot"
        QT_MOC_LITERAL(83, 9),  // "scaf2Slot"
        QT_MOC_LITERAL(93, 9),  // "scaf3Slot"
        QT_MOC_LITERAL(103, 9),  // "scaf4Slot"
        QT_MOC_LITERAL(113, 10),  // "bottomSlot"
        QT_MOC_LITERAL(124, 9)   // "floorSlot"
    },
    "WFrontWall",
    "backSignal",
    "",
    "positionSignal",
    "IdLoc",
    "IdSov",
    "allObjsEmitter",
    "topSlot",
    "scaf1Slot",
    "scaf2Slot",
    "scaf3Slot",
    "scaf4Slot",
    "bottomSlot",
    "floorSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WFrontWall[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    2,   75,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   80,    2, 0x0a,    5 /* Public */,
       7,    0,   81,    2, 0x0a,    6 /* Public */,
       8,    0,   82,    2, 0x0a,    7 /* Public */,
       9,    0,   83,    2, 0x0a,    8 /* Public */,
      10,    0,   84,    2, 0x0a,    9 /* Public */,
      11,    0,   85,    2, 0x0a,   10 /* Public */,
      12,    0,   86,    2, 0x0a,   11 /* Public */,
      13,    0,   87,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WFrontWall::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WFrontWall *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backSignal(); break;
        case 1: _t->positionSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->allObjsEmitter(); break;
        case 3: _t->topSlot(); break;
        case 4: _t->scaf1Slot(); break;
        case 5: _t->scaf2Slot(); break;
        case 6: _t->scaf3Slot(); break;
        case 7: _t->scaf4Slot(); break;
        case 8: _t->bottomSlot(); break;
        case 9: _t->floorSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WFrontWall::*)();
            if (_t _q_method = &WFrontWall::backSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WFrontWall::*)(int , int );
            if (_t _q_method = &WFrontWall::positionSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WFrontWall::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WFrontWall.offsetsAndSizes,
    qt_meta_data_WFrontWall,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WFrontWall_t
, QtPrivate::TypeAndForceComplete<WFrontWall, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WFrontWall::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WFrontWall::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WFrontWall.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WFrontWall::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WFrontWall::backSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WFrontWall::positionSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE