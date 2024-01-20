/****************************************************************************
** Meta object code from reading C++ file 'warmadiobagno.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../warmadiobagno.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'warmadiobagno.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WArmadioBagno_t {
    uint offsetsAndSizes[26];
    char stringdata0[14];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[15];
    char stringdata7[10];
    char stringdata8[10];
    char stringdata9[10];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WArmadioBagno_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WArmadioBagno_t qt_meta_stringdata_WArmadioBagno = {
    {
        QT_MOC_LITERAL(0, 13),  // "WArmadioBagno"
        QT_MOC_LITERAL(14, 10),  // "backSignal"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 14),  // "positionSignal"
        QT_MOC_LITERAL(41, 5),  // "IdLoc"
        QT_MOC_LITERAL(47, 5),  // "IdSov"
        QT_MOC_LITERAL(53, 14),  // "allObjsEmitter"
        QT_MOC_LITERAL(68, 9),  // "scaf1Slot"
        QT_MOC_LITERAL(78, 9),  // "scaf2Slot"
        QT_MOC_LITERAL(88, 9),  // "scaf3Slot"
        QT_MOC_LITERAL(98, 9),  // "scaf4Slot"
        QT_MOC_LITERAL(108, 9),  // "scaf5Slot"
        QT_MOC_LITERAL(118, 9)   // "scaf6Slot"
    },
    "WArmadioBagno",
    "backSignal",
    "",
    "positionSignal",
    "IdLoc",
    "IdSov",
    "allObjsEmitter",
    "scaf1Slot",
    "scaf2Slot",
    "scaf3Slot",
    "scaf4Slot",
    "scaf5Slot",
    "scaf6Slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WArmadioBagno[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    2,   69,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   74,    2, 0x0a,    5 /* Public */,
       7,    0,   75,    2, 0x0a,    6 /* Public */,
       8,    0,   76,    2, 0x0a,    7 /* Public */,
       9,    0,   77,    2, 0x0a,    8 /* Public */,
      10,    0,   78,    2, 0x0a,    9 /* Public */,
      11,    0,   79,    2, 0x0a,   10 /* Public */,
      12,    0,   80,    2, 0x0a,   11 /* Public */,

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

       0        // eod
};

void WArmadioBagno::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WArmadioBagno *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backSignal(); break;
        case 1: _t->positionSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->allObjsEmitter(); break;
        case 3: _t->scaf1Slot(); break;
        case 4: _t->scaf2Slot(); break;
        case 5: _t->scaf3Slot(); break;
        case 6: _t->scaf4Slot(); break;
        case 7: _t->scaf5Slot(); break;
        case 8: _t->scaf6Slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WArmadioBagno::*)();
            if (_t _q_method = &WArmadioBagno::backSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WArmadioBagno::*)(int , int );
            if (_t _q_method = &WArmadioBagno::positionSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WArmadioBagno::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WArmadioBagno.offsetsAndSizes,
    qt_meta_data_WArmadioBagno,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WArmadioBagno_t
, QtPrivate::TypeAndForceComplete<WArmadioBagno, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WArmadioBagno::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WArmadioBagno::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WArmadioBagno.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WArmadioBagno::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WArmadioBagno::backSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WArmadioBagno::positionSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
