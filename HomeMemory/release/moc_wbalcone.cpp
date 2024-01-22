/****************************************************************************
** Meta object code from reading C++ file 'wbalcone.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wbalcone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbalcone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBalcone_t {
    uint offsetsAndSizes[36];
    char stringdata0[9];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[15];
    char stringdata5[6];
    char stringdata6[6];
    char stringdata7[15];
    char stringdata8[15];
    char stringdata9[14];
    char stringdata10[14];
    char stringdata11[14];
    char stringdata12[14];
    char stringdata13[14];
    char stringdata14[15];
    char stringdata15[15];
    char stringdata16[15];
    char stringdata17[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WBalcone_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WBalcone_t qt_meta_stringdata_WBalcone = {
    {
        QT_MOC_LITERAL(0, 8),  // "WBalcone"
        QT_MOC_LITERAL(9, 15),  // "openSpaceSignal"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 12),  // "cameraSignal"
        QT_MOC_LITERAL(39, 14),  // "positionSignal"
        QT_MOC_LITERAL(54, 5),  // "IdLoc"
        QT_MOC_LITERAL(60, 5),  // "IdSov"
        QT_MOC_LITERAL(66, 14),  // "allObjsEmitter"
        QT_MOC_LITERAL(81, 14),  // "cassapancaSlot"
        QT_MOC_LITERAL(96, 13),  // "scafLeft1Slot"
        QT_MOC_LITERAL(110, 13),  // "scafLeft2Slot"
        QT_MOC_LITERAL(124, 13),  // "scafLeft3Slot"
        QT_MOC_LITERAL(138, 13),  // "scafLeft4Slot"
        QT_MOC_LITERAL(152, 13),  // "floorLeftSlot"
        QT_MOC_LITERAL(166, 14),  // "scafRight1Slot"
        QT_MOC_LITERAL(181, 14),  // "scafRight2Slot"
        QT_MOC_LITERAL(196, 14),  // "scafRight3Slot"
        QT_MOC_LITERAL(211, 14)   // "scafRight4Slot"
    },
    "WBalcone",
    "openSpaceSignal",
    "",
    "cameraSignal",
    "positionSignal",
    "IdLoc",
    "IdSov",
    "allObjsEmitter",
    "cassapancaSlot",
    "scafLeft1Slot",
    "scafLeft2Slot",
    "scafLeft3Slot",
    "scafLeft4Slot",
    "floorLeftSlot",
    "scafRight1Slot",
    "scafRight2Slot",
    "scafRight3Slot",
    "scafRight4Slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBalcone[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    0,   99,    2, 0x06,    2 /* Public */,
       4,    2,  100,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

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

       0        // eod
};

void WBalcone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBalcone *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openSpaceSignal(); break;
        case 1: _t->cameraSignal(); break;
        case 2: _t->positionSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->allObjsEmitter(); break;
        case 4: _t->cassapancaSlot(); break;
        case 5: _t->scafLeft1Slot(); break;
        case 6: _t->scafLeft2Slot(); break;
        case 7: _t->scafLeft3Slot(); break;
        case 8: _t->scafLeft4Slot(); break;
        case 9: _t->floorLeftSlot(); break;
        case 10: _t->scafRight1Slot(); break;
        case 11: _t->scafRight2Slot(); break;
        case 12: _t->scafRight3Slot(); break;
        case 13: _t->scafRight4Slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBalcone::*)();
            if (_t _q_method = &WBalcone::openSpaceSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBalcone::*)();
            if (_t _q_method = &WBalcone::cameraSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBalcone::*)(int , int );
            if (_t _q_method = &WBalcone::positionSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WBalcone::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBalcone.offsetsAndSizes,
    qt_meta_data_WBalcone,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WBalcone_t
, QtPrivate::TypeAndForceComplete<WBalcone, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WBalcone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBalcone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBalcone.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBalcone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WBalcone::openSpaceSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBalcone::cameraSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBalcone::positionSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
