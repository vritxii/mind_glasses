/****************************************************************************
** Meta object code from reading C++ file 'Widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../mnt/File/ClionProjects/mind_glasses/Widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Form_t {
    QByteArrayData data[19];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Form_t qt_meta_stringdata_Form = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Form"
QT_MOC_LITERAL(1, 5, 14), // "slotPushButton"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "openPic"
QT_MOC_LITERAL(4, 29, 9), // "playMusic"
QT_MOC_LITERAL(5, 39, 4), // "turn"
QT_MOC_LITERAL(6, 44, 12), // "captureImage"
QT_MOC_LITERAL(7, 57, 12), // "displayImage"
QT_MOC_LITERAL(8, 70, 7), // "quit_QC"
QT_MOC_LITERAL(9, 78, 9), // "saveImage"
QT_MOC_LITERAL(10, 88, 10), // "openCamera"
QT_MOC_LITERAL(11, 99, 9), // "readFarme"
QT_MOC_LITERAL(12, 109, 11), // "closeCamera"
QT_MOC_LITERAL(13, 121, 14), // "takingPictures"
QT_MOC_LITERAL(14, 136, 12), // "cvMat2QImage"
QT_MOC_LITERAL(15, 149, 7), // "cv::Mat"
QT_MOC_LITERAL(16, 157, 3), // "mat"
QT_MOC_LITERAL(17, 161, 12), // "QImage2cvMat"
QT_MOC_LITERAL(18, 174, 5) // "image"

    },
    "Form\0slotPushButton\0\0openPic\0playMusic\0"
    "turn\0captureImage\0displayImage\0quit_QC\0"
    "saveImage\0openCamera\0readFarme\0"
    "closeCamera\0takingPictures\0cvMat2QImage\0"
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
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    2,   89,    2, 0x08 /* Private */,
       8,    0,   94,    2, 0x08 /* Private */,
       9,    0,   95,    2, 0x08 /* Private */,
      10,    0,   96,    2, 0x08 /* Private */,
      11,    0,   97,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    1,  100,    2, 0x08 /* Private */,
      17,    1,  103,    2, 0x08 /* Private */,

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
    QMetaType::QImage, 0x80000000 | 15,   16,
    0x80000000 | 15, QMetaType::QImage,   18,

       0        // eod
};

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form *_t = static_cast<Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotPushButton(); break;
        case 1: _t->openPic(); break;
        case 2: _t->playMusic(); break;
        case 3: _t->turn(); break;
        case 4: _t->captureImage(); break;
        case 5: _t->displayImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 6: _t->quit_QC(); break;
        case 7: _t->saveImage(); break;
        case 8: _t->openCamera(); break;
        case 9: _t->readFarme(); break;
        case 10: _t->closeCamera(); break;
        case 11: _t->takingPictures(); break;
        case 12: { QImage _r = _t->cvMat2QImage((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 13: { cv::Mat _r = _t->QImage2cvMat((*reinterpret_cast< QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< cv::Mat*>(_a[0]) = _r; }  break;
        default: ;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
