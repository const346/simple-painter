/****************************************************************************
** Meta object code from reading C++ file 'imagetool.h'
**
** Created: Sun 15. Dec 21:51:53 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../imagetool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagetool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageTool[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ImageTool[] = {
    "ImageTool\0"
};

const QMetaObject ImageTool::staticMetaObject = {
    { &AbstractTool::staticMetaObject, qt_meta_stringdata_ImageTool,
      qt_meta_data_ImageTool, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageTool))
        return static_cast<void*>(const_cast< ImageTool*>(this));
    return AbstractTool::qt_metacast(_clname);
}

int ImageTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
