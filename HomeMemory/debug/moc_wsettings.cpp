/****************************************************************************
** Meta object code from reading C++ file 'wsettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../wsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WSettings_t {
    uint offsetsAndSizes[36];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[13];
    char stringdata5[12];
    char stringdata6[11];
    char stringdata7[8];
    char stringdata8[16];
    char stringdata9[5];
    char stringdata10[11];
    char stringdata11[19];
    char stringdata12[10];
    char stringdata13[17];
    char stringdata14[14];
    char stringdata15[6];
    char stringdata16[15];
    char stringdata17[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WSettings_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WSettings_t qt_meta_stringdata_WSettings = {
    {
        QT_MOC_LITERAL(0, 9),  // "WSettings"
        QT_MOC_LITERAL(10, 11),  // "themeSignal"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 6),  // "isDark"
        QT_MOC_LITERAL(30, 12),  // "colorBtnSlot"
        QT_MOC_LITERAL(43, 11),  // "typeBtnSlot"
        QT_MOC_LITERAL(55, 10),  // "matBtnSlot"
        QT_MOC_LITERAL(66, 7),  // "addSlot"
        QT_MOC_LITERAL(74, 15),  // "addBtnActivator"
        QT_MOC_LITERAL(90, 4),  // "text"
        QT_MOC_LITERAL(95, 10),  // "removeSlot"
        QT_MOC_LITERAL(106, 18),  // "removeBtnActivator"
        QT_MOC_LITERAL(125, 9),  // "clearSlot"
        QT_MOC_LITERAL(135, 16),  // "firstToUpperSlot"
        QT_MOC_LITERAL(152, 13),  // "radioDarkSlot"
        QT_MOC_LITERAL(166, 5),  // "state"
        QT_MOC_LITERAL(172, 14),  // "radioLightSlot"
        QT_MOC_LITERAL(187, 9)   // "themeSlot"
    },
    "WSettings",
    "themeSignal",
    "",
    "isDark",
    "colorBtnSlot",
    "typeBtnSlot",
    "matBtnSlot",
    "addSlot",
    "addBtnActivator",
    "text",
    "removeSlot",
    "removeBtnActivator",
    "clearSlot",
    "firstToUpperSlot",
    "radioDarkSlot",
    "state",
    "radioLightSlot",
    "themeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WSettings[] = {

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
       1,    1,   92,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   95,    2, 0x08,    3 /* Private */,
       5,    0,   96,    2, 0x08,    4 /* Private */,
       6,    0,   97,    2, 0x08,    5 /* Private */,
       7,    0,   98,    2, 0x08,    6 /* Private */,
       8,    1,   99,    2, 0x08,    7 /* Private */,
      10,    0,  102,    2, 0x08,    9 /* Private */,
      11,    0,  103,    2, 0x08,   10 /* Private */,
      12,    0,  104,    2, 0x08,   11 /* Private */,
      13,    1,  105,    2, 0x08,   12 /* Private */,
      14,    1,  108,    2, 0x08,   14 /* Private */,
      16,    1,  111,    2, 0x08,   16 /* Private */,
      17,    1,  114,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void WSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->themeSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->colorBtnSlot(); break;
        case 2: _t->typeBtnSlot(); break;
        case 3: _t->matBtnSlot(); break;
        case 4: _t->addSlot(); break;
        case 5: _t->addBtnActivator((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->removeSlot(); break;
        case 7: _t->removeBtnActivator(); break;
        case 8: _t->clearSlot(); break;
        case 9: _t->firstToUpperSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->radioDarkSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->radioLightSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->themeSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WSettings::*)(bool );
            if (_t _q_method = &WSettings::themeSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WSettings.offsetsAndSizes,
    qt_meta_data_WSettings,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WSettings_t
, QtPrivate::TypeAndForceComplete<WSettings, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *WSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WSettings::themeSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
