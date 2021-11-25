/****************************************************************************
** Meta object code from reading C++ file 'nosto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bankautomat/nosto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nosto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Nosto_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nosto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nosto_t qt_meta_stringdata_Nosto = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Nosto"
QT_MOC_LITERAL(1, 6, 27), // "resetTimerNostostaValikkoon"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "NimenKoti"
QT_MOC_LITERAL(4, 45, 6), // "IDKoti"
QT_MOC_LITERAL(5, 52, 8), // "TiliKoti"
QT_MOC_LITERAL(6, 61, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 76, 5), // "reply"
QT_MOC_LITERAL(8, 82, 8), // "NostoLOL"
QT_MOC_LITERAL(9, 91, 14), // "maara_painettu"
QT_MOC_LITERAL(10, 106, 18), // "on_btnMenu_clicked"
QT_MOC_LITERAL(11, 125, 19) // "on_btnNosta_clicked"

    },
    "Nosto\0resetTimerNostostaValikkoon\0\0"
    "NimenKoti\0IDKoti\0TiliKoti\0QNetworkReply*\0"
    "reply\0NostoLOL\0maara_painettu\0"
    "on_btnMenu_clicked\0on_btnNosta_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nosto[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   57,    2, 0x0a /* Public */,
       4,    1,   60,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Nosto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Nosto *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetTimerNostostaValikkoon((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->NimenKoti((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->IDKoti((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->TiliKoti((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->NostoLOL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->maara_painettu(); break;
        case 6: _t->on_btnMenu_clicked(); break;
        case 7: _t->on_btnNosta_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Nosto::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Nosto::resetTimerNostostaValikkoon)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Nosto::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Nosto.data,
    qt_meta_data_Nosto,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Nosto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nosto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Nosto.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Nosto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Nosto::resetTimerNostostaValikkoon(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
