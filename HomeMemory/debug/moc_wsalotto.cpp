/****************************************************************************
** Meta object code from reading C++ file 'wsalotto.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wsalotto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wsalotto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WSalotto_t {
    uint offsetsAndSizes[32];
    char stringdata0[9];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[15];
    char stringdata7[13];
    char stringdata8[13];
    char stringdata9[13];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[14];
    char stringdata13[14];
    char stringdata14[15];
    char stringdata15[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WSalotto_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WSalotto_t qt_meta_stringdata_WSalotto = {
    {
        QT_MOC_LITERAL(0, 8),  // "WSalotto"
        QT_MOC_LITERAL(9, 10),  // "backSignal"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 14),  // "positionSignal"
        QT_MOC_LITERAL(36, 5),  // "IdLoc"
        QT_MOC_LITERAL(42, 5),  // "IdSov"
        QT_MOC_LITERAL(48, 14),  // "allObjsEmitter"
        QT_MOC_LITERAL(63, 12),  // "scafLib1Slot"
        QT_MOC_LITERAL(76, 12),  // "scafLib2Slot"
        QT_MOC_LITERAL(89, 12),  // "scafLib3Slot"
        QT_MOC_LITERAL(102, 9),  // "scafLSlot"
        QT_MOC_LITERAL(112, 9),  // "scafHSlot"
        QT_MOC_LITERAL(122, 13),  // "scafCuboLSlot"
        QT_MOC_LITERAL(136, 13),  // "scafCuboHSlot"
        QT_MOC_LITERAL(150, 14),  // "cassettoDxSlot"
        QT_MOC_LITERAL(165, 14)   // "cassettoSxSlot"
    },
    "WSalotto",
    "backSignal",
    "",
    "positionSignal",
    "IdLoc",
    "IdSov",
    "allObjsEmitter",
    "scafLib1Slot",
    "scafLib2Slot",
    "scafLib3Slot",
    "scafLSlot",
    "scafHSlot",
    "scafCuboLSlot",
    "scafCuboHSlot",
    "cassettoDxSlot",
    "cassettoSxSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WSalotto[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    2,   87,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   92,    2, 0x0a,    5 /* Public */,
       7,    0,   93,    2, 0x0a,    6 /* Public */,
       8,    0,   94,    2, 0x0a,    7 /* Public */,
       9,    0,   95,    2, 0x0a,    8 /* Public */,
      10,    0,   96,    2, 0x0a,    9 /* Public */,
      11,    0,   97,    2, 0x0a,   10 /* Public */,
      12,    0,   98,    2, 0x0a,   11 /* Public */,
      13,    0,   99,    2, 0x0a,   12 /* Public */,
      14,    0,  100,    2, 0x0a,   13 /* Public */,
      15,    0,  101,    2, 0x0a,   14 /* Public */,

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

       0        // eod
};

void WSalotto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WSalotto *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backSignal(); break;
        case 1: _t->positionSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->allObjsEmitter(); break;
        case 3: _t->scafLib1Slot(); break;
        case 4: _t->scafLib2Slot(); break;
        case 5: _t->scafLib3Slot(); break;
        case 6: _t->scafLSlot(); break;
        case 7: _t->scafHSlot(); break;
        case 8: _t->scafCuboLSlot(); break;
        case 9: _t->scafCuboHSlot(); break;
        case 10: _t->cassettoDxSlot(); break;
        case 11: _t->cassettoSxSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WSalotto::*)();
            if (_t _q_method = &WSalotto::backSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WSalotto::*)(int , int );
            if (_t _q_method = &WSalotto::positionSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WSalotto::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WSalotto.offsetsAndSizes,
    qt_meta_data_WSalotto,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WSalotto_t
, QtPrivate::TypeAndForceComplete<WSalotto, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WSalotto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WSalotto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WSalotto.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WSalotto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WSalotto::backSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WSalotto::positionSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
