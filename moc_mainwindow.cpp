/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      92,   11,   11,   11, 0x08,
     118,   11,   11,   11, 0x08,
     143,   11,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,
     196,   11,   11,   11, 0x08,
     222,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,
     275,   11,   11,   11, 0x08,
     301,   11,   11,   11, 0x08,
     327,   11,   11,   11, 0x08,
     355,   11,   11,   11, 0x08,
     386,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionSave_As_triggered()\0"
    "on_actionNew_triggered()\0"
    "on_actionOpen_triggered()\0"
    "on_actionSave_triggered()\0"
    "on_actionCut_triggered()\0"
    "on_actionCopy_triggered()\0"
    "on_actionPaste_triggered()\0"
    "on_actionUndo_triggered()\0"
    "on_actionRedo_triggered()\0"
    "on_actionAbout_triggered()\0"
    "on_actionQuit_triggered()\0"
    "on_actionBold_triggered()\0"
    "on_actionNormal_triggered()\0"
    "on_actionUnderline_triggered()\0"
    "on_actionItalic_triggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionSave_As_triggered(); break;
        case 1: _t->on_actionNew_triggered(); break;
        case 2: _t->on_actionOpen_triggered(); break;
        case 3: _t->on_actionSave_triggered(); break;
        case 4: _t->on_actionCut_triggered(); break;
        case 5: _t->on_actionCopy_triggered(); break;
        case 6: _t->on_actionPaste_triggered(); break;
        case 7: _t->on_actionUndo_triggered(); break;
        case 8: _t->on_actionRedo_triggered(); break;
        case 9: _t->on_actionAbout_triggered(); break;
        case 10: _t->on_actionQuit_triggered(); break;
        case 11: _t->on_actionBold_triggered(); break;
        case 12: _t->on_actionNormal_triggered(); break;
        case 13: _t->on_actionUnderline_triggered(); break;
        case 14: _t->on_actionItalic_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
