/****************************************************************************
** Meta object code from reading C++ file 'wscarpiera.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wscarpiera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wscarpiera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WScarpiera_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
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
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WScarpiera_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WScarpiera_t qt_meta_stringdata_WScarpiera = {
    {
        QT_MOC_LITERAL(0, 10),  // "WScarpiera"
        QT_MOC_LITERAL(11, 10),  // "backSignal"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 14),  // "positionSignal"
        QT_MOC_LITERAL(38, 5),  // "IdLoc"
        QT_MOC_LITERAL(44, 5),  // "IdSov"
        QT_MOC_LITERAL(50, 14),  // "allObjsEmitter"
        QT_MOC_LITERAL(65, 9),  // "scafLSlot"
        QT_MOC_LITERAL(75, 9),  // "scafMSlot"
        QT_MOC_LITERAL(85, 9),  // "csafHSlot"
        QT_MOC_LITERAL(95, 9),  // "antaLSlot"
        QT_MOC_LITERAL(105, 9)   // "antaHSlot"
    },
    "WScarpiera",
    "backSignal",
    "",
    "positionSignal",
    "IdLoc",
    "IdSov",
    "allObjsEmitter",
    "scafLSlot",
    "scafMSlot",
    "csafHSlot",
    "antaLSlot",
    "antaHSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WScarpiera[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    2,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   68,    2, 0x0a,    5 /* Public */,
       7,    0,   69,    2, 0x0a,    6 /* Public */,
       8,    0,   70,    2, 0x0a,    7 /* Public */,
       9,    0,   71,    2, 0x0a,    8 /* Public */,
      10,    0,   72,    2, 0x0a,    9 /* Public */,
      11,    0,   73,    2, 0x0a,   10 /* Public */,

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

       0        // eod
};

void WScarpiera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WScarpiera *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backSignal(); break;
        case 1: _t->positionSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->allObjsEmitter(); break;
        case 3: _t->scafLSlot(); break;
        case 4: _t->scafMSlot(); break;
        case 5: _t->csafHSlot(); break;
        case 6: _t->antaLSlot(); break;
        case 7: _t->antaHSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WScarpiera::*)();
            if (_t _q_method = &WScarpiera::backSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WScarpiera::*)(int , int );
            if (_t _q_method = &WScarpiera::positionSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WScarpiera::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WScarpiera.offsetsAndSizes,
    qt_meta_data_WScarpiera,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WScarpiera_t
, QtPrivate::TypeAndForceComplete<WScarpiera, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WScarpiera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WScarpiera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WScarpiera.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WScarpiera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WScarpiera::backSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WScarpiera::positionSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
