/****************************************************************************
** Meta object code from reading C++ file 'Stu_Info.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../mnt/file/ClionProjects/mind_glasses/Stu_Info.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Stu_Info.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Stu_Info_t {
    QByteArrayData data[11];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Stu_Info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Stu_Info_t qt_meta_stringdata_Stu_Info = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Stu_Info"
QT_MOC_LITERAL(1, 9, 7), // "display"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "number"
QT_MOC_LITERAL(4, 25, 11), // "CreateTable"
QT_MOC_LITERAL(5, 37, 9), // "Save2File"
QT_MOC_LITERAL(6, 47, 11), // "getHeadDate"
QT_MOC_LITERAL(7, 59, 15), // "QVector<char*>&"
QT_MOC_LITERAL(8, 75, 10), // "ClearTable"
QT_MOC_LITERAL(9, 86, 10), // "insertDate"
QT_MOC_LITERAL(10, 97, 7) // "main_UI"

    },
    "Stu_Info\0display\0\0number\0CreateTable\0"
    "Save2File\0getHeadDate\0QVector<char*>&\0"
    "ClearTable\0insertDate\0main_UI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Stu_Info[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    3,   54,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Stu_Info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Stu_Info *_t = static_cast<Stu_Info *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->CreateTable(); break;
        case 2: _t->Save2File(); break;
        case 3: _t->getHeadDate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVector<char*>(*)>(_a[3]))); break;
        case 4: _t->ClearTable(); break;
        case 5: _t->insertDate(); break;
        case 6: _t->main_UI(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Stu_Info::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Stu_Info::display)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Stu_Info::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Stu_Info.data,
      qt_meta_data_Stu_Info,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Stu_Info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stu_Info::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Stu_Info.stringdata0))
        return static_cast<void*>(const_cast< Stu_Info*>(this));
    return QWidget::qt_metacast(_clname);
}

int Stu_Info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Stu_Info::display(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
