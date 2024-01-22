/****************************************************************************
** Meta object code from reading C++ file 'wcucina.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wcucina.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wcucina.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WCucina_t {
    uint offsetsAndSizes[36];
    char stringdata0[8];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[15];
    char stringdata7[16];
    char stringdata8[14];
    char stringdata9[14];
    char stringdata10[14];
    char stringdata11[13];
    char stringdata12[11];
    char stringdata13[12];
    char stringdata14[14];
    char stringdata15[13];
    char stringdata16[14];
    char stringdata17[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WCucina_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WCucina_t qt_meta_stringdata_WCucina = {
    {
        QT_MOC_LITERAL(0, 7),  // "WCucina"
        QT_MOC_LITERAL(8, 10),  // "backSignal"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 14),  // "positionSignal"
        QT_MOC_LITERAL(35, 5),  // "IdLoc"
        QT_MOC_LITERAL(41, 5),  // "IdSov"
        QT_MOC_LITERAL(47, 14),  // "allObjsEmitter"
        QT_MOC_LITERAL(62, 15),  // "cassettoBigSlot"
        QT_MOC_LITERAL(78, 13),  // "cassettoLSlot"
        QT_MOC_LITERAL(92, 13),  // "cassettoHSlot"
        QT_MOC_LITERAL(106, 13),  // "antaBigDxSlot"
        QT_MOC_LITERAL(120, 12),  // "carrelloSlot"
        QT_MOC_LITERAL(133, 10),  // "antinaSlot"
        QT_MOC_LITERAL(144, 11),  // "antaAngSlot"
        QT_MOC_LITERAL(156, 13),  // "antaTrashSlot"
        QT_MOC_LITERAL(170, 12),  // "antaScolSlot"
        QT_MOC_LITERAL(183, 13),  // "antaBigSxSlot"
        QT_MOC_LITERAL(197, 12)   // "scafFrigSlot"
    },
    "WCucina",
    "backSignal",
    "",
    "positionSignal",
    "IdLoc",
    "IdSov",
    "allObjsEmitter",
    "cassettoBigSlot",
    "cassettoLSlot",
    "cassettoHSlot",
    "antaBigDxSlot",
    "carrelloSlot",
    "antinaSlot",
    "antaAngSlot",
    "antaTrashSlot",
    "antaScolSlot",
    "antaBigSxSlot",
    "scafFrigSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WCucina[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    2,   99,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  104,    2, 0x0a,    5 /* Public */,
       7,    0,  105,    2, 0x0a,    6 /* Public */,
       8,    0,  106,    2, 0x0a,    7 /* Public */,
       9,    0,  107,    2, 0x0a,    8 /* Public */,
      10,    0,  108,    2, 0x0a,    9 /* Public */,
      11,    0,  109,    2, 0x0a,   10 /* Public */,
      12,    0,  110,    2, 0x0a,   11 /* Public */,
      13,    0,  111,    2, 0x0a,   12 /* Public */,
      14,    0,  112,    2, 0x0a,   13 /* Public */,
      15,    0,  113,    2, 0x0a,   14 /* Public */,
      16,    0,  114,    2, 0x0a,   15 /* Public */,
      17,    0,  115,    2, 0x0a,   16 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WCucina::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WCucina *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backSignal(); break;
        case 1: _t->positionSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->allObjsEmitter(); break;
        case 3: _t->cassettoBigSlot(); break;
        case 4: _t->cassettoLSlot(); break;
        case 5: _t->cassettoHSlot(); break;
        case 6: _t->antaBigDxSlot(); break;
        case 7: _t->carrelloSlot(); break;
        case 8: _t->antinaSlot(); break;
        case 9: _t->antaAngSlot(); break;
        case 10: _t->antaTrashSlot(); break;
        case 11: _t->antaScolSlot(); break;
        case 12: _t->antaBigSxSlot(); break;
        case 13: _t->scafFrigSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WCucina::*)();
            if (_t _q_method = &WCucina::backSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WCucina::*)(int , int );
            if (_t _q_method = &WCucina::positionSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WCucina::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WCucina.offsetsAndSizes,
    qt_meta_data_WCucina,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WCucina_t
, QtPrivate::TypeAndForceComplete<WCucina, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WCucina::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WCucina::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WCucina.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WCucina::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void WCucina::backSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WCucina::positionSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
