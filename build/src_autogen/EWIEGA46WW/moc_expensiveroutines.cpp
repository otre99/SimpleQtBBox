/****************************************************************************
** Meta object code from reading C++ file 'expensiveroutines.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "expensiveroutines.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expensiveroutines.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExpensiveRoutines_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExpensiveRoutines_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExpensiveRoutines_t qt_meta_stringdata_ExpensiveRoutines = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ExpensiveRoutines"
QT_MOC_LITERAL(1, 18, 10), // "JobStarted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "Progress"
QT_MOC_LITERAL(4, 39, 11), // "JobFinished"
QT_MOC_LITERAL(5, 51, 10), // "JobAborted"
QT_MOC_LITERAL(6, 62, 18), // "export_annotations"
QT_MOC_LITERAL(7, 81, 14), // "AnnImgManager*"
QT_MOC_LITERAL(8, 96, 4), // "info"
QT_MOC_LITERAL(9, 101, 16), // "AnnotationFilter"
QT_MOC_LITERAL(10, 118, 6), // "filter"
QT_MOC_LITERAL(11, 125, 15), // "output_ann_path"
QT_MOC_LITERAL(12, 141, 8) // "type_fmt"

    },
    "ExpensiveRoutines\0JobStarted\0\0Progress\0"
    "JobFinished\0JobAborted\0export_annotations\0"
    "AnnImgManager*\0info\0AnnotationFilter\0"
    "filter\0output_ann_path\0type_fmt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExpensiveRoutines[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    4,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, QMetaType::QString, QMetaType::Int,    8,   10,   11,   12,

       0        // eod
};

void ExpensiveRoutines::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExpensiveRoutines *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->JobStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->Progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->JobFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->JobAborted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->export_annotations((*reinterpret_cast< AnnImgManager*(*)>(_a[1])),(*reinterpret_cast< AnnotationFilter(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExpensiveRoutines::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExpensiveRoutines::JobStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExpensiveRoutines::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExpensiveRoutines::Progress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ExpensiveRoutines::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExpensiveRoutines::JobFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ExpensiveRoutines::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExpensiveRoutines::JobAborted)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExpensiveRoutines::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ExpensiveRoutines.data,
    qt_meta_data_ExpensiveRoutines,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExpensiveRoutines::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpensiveRoutines::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExpensiveRoutines.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExpensiveRoutines::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ExpensiveRoutines::JobStarted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExpensiveRoutines::Progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ExpensiveRoutines::JobFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ExpensiveRoutines::JobAborted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
