/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_pushButton_ajouter_clicked",
    "",
    "on_pushButton_supprimer_clicked",
    "on_pushButton_modifier_clicked",
    "on_pushButton_trier_clicked",
    "on_pushButton_rechercher_clicked",
    "on_pushButton_pdf_clicked",
    "on_pushButton_stat_clicked",
    "on_pushButton_recherche_clicked",
    "on_pushButton_AddHistorique_clicked",
    "afficherTopClients",
    "handleIdReceived",
    "id",
    "chercherEtatDansBD"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[31];
    char stringdata5[28];
    char stringdata6[33];
    char stringdata7[26];
    char stringdata8[27];
    char stringdata9[32];
    char stringdata10[36];
    char stringdata11[19];
    char stringdata12[17];
    char stringdata13[3];
    char stringdata14[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 29),  // "on_pushButton_ajouter_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 31),  // "on_pushButton_supprimer_clicked"
        QT_MOC_LITERAL(74, 30),  // "on_pushButton_modifier_clicked"
        QT_MOC_LITERAL(105, 27),  // "on_pushButton_trier_clicked"
        QT_MOC_LITERAL(133, 32),  // "on_pushButton_rechercher_clicked"
        QT_MOC_LITERAL(166, 25),  // "on_pushButton_pdf_clicked"
        QT_MOC_LITERAL(192, 26),  // "on_pushButton_stat_clicked"
        QT_MOC_LITERAL(219, 31),  // "on_pushButton_recherche_clicked"
        QT_MOC_LITERAL(251, 35),  // "on_pushButton_AddHistorique_c..."
        QT_MOC_LITERAL(287, 18),  // "afficherTopClients"
        QT_MOC_LITERAL(306, 16),  // "handleIdReceived"
        QT_MOC_LITERAL(323, 2),  // "id"
        QT_MOC_LITERAL(326, 18)   // "chercherEtatDansBD"
    },
    "MainWindow",
    "on_pushButton_ajouter_clicked",
    "",
    "on_pushButton_supprimer_clicked",
    "on_pushButton_modifier_clicked",
    "on_pushButton_trier_clicked",
    "on_pushButton_rechercher_clicked",
    "on_pushButton_pdf_clicked",
    "on_pushButton_stat_clicked",
    "on_pushButton_recherche_clicked",
    "on_pushButton_AddHistorique_clicked",
    "afficherTopClients",
    "handleIdReceived",
    "id",
    "chercherEtatDansBD"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    0,   95,    2, 0x08,   10 /* Private */,
      12,    1,   96,    2, 0x08,   11 /* Private */,
      14,    1,   99,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::QString, QMetaType::QString,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_pushButton_ajouter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_supprimer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_modifier_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_trier_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_rechercher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_pdf_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_stat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_recherche_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_AddHistorique_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'afficherTopClients'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleIdReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'chercherEtatDansBD'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_ajouter_clicked(); break;
        case 1: _t->on_pushButton_supprimer_clicked(); break;
        case 2: _t->on_pushButton_modifier_clicked(); break;
        case 3: _t->on_pushButton_trier_clicked(); break;
        case 4: _t->on_pushButton_rechercher_clicked(); break;
        case 5: _t->on_pushButton_pdf_clicked(); break;
        case 6: _t->on_pushButton_stat_clicked(); break;
        case 7: _t->on_pushButton_recherche_clicked(); break;
        case 8: _t->on_pushButton_AddHistorique_clicked(); break;
        case 9: _t->afficherTopClients(); break;
        case 10: _t->handleIdReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: { QString _r = _t->chercherEtatDansBD((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
