/****************************************************************************
** Meta object code from reading C++ file 'PushSSDemo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../PushSSDemo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PushSSDemo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PushSSDemo_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PushSSDemo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PushSSDemo_t qt_meta_stringdata_PushSSDemo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PushSSDemo"
QT_MOC_LITERAL(1, 11, 11), // "readMessage"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "sendMessage"
QT_MOC_LITERAL(4, 36, 12), // "displayError"
QT_MOC_LITERAL(5, 49, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(6, 78, 14), // "startImgRecMod"
QT_MOC_LITERAL(7, 93, 9), // "read_data"
QT_MOC_LITERAL(8, 103, 14), // "loadSerialPort"
QT_MOC_LITERAL(9, 118, 14), // "openEmSer1Port"
QT_MOC_LITERAL(10, 133, 14), // "openEmSer2Port"
QT_MOC_LITERAL(11, 148, 15), // "closeEmSer1Port"
QT_MOC_LITERAL(12, 164, 15) // "closeEmSer2Port"

    },
    "PushSSDemo\0readMessage\0\0sendMessage\0"
    "displayError\0QAbstractSocket::SocketError\0"
    "startImgRecMod\0read_data\0loadSerialPort\0"
    "openEmSer1Port\0openEmSer2Port\0"
    "closeEmSer1Port\0closeEmSer2Port"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PushSSDemo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PushSSDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PushSSDemo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readMessage(); break;
        case 1: _t->sendMessage(); break;
        case 2: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->startImgRecMod(); break;
        case 4: _t->read_data(); break;
        case 5: _t->loadSerialPort(); break;
        case 6: _t->openEmSer1Port(); break;
        case 7: _t->openEmSer2Port(); break;
        case 8: _t->closeEmSer1Port(); break;
        case 9: _t->closeEmSer2Port(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PushSSDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PushSSDemo.data,
    qt_meta_data_PushSSDemo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PushSSDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PushSSDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PushSSDemo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PushSSDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
