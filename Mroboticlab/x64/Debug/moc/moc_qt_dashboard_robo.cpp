/****************************************************************************
** Meta object code from reading C++ file 'qt_dashboard_robo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qt_dashboard_robo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_dashboard_robo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt_Dashboard_Robo_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt_Dashboard_Robo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt_Dashboard_Robo_t qt_meta_stringdata_Qt_Dashboard_Robo = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Qt_Dashboard_Robo"
QT_MOC_LITERAL(1, 18, 22), // "on_Connect_btn_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "readSerialString"
QT_MOC_LITERAL(4, 59, 8), // "robo_ori"
QT_MOC_LITERAL(5, 68, 8), // "QString*"
QT_MOC_LITERAL(6, 77, 8), // "robo_RPM"
QT_MOC_LITERAL(7, 86, 4) // "int*"

    },
    "Qt_Dashboard_Robo\0on_Connect_btn_clicked\0"
    "\0readSerialString\0robo_ori\0QString*\0"
    "robo_RPM\0int*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt_Dashboard_Robo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void Qt_Dashboard_Robo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Qt_Dashboard_Robo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Connect_btn_clicked(); break;
        case 1: _t->readSerialString(); break;
        case 2: _t->robo_ori((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 3: _t->robo_RPM((*reinterpret_cast< int*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Qt_Dashboard_Robo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Qt_Dashboard_Robo.data,
    qt_meta_data_Qt_Dashboard_Robo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qt_Dashboard_Robo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt_Dashboard_Robo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt_Dashboard_Robo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Qt_Dashboard_Robo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
