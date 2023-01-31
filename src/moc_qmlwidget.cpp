/****************************************************************************
** Meta object code from reading C++ file 'qmlwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmlwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlWidget_t {
    QByteArrayData data[11];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlWidget_t qt_meta_stringdata_QmlWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QmlWidget"
QT_MOC_LITERAL(1, 10, 10), // "slot_close"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 22), // "slot_maximizeNormalize"
QT_MOC_LITERAL(4, 45, 13), // "slot_minimize"
QT_MOC_LITERAL(5, 59, 20), // "slot_positionChanged"
QT_MOC_LITERAL(6, 80, 1), // "x"
QT_MOC_LITERAL(7, 82, 1), // "y"
QT_MOC_LITERAL(8, 84, 16), // "slot_sizeChanged"
QT_MOC_LITERAL(9, 101, 19), // "slot_controlClicked"
QT_MOC_LITERAL(10, 121, 3) // "msg"

    },
    "QmlWidget\0slot_close\0\0slot_maximizeNormalize\0"
    "slot_minimize\0slot_positionChanged\0x\0"
    "y\0slot_sizeChanged\0slot_controlClicked\0"
    "msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       8,    2,   52,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void QmlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlWidget *_t = static_cast<QmlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_close(); break;
        case 1: _t->slot_maximizeNormalize(); break;
        case 2: _t->slot_minimize(); break;
        case 3: _t->slot_positionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->slot_sizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->slot_controlClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlWidget.data,
      qt_meta_data_QmlWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlWidget.stringdata0))
        return static_cast<void*>(const_cast< QmlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
