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
    uint offsetsAndSizes[40];
    char stringdata0[12];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[6];
    char stringdata7[10];
    char stringdata8[9];
    char stringdata9[11];
    char stringdata10[8];
    char stringdata11[12];
    char stringdata12[12];
    char stringdata13[12];
    char stringdata14[4];
    char stringdata15[4];
    char stringdata16[16];
    char stringdata17[18];
    char stringdata18[14];
    char stringdata19[17];
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
        QT_MOC_LITERAL(68, 9),  // "isSaveBtn"
        QT_MOC_LITERAL(78, 8),  // "saveSlot"
        QT_MOC_LITERAL(87, 10),  // "deleteSlot"
        QT_MOC_LITERAL(98, 7),  // "addSlot"
        QT_MOC_LITERAL(106, 11),  // "refreshSlot"
        QT_MOC_LITERAL(118, 11),  // "backEmitter"
        QT_MOC_LITERAL(130, 11),  // "selToDelBtn"
        QT_MOC_LITERAL(142, 3),  // "row"
        QT_MOC_LITERAL(146, 3),  // "clm"
        QT_MOC_LITERAL(150, 15),  // "delBtnActivator"
        QT_MOC_LITERAL(166, 17),  // "refrSaveActivator"
        QT_MOC_LITERAL(184, 13),  // "clickDetector"
        QT_MOC_LITERAL(198, 16)   // "comboChangedSlot"
    },
    "WObjManager",
    "backSignal",
    "",
    "changeTextResizeBtn",
    "tableFiller",
    "IdLoc",
    "IdSov",
    "isSaveBtn",
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
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   99,    2, 0x0a,    2 /* Public */,
       4,    3,  100,    2, 0x0a,    3 /* Public */,
       4,    2,  107,    2, 0x2a,    7 /* Public | MethodCloned */,
       8,    0,  112,    2, 0x0a,   10 /* Public */,
       9,    0,  113,    2, 0x0a,   11 /* Public */,
      10,    0,  114,    2, 0x0a,   12 /* Public */,
      11,    0,  115,    2, 0x0a,   13 /* Public */,
      12,    0,  116,    2, 0x0a,   14 /* Public */,
      13,    2,  117,    2, 0x0a,   15 /* Public */,
      16,    0,  122,    2, 0x0a,   18 /* Public */,
      17,    0,  123,    2, 0x0a,   19 /* Public */,
      18,    0,  124,    2, 0x0a,   20 /* Public */,
      19,    0,  125,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
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
        case 2: _t->tableFiller((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 3: _t->tableFiller((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->saveSlot(); break;
        case 5: _t->deleteSlot(); break;
        case 6: _t->addSlot(); break;
        case 7: _t->refreshSlot(); break;
        case 8: _t->backEmitter(); break;
        case 9: _t->selToDelBtn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->delBtnActivator(); break;
        case 11: _t->refrSaveActivator(); break;
        case 12: _t->clickDetector(); break;
        case 13: _t->comboChangedSlot(); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
void WObjManager::backSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
