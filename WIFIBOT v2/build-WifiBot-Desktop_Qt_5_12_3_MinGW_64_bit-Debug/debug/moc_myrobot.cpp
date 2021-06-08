/****************************************************************************
** Meta object code from reading C++ file 'myrobot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../WifiBot/myrobot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myrobot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyRobot_t {
    QByteArrayData data[23];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyRobot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyRobot_t qt_meta_stringdata_MyRobot = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyRobot"
QT_MOC_LITERAL(1, 8, 8), // "updateUI"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "Data"
QT_MOC_LITERAL(4, 23, 9), // "connected"
QT_MOC_LITERAL(5, 33, 12), // "disconnected"
QT_MOC_LITERAL(6, 46, 12), // "bytesWritten"
QT_MOC_LITERAL(7, 59, 5), // "bytes"
QT_MOC_LITERAL(8, 65, 9), // "readyRead"
QT_MOC_LITERAL(9, 75, 11), // "MyTimerSlot"
QT_MOC_LITERAL(10, 87, 5), // "Avant"
QT_MOC_LITERAL(11, 93, 6), // "speed1"
QT_MOC_LITERAL(12, 100, 6), // "speed2"
QT_MOC_LITERAL(13, 107, 7), // "Arriere"
QT_MOC_LITERAL(14, 115, 6), // "Gauche"
QT_MOC_LITERAL(15, 122, 6), // "Droite"
QT_MOC_LITERAL(16, 129, 8), // "PivoterG"
QT_MOC_LITERAL(17, 138, 8), // "PivoterD"
QT_MOC_LITERAL(18, 147, 4), // "Stop"
QT_MOC_LITERAL(19, 152, 5), // "Crc16"
QT_MOC_LITERAL(20, 158, 14), // "unsigned char*"
QT_MOC_LITERAL(21, 173, 12), // "_Adresse_tab"
QT_MOC_LITERAL(22, 186, 10) // "Taille_Max"

    },
    "MyRobot\0updateUI\0\0Data\0connected\0"
    "disconnected\0bytesWritten\0bytes\0"
    "readyRead\0MyTimerSlot\0Avant\0speed1\0"
    "speed2\0Arriere\0Gauche\0Droite\0PivoterG\0"
    "PivoterD\0Stop\0Crc16\0unsigned char*\0"
    "_Adresse_tab\0Taille_Max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyRobot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x0a /* Public */,
       5,    0,   88,    2, 0x0a /* Public */,
       6,    1,   89,    2, 0x0a /* Public */,
       8,    0,   92,    2, 0x0a /* Public */,
       9,    0,   93,    2, 0x0a /* Public */,
      10,    2,   94,    2, 0x0a /* Public */,
      13,    2,   99,    2, 0x0a /* Public */,
      14,    2,  104,    2, 0x0a /* Public */,
      15,    2,  109,    2, 0x0a /* Public */,
      16,    2,  114,    2, 0x0a /* Public */,
      17,    2,  119,    2, 0x0a /* Public */,
      18,    0,  124,    2, 0x0a /* Public */,
      19,    2,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Short, QMetaType::Short,   11,   12,
    QMetaType::Void, QMetaType::Short, QMetaType::Short,   11,   12,
    QMetaType::Void, QMetaType::Short, QMetaType::Short,   11,   12,
    QMetaType::Void, QMetaType::Short, QMetaType::Short,   11,   12,
    QMetaType::Void, QMetaType::Short, QMetaType::Short,   11,   12,
    QMetaType::Void, QMetaType::Short, QMetaType::Short,   11,   12,
    QMetaType::Void,
    QMetaType::Short, 0x80000000 | 20, QMetaType::UChar,   21,   22,

       0        // eod
};

void MyRobot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyRobot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateUI((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->readyRead(); break;
        case 5: _t->MyTimerSlot(); break;
        case 6: _t->Avant((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 7: _t->Arriere((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 8: _t->Gauche((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 9: _t->Droite((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 10: _t->PivoterG((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 11: _t->PivoterD((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 12: _t->Stop(); break;
        case 13: { short _r = _t->Crc16((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< short*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyRobot::*)(const QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyRobot::updateUI)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyRobot::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MyRobot.data,
    qt_meta_data_MyRobot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyRobot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyRobot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyRobot.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyRobot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MyRobot::updateUI(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
