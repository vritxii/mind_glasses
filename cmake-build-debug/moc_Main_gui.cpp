/****************************************************************************
** Meta object code from reading C++ file 'Main_gui.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../mnt/File/ClionProjects/mind_glasses/Main_gui.hpp"
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
    QByteArrayData data[22];
    char stringdata0[205];
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
QT_MOC_LITERAL(4, 21, 14), // "slotPushButton"
QT_MOC_LITERAL(5, 36, 7), // "openPic"
QT_MOC_LITERAL(6, 44, 9), // "playMusic"
QT_MOC_LITERAL(7, 54, 4), // "turn"
QT_MOC_LITERAL(8, 59, 12), // "captureImage"
QT_MOC_LITERAL(9, 72, 12), // "displayImage"
QT_MOC_LITERAL(10, 85, 7), // "quit_QC"
QT_MOC_LITERAL(11, 93, 9), // "saveImage"
QT_MOC_LITERAL(12, 103, 10), // "openCamera"
QT_MOC_LITERAL(13, 114, 9), // "readFarme"
QT_MOC_LITERAL(14, 124, 11), // "closeCamera"
QT_MOC_LITERAL(15, 136, 14), // "takingPictures"
QT_MOC_LITERAL(16, 151, 12), // "cvMat2QImage"
QT_MOC_LITERAL(17, 164, 7), // "cv::Mat"
QT_MOC_LITERAL(18, 172, 3), // "mat"
QT_MOC_LITERAL(19, 176, 12), // "QImage2cvMat"
QT_MOC_LITERAL(20, 189, 5), // "image"
QT_MOC_LITERAL(21, 195, 9) // "openNewUI"

    },
    "Form\0display\0\0number\0slotPushButton\0"
    "openPic\0playMusic\0turn\0captureImage\0"
    "displayImage\0quit_QC\0saveImage\0"
    "openCamera\0readFarme\0closeCamera\0"
    "takingPictures\0cvMat2QImage\0cv::Mat\0"
    "mat\0QImage2cvMat\0image\0openNewUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   97,    2, 0x08 /* Private */,
       5,    0,   98,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    2,  102,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    1,  113,    2, 0x08 /* Private */,
      19,    1,  116,    2, 0x08 /* Private */,
      21,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QImage, 0x80000000 | 17,   18,
    0x80000000 | 17, QMetaType::QImage,   20,
    QMetaType::Void,

       0        // eod
};

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form *_t = static_cast<Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotPushButton(); break;
        case 2: _t->openPic(); break;
        case 3: _t->playMusic(); break;
        case 4: _t->turn(); break;
        case 5: _t->captureImage(); break;
        case 6: _t->displayImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 7: _t->quit_QC(); break;
        case 8: _t->saveImage(); break;
        case 9: _t->openCamera(); break;
        case 10: _t->readFarme(); break;
        case 11: _t->closeCamera(); break;
        case 12: _t->takingPictures(); break;
        case 13: { QImage _r = _t->cvMat2QImage((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 14: { cv::Mat _r = _t->QImage2cvMat((*reinterpret_cast< QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< cv::Mat*>(_a[0]) = _r; }  break;
        case 15: _t->openNewUI(); break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Form::display(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
