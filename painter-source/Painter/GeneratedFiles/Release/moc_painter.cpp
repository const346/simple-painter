/****************************************************************************
** Meta object code from reading C++ file 'painter.h'
**
** Created: Sun 15. Dec 22:00:24 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../painter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'painter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Painter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      28,    8,    8,    8, 0x08,
      48,    8,    8,    8, 0x08,
      68,    8,    8,    8, 0x08,
      90,    8,    8,    8, 0x08,
     115,    8,    8,    8, 0x08,
     132,    8,    8,    8, 0x08,
     149,    8,    8,    8, 0x08,
     165,    8,    8,    8, 0x08,
     182,    8,    8,    8, 0x08,
     197,    8,    8,    8, 0x08,
     218,    8,    8,    8, 0x08,
     238,    8,    8,    8, 0x08,
     254,    8,    8,    8, 0x08,
     272,  270,    8,    8, 0x08,
     304,  297,    8,    8, 0x08,
     333,  327,    8,    8, 0x08,
     359,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Painter[] = {
    "Painter\0\0onNewFileClicked()\0"
    "onOpenFileClicked()\0onSaveFileClicked()\0"
    "onSaveAsFileClicked()\0printDocument(QPrinter*)\0"
    "onPrintClicked()\0onAboutClicked()\0"
    "onCopyClicked()\0onPasteClicked()\0"
    "onCutClicked()\0onSelectAllClicked()\0"
    "onDeselectClicked()\0selectFgColor()\0"
    "selectBgColor()\0,\0changeColors(int,QColor)\0"
    "action\0selectedTool(QAction*)\0state\0"
    "onRestrictSelection(bool)\0changeSA()\0"
};

const QMetaObject Painter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Painter,
      qt_meta_data_Painter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Painter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Painter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Painter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Painter))
        return static_cast<void*>(const_cast< Painter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Painter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onNewFileClicked(); break;
        case 1: onOpenFileClicked(); break;
        case 2: onSaveFileClicked(); break;
        case 3: onSaveAsFileClicked(); break;
        case 4: printDocument((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 5: onPrintClicked(); break;
        case 6: onAboutClicked(); break;
        case 7: onCopyClicked(); break;
        case 8: onPasteClicked(); break;
        case 9: onCutClicked(); break;
        case 10: onSelectAllClicked(); break;
        case 11: onDeselectClicked(); break;
        case 12: selectFgColor(); break;
        case 13: selectBgColor(); break;
        case 14: changeColors((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 15: selectedTool((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 16: onRestrictSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: changeSA(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
