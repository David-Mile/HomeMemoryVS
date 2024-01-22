/****************************************************************************
** Meta object code from reading C++ file 'wobjmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wobjmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wobjmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WObjManager_t {
    uint offsetsAndSizes[38];
    char stringdata0[12];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[6];
    char stringdata7[9];
    char stringdata8[11];
    char stringdata9[8];
    char stringdata10[12];
    char stringdata11[12];
    char stringdata12[12];
    char stringdata13[4];
    char stringdata14[4];
    char stringdata15[16];
    char stringdata16[18];
    char stringdata17[14];
    char stringdata18[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WObjManager_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WObjManager_t qt_meta_stringdata_WObjManager = {
    {
        QT_MOC_LITERAL(0, 11),  // "WObjManager"
        QT_MOC_LITERAL(12, 10),  // "backSignal"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 19),  // "changeTextResizeBtn"
        QT_MOC_LITERAL(44, 11),  // "tableFiller"
        QT_MOC_LITERAL(56, 5),  // "IdLoc"
        QT_MOC_LITERAL(62, 5),  // "IdSov"
        QT_MOC_LITERAL(68, 8),  // "saveSlot"
        QT_MOC_LITERAL(77, 10),  // "deleteSlot"
        QT_MOC_LITERAL(88, 7),  // "addSlot"
        QT_MOC_LITERAL(96, 11),  // "refreshSlot"
        QT_MOC_LITERAL(108, 11),  // "backEmitter"
        QT_MOC_LITERAL(120, 11),  // "selToDelBtn"
        QT_MOC_LITERAL(132, 3),  // "row"
        QT_MOC_LITERAL(136, 3),  // "clm"
        QT_MOC_LITERAL(140, 15),  // "delBtnActivator"
        QT_MOC_LITERAL(156, 17),  // "refrSaveActivator"
        QT_MOC_LITERAL(174, 13),  // "clickDetector"
        QT_MOC_LITERAL(188, 16)   // "comboChangedSlot"
    },
    "WObjManager",
    "backSignal",
    "",
    "changeTextResizeBtn",
    "tableFiller",
    "IdLoc",
    "IdSov",
    "saveSlot",
    "deleteSlot",
    "addSlot",
    "refreshSlot",
    "backEmitter",
    "selToDelBtn",
    "row",
    "clm",
    "delBtnActivator",
    "refrSaveActivator",
    "clickDetector",
    "comboChangedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WObjManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   93,    2, 0x0a,    2 /* Public */,
       4,    2,   94,    2, 0x0a,    3 /* Public */,
       7,    0,   99,    2, 0x0a,    6 /* Public */,
       8,    0,  100,    2, 0x0a,    7 /* Public */,
       9,    0,  101,    2, 0x0a,    8 /* Public */,
      10,    0,  102,    2, 0x0a,    9 /* Public */,
      11,    0,  103,    2, 0x0a,   10 /* Public */,
      12,    2,  104,    2, 0x0a,   11 /* Public */,
      15,    0,  109,    2, 0x0a,   14 /* Public */,
      16,    0,  110,    2, 0x0a,   15 /* Public */,
      17,    0,  111,    2, 0x0a,   16 /* Public */,
      18,    0,  112,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WObjManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WObjManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backSignal(); break;
        case 1: _t->changeTextResizeBtn(); break;
        case 2: _t->tableFiller((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->saveSlot(); break;
        case 4: _t->deleteSlot(); break;
        case 5: _t->addSlot(); break;
        case 6: _t->refreshSlot(); break;
        case 7: _t->backEmitter(); break;
        case 8: _t->selToDelBtn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->delBtnActivator(); break;
        case 10: _t->refrSaveActivator(); break;
        case 11: _t->clickDetector(); break;
        case 12: _t->comboChangedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WObjManager::*)();
            if (_t _q_method = &WObjManager::backSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WObjManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WObjManager.offsetsAndSizes,
    qt_meta_data_WObjManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WObjManager_t
, QtPrivate::TypeAndForceComplete<WObjManager, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WObjManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WObjManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WObjManager.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WObjManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void WObjManager::backSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
