/****************************************************************************
** Meta object code from reading C++ file 'myfilewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainWidget/header/myfilewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myfilewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyFileWidget_t {
    const uint offsetsAndSize[24];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MyFileWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MyFileWidget_t qt_meta_stringdata_MyFileWidget = {
    {
QT_MOC_LITERAL(0, 12), // "MyFileWidget"
QT_MOC_LITERAL(13, 14), // "sig_LoginAgain"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 13), // "gotoTransform"
QT_MOC_LITERAL(43, 15), // "TransformStatus"
QT_MOC_LITERAL(59, 6), // "status"
QT_MOC_LITERAL(66, 11), // "onRightMenu"
QT_MOC_LITERAL(78, 3), // "pos"
QT_MOC_LITERAL(82, 10), // "uploadFile"
QT_MOC_LITERAL(93, 16), // "showInListWidget"
QT_MOC_LITERAL(110, 9), // "FileList&"
QT_MOC_LITERAL(120, 8) // "fileList"

    },
    "MyFileWidget\0sig_LoginAgain\0\0gotoTransform\0"
    "TransformStatus\0status\0onRightMenu\0"
    "pos\0uploadFile\0showInListWidget\0"
    "FileList&\0fileList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyFileWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    1,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   48,    2, 0x08,    4 /* Private */,
       8,    0,   51,    2, 0x08,    6 /* Private */,
       9,    1,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void MyFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyFileWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_LoginAgain(); break;
        case 1: _t->gotoTransform((*reinterpret_cast< std::add_pointer_t<TransformStatus>>(_a[1]))); break;
        case 2: _t->onRightMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->uploadFile(); break;
        case 4: _t->showInListWidget((*reinterpret_cast< std::add_pointer_t<FileList&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyFileWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyFileWidget::sig_LoginAgain)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyFileWidget::*)(TransformStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyFileWidget::gotoTransform)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MyFileWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MyFileWidget.offsetsAndSize,
    qt_meta_data_MyFileWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MyFileWidget_t
, QtPrivate::TypeAndForceComplete<MyFileWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TransformStatus, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<FileList &, std::false_type>


>,
    nullptr
} };


const QMetaObject *MyFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyFileWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MyFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MyFileWidget::sig_LoginAgain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyFileWidget::gotoTransform(TransformStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
