/****************************************************************************
** Meta object code from reading C++ file 'Main_gui.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/Main_gui.hpp"
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
    QByteArrayData data[21];
    char stringdata0[191];
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
QT_MOC_LITERAL(6, 42, 7), // "openPic"
QT_MOC_LITERAL(7, 50, 9), // "Phonation"
QT_MOC_LITERAL(8, 60, 10), // "openCamera"
QT_MOC_LITERAL(9, 71, 9), // "readFarme"
QT_MOC_LITERAL(10, 81, 11), // "closeCamera"
QT_MOC_LITERAL(11, 93, 14), // "takingPictures"
QT_MOC_LITERAL(12, 108, 9), // "translate"
QT_MOC_LITERAL(13, 118, 6), // "getMsg"
QT_MOC_LITERAL(14, 125, 9), // "drawTrans"
QT_MOC_LITERAL(15, 135, 11), // "std::string"
QT_MOC_LITERAL(16, 147, 12), // "cvMat2QImage"
QT_MOC_LITERAL(17, 160, 7), // "cv::Mat"
QT_MOC_LITERAL(18, 168, 3), // "mat"
QT_MOC_LITERAL(19, 172, 12), // "QImage2cvMat"
QT_MOC_LITERAL(20, 185, 5) // "image"

    },
    "Form\0display\0\0number\0sentWord\0sentPicPath\0"
    "openPic\0Phonation\0openCamera\0readFarme\0"
    "closeCamera\0takingPictures\0translate\0"
    "getMsg\0drawTrans\0std::string\0cvMat2QImage\0"
    "cv::Mat\0mat\0QImage2cvMat\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   93,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    1,  102,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      19,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::QImage, 0x80000000 | 17,   18,
    0x80000000 | 17, QMetaType::QImage,   20,

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
        case 3: _t->openPic(); break;
        case 4: _t->Phonation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->openCamera(); break;
        case 6: _t->readFarme(); break;
        case 7: _t->closeCamera(); break;
        case 8: _t->takingPictures(); break;
        case 9: _t->translate(); break;
        case 10: _t->getMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->drawTrans((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 12: { QImage _r = _t->cvMat2QImage((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 13: { cv::Mat _r = _t->QImage2cvMat((*reinterpret_cast< QImage(*)>(_a[1])));
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
