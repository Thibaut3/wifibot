/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WifiBot/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 23), // "on_boutonGauche_clicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 20), // "on_boutonBas_clicked"
QT_MOC_LITERAL(57, 23), // "on_boutonDroite_clicked"
QT_MOC_LITERAL(81, 21), // "on_boutonHaut_clicked"
QT_MOC_LITERAL(103, 21), // "on_boutonStop_clicked"
QT_MOC_LITERAL(125, 26), // "on_boutonConnexion_clicked"
QT_MOC_LITERAL(152, 6), // "batLvl"
QT_MOC_LITERAL(159, 8), // "vitRobot"
QT_MOC_LITERAL(168, 4), // "IRFR"
QT_MOC_LITERAL(173, 4), // "IRFL"
QT_MOC_LITERAL(178, 4), // "IRBR"
QT_MOC_LITERAL(183, 4), // "IRBL"
QT_MOC_LITERAL(188, 12), // "MSGConnexion"
QT_MOC_LITERAL(201, 23), // "on_boutonPivotG_clicked"
QT_MOC_LITERAL(225, 23), // "on_boutonPivotD_clicked"
QT_MOC_LITERAL(249, 22), // "on_vitesse_sliderMoved"
QT_MOC_LITERAL(272, 8), // "position"
QT_MOC_LITERAL(281, 28) // "on_actionParametre_triggered"

    },
    "MainWindow\0on_boutonGauche_clicked\0\0"
    "on_boutonBas_clicked\0on_boutonDroite_clicked\0"
    "on_boutonHaut_clicked\0on_boutonStop_clicked\0"
    "on_boutonConnexion_clicked\0batLvl\0"
    "vitRobot\0IRFR\0IRFL\0IRBR\0IRBL\0MSGConnexion\0"
    "on_boutonPivotG_clicked\0on_boutonPivotD_clicked\0"
    "on_vitesse_sliderMoved\0position\0"
    "on_actionParametre_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x0a,    0 /* Public */,
       3,    0,  117,    2, 0x0a,    1 /* Public */,
       4,    0,  118,    2, 0x0a,    2 /* Public */,
       5,    0,  119,    2, 0x0a,    3 /* Public */,
       6,    0,  120,    2, 0x0a,    4 /* Public */,
       7,    0,  121,    2, 0x0a,    5 /* Public */,
       8,    0,  122,    2, 0x0a,    6 /* Public */,
       9,    0,  123,    2, 0x0a,    7 /* Public */,
      10,    0,  124,    2, 0x0a,    8 /* Public */,
      11,    0,  125,    2, 0x0a,    9 /* Public */,
      12,    0,  126,    2, 0x0a,   10 /* Public */,
      13,    0,  127,    2, 0x0a,   11 /* Public */,
      14,    0,  128,    2, 0x0a,   12 /* Public */,
      15,    0,  129,    2, 0x08,   13 /* Private */,
      16,    0,  130,    2, 0x08,   14 /* Private */,
      17,    1,  131,    2, 0x08,   15 /* Private */,
      19,    0,  134,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_boutonGauche_clicked(); break;
        case 1: _t->on_boutonBas_clicked(); break;
        case 2: _t->on_boutonDroite_clicked(); break;
        case 3: _t->on_boutonHaut_clicked(); break;
        case 4: _t->on_boutonStop_clicked(); break;
        case 5: _t->on_boutonConnexion_clicked(); break;
        case 6: _t->batLvl(); break;
        case 7: _t->vitRobot(); break;
        case 8: _t->IRFR(); break;
        case 9: _t->IRFL(); break;
        case 10: _t->IRBR(); break;
        case 11: _t->IRBL(); break;
        case 12: _t->MSGConnexion(); break;
        case 13: _t->on_boutonPivotG_clicked(); break;
        case 14: _t->on_boutonPivotD_clicked(); break;
        case 15: _t->on_vitesse_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_actionParametre_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
