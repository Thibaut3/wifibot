/****************************************************************************
** Meta object code from reading C++ file 'myrobot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WifiBot/myrobot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myrobot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyRobot_t {
    const uint offsetsAndSize[56];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MyRobot_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MyRobot_t qt_meta_stringdata_MyRobot = {
    {
QT_MOC_LITERAL(0, 7), // "MyRobot"
QT_MOC_LITERAL(8, 8), // "updateUI"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 4), // "Data"
QT_MOC_LITERAL(23, 9), // "connected"
QT_MOC_LITERAL(33, 12), // "disconnected"
QT_MOC_LITERAL(46, 12), // "bytesWritten"
QT_MOC_LITERAL(59, 5), // "bytes"
QT_MOC_LITERAL(65, 9), // "readyRead"
QT_MOC_LITERAL(75, 11), // "MyTimerSlot"
QT_MOC_LITERAL(87, 5), // "Avant"
QT_MOC_LITERAL(93, 6), // "speed1"
QT_MOC_LITERAL(100, 6), // "speed2"
QT_MOC_LITERAL(107, 7), // "Arriere"
QT_MOC_LITERAL(115, 6), // "Gauche"
QT_MOC_LITERAL(122, 6), // "Droite"
QT_MOC_LITERAL(129, 8), // "PivoterG"
QT_MOC_LITERAL(138, 8), // "PivoterD"
QT_MOC_LITERAL(147, 4), // "Stop"
QT_MOC_LITERAL(152, 5), // "Crc16"
QT_MOC_LITERAL(158, 6), // "uchar*"
QT_MOC_LITERAL(165, 12), // "_Adresse_tab"
QT_MOC_LITERAL(178, 10), // "Taille_Max"
QT_MOC_LITERAL(189, 8), // "getSpeed"
QT_MOC_LITERAL(198, 15), // "getBatteryLevel"
QT_MOC_LITERAL(214, 5), // "getIR"
QT_MOC_LITERAL(220, 10), // "QList<int>"
QT_MOC_LITERAL(231, 6) // "getMSG"

    },
    "MyRobot\0updateUI\0\0Data\0connected\0"
    "disconnected\0bytesWritten\0bytes\0"
    "readyRead\0MyTimerSlot\0Avant\0speed1\0"
    "speed2\0Arriere\0Gauche\0Droite\0PivoterG\0"
    "PivoterD\0Stop\0Crc16\0uchar*\0_Adresse_tab\0"
    "Taille_Max\0getSpeed\0getBatteryLevel\0"
    "getIR\0QList<int>\0getMSG"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyRobot[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  125,    2, 0x0a,    2 /* Public */,
       5,    0,  126,    2, 0x0a,    3 /* Public */,
       6,    1,  127,    2, 0x0a,    4 /* Public */,
       8,    0,  130,    2, 0x0a,    6 /* Public */,
       9,    0,  131,    2, 0x0a,    7 /* Public */,
      10,    2,  132,    2, 0x0a,    8 /* Public */,
      13,    2,  137,    2, 0x0a,   11 /* Public */,
      14,    2,  142,    2, 0x0a,   14 /* Public */,
      15,    2,  147,    2, 0x0a,   17 /* Public */,
      16,    2,  152,    2, 0x0a,   20 /* Public */,
      17,    2,  157,    2, 0x0a,   23 /* Public */,
      18,    0,  162,    2, 0x0a,   26 /* Public */,
      19,    2,  163,    2, 0x0a,   27 /* Public */,
      23,    0,  168,    2, 0x0a,   30 /* Public */,
      24,    0,  169,    2, 0x0a,   31 /* Public */,
      25,    0,  170,    2, 0x0a,   32 /* Public */,
      27,    0,  171,    2, 0x0a,   33 /* Public */,

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
    QMetaType::Int,
    QMetaType::Int,
    0x80000000 | 26,
    QMetaType::QString,

       0        // eod
};

void MyRobot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyRobot *>(_o);
        (void)_t;
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
        case 13: { short _r = _t->Crc16((*reinterpret_cast< uchar*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< short*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->getSpeed();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->getBatteryLevel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { QList<int> _r = _t->getIR();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->getMSG();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
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

const QMetaObject MyRobot::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyRobot.offsetsAndSize,
    qt_meta_data_MyRobot,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MyRobot_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QByteArray, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<short, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned char *, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned char, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MyRobot::updateUI(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
