/****************************************************************************
** Meta object code from reading C++ file 'wopenspace.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wopenspace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wopenspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WOpenSpace_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[14];
    char stringdata8[13];
    char stringdata9[16];
    char stringdata10[14];
    char stringdata11[15];
    char stringdata12[14];
    char stringdata13[17];
    char stringdata14[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WOpenSpace_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WOpenSpace_t qt_meta_stringdata_WOpenSpace = {
    {
        QT_MOC_LITERAL(0, 10),  // "WOpenSpace"
        QT_MOC_LITERAL(11, 16),  // "anticameraSignal"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 13),  // "balconeSignal"
        QT_MOC_LITERAL(43, 5),  // "IdLoc"
        QT_MOC_LITERAL(49, 5),  // "IdSov"
        QT_MOC_LITERAL(55, 12),  // "libuniSignal"
        QT_MOC_LITERAL(68, 13),  // "salottoSignal"
        QT_MOC_LITERAL(82, 12),  // "cucinaSignal"
        QT_MOC_LITERAL(95, 15),  // "scarpieraSignal"
        QT_MOC_LITERAL(111, 13),  // "libuniEmitter"
        QT_MOC_LITERAL(125, 14),  // "salottoEmitter"
        QT_MOC_LITERAL(140, 13),  // "cucinaEmitter"
        QT_MOC_LITERAL(154, 16),  // "scarpieraEmitter"
        QT_MOC_LITERAL(171, 14)   // "balconeEmitter"
    },
    "WOpenSpace",
    "anticameraSignal",
    "",
    "balconeSignal",
    "IdLoc",
    "IdSov",
    "libuniSignal",
    "salottoSignal",
    "cucinaSignal",
    "scarpieraSignal",
    "libuniEmitter",
    "salottoEmitter",
    "cucinaEmitter",
    "scarpieraEmitter",
    "balconeEmitter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WOpenSpace[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    2,   81,    2, 0x06,    2 /* Public */,
       6,    2,   86,    2, 0x06,    5 /* Public */,
       7,    2,   91,    2, 0x06,    8 /* Public */,
       8,    2,   96,    2, 0x06,   11 /* Public */,
       9,    2,  101,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  106,    2, 0x08,   17 /* Private */,
      11,    0,  107,    2, 0x08,   18 /* Private */,
      12,    0,  108,    2, 0x08,   19 /* Private */,
      13,    0,  109,    2, 0x08,   20 /* Private */,
      14,    0,  110,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WOpenSpace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WOpenSpace *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->anticameraSignal(); break;
        case 1: _t->balconeSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->libuniSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->salottoSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->cucinaSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->scarpieraSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->libuniEmitter(); break;
        case 7: _t->salottoEmitter(); break;
        case 8: _t->cucinaEmitter(); break;
        case 9: _t->scarpieraEmitter(); break;
        case 10: _t->balconeEmitter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WOpenSpace::*)();
            if (_t _q_method = &WOpenSpace::anticameraSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WOpenSpace::*)(int , int );
            if (_t _q_method = &WOpenSpace::balconeSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WOpenSpace::*)(int , int );
            if (_t _q_method = &WOpenSpace::libuniSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WOpenSpace::*)(int , int );
            if (_t _q_method = &WOpenSpace::salottoSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WOpenSpace::*)(int , int );
            if (_t _q_method = &WOpenSpace::cucinaSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WOpenSpace::*)(int , int );
            if (_t _q_method = &WOpenSpace::scarpieraSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject WOpenSpace::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WOpenSpace.offsetsAndSizes,
    qt_meta_data_WOpenSpace,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WOpenSpace_t
, QtPrivate::TypeAndForceComplete<WOpenSpace, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WOpenSpace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WOpenSpace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WOpenSpace.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WOpenSpace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void WOpenSpace::anticameraSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WOpenSpace::balconeSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WOpenSpace::libuniSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WOpenSpace::salottoSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WOpenSpace::cucinaSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WOpenSpace::scarpieraSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
