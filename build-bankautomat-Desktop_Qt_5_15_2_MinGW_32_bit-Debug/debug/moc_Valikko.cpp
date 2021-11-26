/****************************************************************************
** Meta object code from reading C++ file 'Valikko.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bankautomat/Valikko.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Valikko.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Valikko_t {
    QByteArrayData data[14];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Valikko_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Valikko_t qt_meta_stringdata_Valikko = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Valikko"
QT_MOC_LITERAL(1, 8, 15), // "resetTimerNosto"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "resetTimerPadel"
QT_MOC_LITERAL(4, 41, 15), // "resetTimerSaldo"
QT_MOC_LITERAL(5, 57, 20), // "resetTimerTapahtumat"
QT_MOC_LITERAL(6, 78, 14), // "resetTimerUlos"
QT_MOC_LITERAL(7, 93, 10), // "JarmonKoti"
QT_MOC_LITERAL(8, 104, 9), // "SepinKoti"
QT_MOC_LITERAL(9, 114, 19), // "on_btnNosto_clicked"
QT_MOC_LITERAL(10, 134, 23), // "on_btnPadelCoin_clicked"
QT_MOC_LITERAL(11, 158, 19), // "on_btnSaldo_clicked"
QT_MOC_LITERAL(12, 178, 28), // "on_btnTilitapahtumat_clicked"
QT_MOC_LITERAL(13, 207, 18) // "on_btnULos_clicked"

    },
    "Valikko\0resetTimerNosto\0\0resetTimerPadel\0"
    "resetTimerSaldo\0resetTimerTapahtumat\0"
    "resetTimerUlos\0JarmonKoti\0SepinKoti\0"
    "on_btnNosto_clicked\0on_btnPadelCoin_clicked\0"
    "on_btnSaldo_clicked\0on_btnTilitapahtumat_clicked\0"
    "on_btnULos_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Valikko[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   89,    2, 0x0a /* Public */,
       8,    1,   92,    2, 0x0a /* Public */,
       9,    0,   95,    2, 0x08 /* Private */,
      10,    0,   96,    2, 0x08 /* Private */,
      11,    0,   97,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Valikko::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Valikko *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetTimerNosto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->resetTimerPadel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->resetTimerSaldo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->resetTimerTapahtumat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->resetTimerUlos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->JarmonKoti((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->SepinKoti((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_btnNosto_clicked(); break;
        case 8: _t->on_btnPadelCoin_clicked(); break;
        case 9: _t->on_btnSaldo_clicked(); break;
        case 10: _t->on_btnTilitapahtumat_clicked(); break;
        case 11: _t->on_btnULos_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Valikko::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Valikko::resetTimerNosto)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Valikko::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Valikko::resetTimerPadel)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Valikko::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Valikko::resetTimerSaldo)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Valikko::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Valikko::resetTimerTapahtumat)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Valikko::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Valikko::resetTimerUlos)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Valikko::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Valikko.data,
    qt_meta_data_Valikko,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Valikko::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Valikko::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Valikko.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Valikko::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Valikko::resetTimerNosto(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Valikko::resetTimerPadel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Valikko::resetTimerSaldo(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Valikko::resetTimerTapahtumat(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Valikko::resetTimerUlos(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
