/****************************************************************************
** Meta object code from reading C++ file 'texttool.h'
**
** Created: Sun 15. Dec 21:51:54 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../texttool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'texttool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextTool[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      27,   25,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TextTool[] = {
    "TextTool\0\0valueChanged()\0,\0"
    "textCPhanged(int,int)\0"
};

const QMetaObject TextTool::staticMetaObject = {
    { &AbstractTool::staticMetaObject, qt_meta_stringdata_TextTool,
      qt_meta_data_TextTool, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextTool))
        return static_cast<void*>(const_cast< TextTool*>(this));
    return AbstractTool::qt_metacast(_clname);
}

int TextTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueChanged(); break;
        case 1: textCPhanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
