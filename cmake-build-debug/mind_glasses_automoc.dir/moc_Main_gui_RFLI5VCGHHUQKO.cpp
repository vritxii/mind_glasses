/****************************************************************************
** Meta object code from reading C++ file 'Main_gui.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Main_gui.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Main_gui.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Form_t {
    QByteArrayData data[24];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Form_t qt_meta_stringdata_Form = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Form"
QT_MOC_LITERAL(1, 5, 7), // "display"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 6), // "number"
QT_MOC_LITERAL(4, 21, 8), // "sentWord"
QT_MOC_LITERAL(5, 30, 11), // "sentPicPath"
QT_MOC_LITERAL(6, 42, 11), // "sentObjPath"
QT_MOC_LITERAL(7, 54, 7), // "openPic"
QT_MOC_LITERAL(8, 62, 9), // "Phonation"
QT_MOC_LITERAL(9, 72, 10), // "openCamera"
QT_MOC_LITERAL(10, 83, 9), // "readFarme"
QT_MOC_LITERAL(11, 93, 11), // "closeCamera"
QT_MOC_LITERAL(12, 105, 14), // "takingPictures"
QT_MOC_LITERAL(13, 120, 9), // "translate"
QT_MOC_LITERAL(14, 130, 6), // "getMsg"
QT_MOC_LITERAL(15, 137, 9), // "drawTrans"
QT_MOC_LITERAL(16, 147, 5), // "tasks"
QT_MOC_LITERAL(17, 153, 8), // "showInfo"
QT_MOC_LITERAL(18, 162, 8), // "chatInfo"
QT_MOC_LITERAL(19, 171, 12), // "cvMat2QImage"
QT_MOC_LITERAL(20, 184, 7), // "cv::Mat"
QT_MOC_LITERAL(21, 192, 3), // "mat"
QT_MOC_LITERAL(22, 196, 12), // "QImage2cvMat"
QT_MOC_LITERAL(23, 209, 5) // "image"

    },
    "Form\0display\0\0number\0sentWord\0sentPicPath\0"
    "sentObjPath\0openPic\0Phonation\0openCamera\0"
    "readFarme\0closeCamera\0takingPictures\0"
    "translate\0getMsg\0drawTrans\0tasks\0"
    "showInfo\0chatInfo\0cvMat2QImage\0cv::Mat\0"
    "mat\0QImage2cvMat\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       5,    1,  110,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  116,    2, 0x08 /* Private */,
       8,    1,  117,    2, 0x08 /* Private */,
       9,    0,  120,    2, 0x08 /* Private */,
      10,    0,  121,    2, 0x08 /* Private */,
      11,    0,  122,    2, 0x08 /* Private */,
      12,    0,  123,    2, 0x08 /* Private */,
      13,    0,  124,    2, 0x08 /* Private */,
      14,    1,  125,    2, 0x08 /* Private */,
      15,    1,  128,    2, 0x08 /* Private */,
      16,    1,  131,    2, 0x08 /* Private */,
      17,    1,  134,    2, 0x08 /* Private */,
      18,    1,  137,    2, 0x08 /* Private */,
      19,    1,  140,    2, 0x08 /* Private */,
      22,    1,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::QImage, 0x80000000 | 20,   21,
    0x80000000 | 20, QMetaType::QImage,   23,

       0        // eod
};

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form *_t = static_cast<Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sentWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sentPicPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sentObjPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->openPic(); break;
        case 5: _t->Phonation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->openCamera(); break;
        case 7: _t->readFarme(); break;
        case 8: _t->closeCamera(); break;
        case 9: _t->takingPictures(); break;
        case 10: _t->translate(); break;
        case 11: _t->getMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->drawTrans((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->tasks((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->showInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->chatInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: { QImage _r = _t->cvMat2QImage((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 17: { cv::Mat _r = _t->QImage2cvMat((*reinterpret_cast< QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< cv::Mat*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Form::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Form::display)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Form::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Form::sentWord)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Form::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Form::sentPicPath)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Form::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Form::sentObjPath)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Form.data,
      qt_meta_data_Form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Form.stringdata0))
        return static_cast<void*>(const_cast< Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Form::display(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Form::sentWord(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Form::sentPicPath(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Form::sentObjPath(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
