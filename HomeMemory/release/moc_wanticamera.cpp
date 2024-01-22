/****************************************************************************
** Meta object code from reading C++ file 'wanticamera.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wanticamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wanticamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WAnticamera_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[6];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[12];
    char stringdata8[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WAnticamera_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WAnticamera_t qt_meta_stringdata_WAnticamera = {
    {
        QT_MOC_LITERAL(0, 11),  // "WAnticamera"
        QT_MOC_LITERAL(12, 17),  // "ripostiglioSignal"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 5),  // "IdLoc"
        QT_MOC_LITERAL(37, 5),  // "IdSov"
        QT_MOC_LITERAL(43, 15),  // "openSpaceSignal"
        QT_MOC_LITERAL(59, 12),  // "cameraSignal"
        QT_MOC_LITERAL(72, 11),  // "bagnoSignal"
        QT_MOC_LITERAL(84, 18)   // "ripostiglioEmitter"
    },
    "WAnticamera",
    "ripostiglioSignal",
    "",
    "IdLoc",
    "IdSov",
    "openSpaceSignal",
    "cameraSignal",
    "bagnoSignal",
    "ripostiglioEmitter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WAnticamera[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,
       5,    0,   49,    2, 0x06,    4 /* Public */,
       6,    0,   50,    2, 0x06,    5 /* Public */,
       7,    0,   51,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   52,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WAnticamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WAnticamera *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ripostiglioSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->openSpaceSignal(); break;
        case 2: _t->cameraSignal(); break;
        case 3: _t->bagnoSignal(); break;
        case 4: _t->ripostiglioEmitter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WAnticamera::*)(int , int );
            if (_t _q_method = &WAnticamera::ripostiglioSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WAnticamera::*)();
            if (_t _q_method = &WAnticamera::openSpaceSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WAnticamera::*)();
            if (_t _q_method = &WAnticamera::cameraSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WAnticamera::*)();
            if (_t _q_method = &WAnticamera::bagnoSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject WAnticamera::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WAnticamera.offsetsAndSizes,
    qt_meta_data_WAnticamera,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WAnticamera_t
, QtPrivate::TypeAndForceComplete<WAnticamera, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WAnticamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WAnticamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WAnticamera.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WAnticamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WAnticamera::ripostiglioSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WAnticamera::openSpaceSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WAnticamera::cameraSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WAnticamera::bagnoSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
