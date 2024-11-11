/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *ACCEUIL;
    QWidget *ACCEUIL2;
    QWidget *widget;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QLabel *label_10;
    QLabel *label_9;
    QCheckBox *checkBox_disponible;
    QCheckBox *checkBox_indisponible;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_11;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLabel *label_12;
    QTableWidget *tableWidget;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_trier;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_ajouter;
    QPushButton *pushButton_supprimer;
    QTableView *tableView;
    QLineEdit *lineEdit_16;
    QWidget *avis;
    QTableWidget *tableWidget_3;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_7;
    QLabel *label_4;
    QWidget *tab_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_5;
    QCommandLinkButton *commandLinkButton_6;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1283, 689);
        QPalette palette;
        QBrush brush(QColor(0, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font.setPointSize(12);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName("tab");
        ACCEUIL = new QTabWidget(tab);
        ACCEUIL->setObjectName("ACCEUIL");
        ACCEUIL->setGeometry(QRect(0, 0, 1291, 631));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        ACCEUIL->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font1.setPointSize(12);
        font1.setWeight(QFont::Light);
        font1.setItalic(false);
        font1.setKerning(false);
        ACCEUIL->setFont(font1);
        ACCEUIL->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";\n"
""));
        ACCEUIL2 = new QWidget();
        ACCEUIL2->setObjectName("ACCEUIL2");
        widget = new QWidget(ACCEUIL2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 50, 291, 411));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(165, 209, 167);\n"
"font: 300 12pt \"Bahnschrift Light\";"));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 210, 131, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";"));
        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(30, 240, 161, 31));
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 280, 111, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";"));
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 350, 151, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";"));
        checkBox_disponible = new QCheckBox(widget);
        checkBox_disponible->setObjectName("checkBox_disponible");
        checkBox_disponible->setGeometry(QRect(0, 380, 141, 21));
        checkBox_disponible->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";\n"
""));
        checkBox_indisponible = new QCheckBox(widget);
        checkBox_indisponible->setObjectName("checkBox_indisponible");
        checkBox_indisponible->setGeometry(QRect(140, 380, 141, 21));
        checkBox_indisponible->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";"));
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 63, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(30, 300, 171, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }\n"
""));
        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(20, 30, 171, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 70, 131, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";"));
        lineEdit_14 = new QLineEdit(widget);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(20, 100, 171, 31));
        lineEdit_14->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }\n"
""));
        lineEdit_15 = new QLineEdit(widget);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(20, 180, 171, 31));
        lineEdit_15->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }\n"
""));
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 140, 131, 31));
        label_12->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";"));
        tableWidget = new QTableWidget(ACCEUIL2);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font2.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem29);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(340, 240, 791, 191));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font3.setPointSize(12);
        font3.setWeight(QFont::Light);
        font3.setItalic(false);
        tableWidget->setFont(font3);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"	                           color: rgb(0, 0, 0);\n"
"                               background-color: #f0f0f0; /*Couleur de fond des cellules*/\n"
"                               gridline-color: #4CAF50;    /*Couleur des lignes de la grille*/\n"
"                               selection-background-color: #4CAF50; /*Couleur de s\303\251lection*/\n"
"                               selection-color: white;      /*Couleur du texte s\303\251lectionn\303\251*/\n"
"                               }\n"
"                               QHeaderView::section {\n"
"                               background-color: rgb(9, 124, 54);  /*Couleur de fond des en-t\303\252tes*/\n"
"                               color: black;               /*Couleur du texte des en-t\303\252tes*/\n"
"                               padding: 4px;\n"
"                               border-color: rgb(9, 124, 54);  /*Bordure autour des en-t\303\252tes*/\n"
"                               }\n"
"	                        "));
        label_17 = new QLabel(ACCEUIL2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(580, 190, 151, 21));
        label_17->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(0, 170, 0);\n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}\n"
""));
        label_18 = new QLabel(ACCEUIL2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(620, 470, 71, 61));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/461512018_8583292871729025_1881610230410531967_n.png")));
        label_18->setScaledContents(true);
        label_19 = new QLabel(ACCEUIL2);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(30, 10, 211, 31));
        label_19->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";"));
        pushButton_modifier = new QPushButton(ACCEUIL2);
        pushButton_modifier->setObjectName("pushButton_modifier");
        pushButton_modifier->setGeometry(QRect(810, 470, 131, 41));
        pushButton_modifier->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(68, 176, 117);\n"
"    color: rgb(9, 124, 54);\n"
"    color:black;\n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Downloads/461508595_825905609429817_3860263783025879477_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_modifier->setIcon(icon);
        pushButton_5 = new QPushButton(ACCEUIL2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(160, 480, 111, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(68, 176, 117);\n"
"    color: rgb(9, 124, 54);\n"
"    color:black;\n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Downloads/460177168_1665954550921902_7047727999174566408_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_5->setIcon(icon1);
        lineEdit_2 = new QLineEdit(ACCEUIL2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(340, 120, 211, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        pushButton_8 = new QPushButton(ACCEUIL2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(570, 120, 141, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(68, 176, 117);\n"
"    color: rgb(9, 124, 54);\n"
"    color:black;\n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../Downloads/460563423_1575797083314263_1051363182548254163_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_8->setIcon(icon2);
        pushButton_trier = new QPushButton(ACCEUIL2);
        pushButton_trier->setObjectName("pushButton_trier");
        pushButton_trier->setGeometry(QRect(960, 470, 121, 41));
        pushButton_trier->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(68, 176, 117);\n"
"    color: rgb(9, 124, 54);\n"
"    color:black;\n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../Downloads/461484528_521659267261567_8640738131585914016_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_trier->setIcon(icon3);
        lineEdit_5 = new QLineEdit(ACCEUIL2);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(340, 480, 271, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        pushButton_ajouter = new QPushButton(ACCEUIL2);
        pushButton_ajouter->setObjectName("pushButton_ajouter");
        pushButton_ajouter->setGeometry(QRect(40, 480, 101, 41));
        pushButton_ajouter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(9, 124, 54);\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112); \n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        pushButton_supprimer = new QPushButton(ACCEUIL2);
        pushButton_supprimer->setObjectName("pushButton_supprimer");
        pushButton_supprimer->setGeometry(QRect(690, 180, 121, 31));
        pushButton_supprimer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(9, 124, 54);\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112); \n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        tableView = new QTableView(ACCEUIL2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(16, 1, 1271, 571));
        lineEdit_16 = new QLineEdit(ACCEUIL2);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setGeometry(QRect(460, 180, 211, 31));
        lineEdit_16->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        ACCEUIL->addTab(ACCEUIL2, QString());
        tableView->raise();
        widget->raise();
        tableWidget->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        pushButton_modifier->raise();
        pushButton_5->raise();
        lineEdit_2->raise();
        pushButton_8->raise();
        pushButton_trier->raise();
        lineEdit_5->raise();
        pushButton_ajouter->raise();
        pushButton_supprimer->raise();
        lineEdit_16->raise();
        avis = new QWidget();
        avis->setObjectName("avis");
        tableWidget_3 = new QTableWidget(avis);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem33);
        if (tableWidget_3->rowCount() < 3)
            tableWidget_3->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 2, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 3, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_3->setItem(2, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_3->setItem(2, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget_3->setItem(2, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget_3->setItem(2, 3, __qtablewidgetitem48);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setGeometry(QRect(10, 270, 511, 151));
        tableWidget_2 = new QTableWidget(avis);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setTextAlignment(Qt::AlignHCenter|Qt::AlignTop);
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem53);
        if (tableWidget_2->rowCount() < 2)
            tableWidget_2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 1, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 2, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 3, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 4, __qtablewidgetitem60);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(560, 270, 651, 121));
        pushButton_6 = new QPushButton(avis);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(850, 430, 131, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(9, 124, 54);\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112); \n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        pushButton_10 = new QPushButton(avis);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(40, 130, 311, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(68, 176, 117);\n"
"    color: rgb(9, 124, 54);\n"
"    color:black;\n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        pushButton_10->setIcon(icon2);
        lineEdit_6 = new QLineEdit(avis);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(60, 190, 291, 41));
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_7 = new QLineEdit(avis);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(700, 190, 341, 41));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        pushButton_7 = new QPushButton(avis);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(1000, 430, 131, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(9, 124, 54);\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112); \n"
"    font-size: 20px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px; /* vous pouvez ajuster l'\303\251paisseur de la bordure */\n"
"    border-color: black; /* couleur de la bordure */\n"
"    \n"
"    border-radius: 10px; /* ajustez cette valeur pour arrondir plus ou moins */\n"
"}"));
        label_4 = new QLabel(avis);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 1261, 561));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/460640231_1322566308727208_3722229070046037089_n.png")));
        label_4->setScaledContents(true);
        ACCEUIL->addTab(avis, QString());
        label_4->raise();
        tableWidget_3->raise();
        tableWidget_2->raise();
        pushButton_6->raise();
        pushButton_10->raise();
        lineEdit_6->raise();
        lineEdit_7->raise();
        pushButton_7->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label = new QLabel(tab_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1261, 561));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/460640231_1322566308727208_3722229070046037089_n.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 110, 491, 351));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/stat.jpg")));
        label_2->setScaledContents(true);
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(750, 280, 31, 21));
        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(750, 320, 31, 21));
        lineEdit_10 = new QLineEdit(tab_2);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(750, 360, 31, 21));
        lineEdit_11 = new QLineEdit(tab_2);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(800, 280, 281, 31));
        lineEdit_11->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }\n"
""));
        lineEdit_12 = new QLineEdit(tab_2);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(800, 320, 281, 31));
        lineEdit_12->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }\n"
""));
        lineEdit_13 = new QLineEdit(tab_2);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(800, 360, 281, 31));
        lineEdit_13->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }\n"
""));
        commandLinkButton = new QCommandLinkButton(tab_2);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(130, 360, 61, 31));
        commandLinkButton_2 = new QCommandLinkButton(tab_2);
        commandLinkButton_2->setObjectName("commandLinkButton_2");
        commandLinkButton_2->setGeometry(QRect(130, 420, 61, 31));
        commandLinkButton_3 = new QCommandLinkButton(tab_2);
        commandLinkButton_3->setObjectName("commandLinkButton_3");
        commandLinkButton_3->setGeometry(QRect(130, 300, 61, 31));
        commandLinkButton_4 = new QCommandLinkButton(tab_2);
        commandLinkButton_4->setObjectName("commandLinkButton_4");
        commandLinkButton_4->setGeometry(QRect(130, 250, 61, 31));
        commandLinkButton_5 = new QCommandLinkButton(tab_2);
        commandLinkButton_5->setObjectName("commandLinkButton_5");
        commandLinkButton_5->setGeometry(QRect(130, 200, 61, 31));
        commandLinkButton_6 = new QCommandLinkButton(tab_2);
        commandLinkButton_6->setObjectName("commandLinkButton_6");
        commandLinkButton_6->setGeometry(QRect(130, 150, 61, 31));
        ACCEUIL->addTab(tab_2, QString());
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        tabWidget->addTab(tab_6, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        ACCEUIL->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "DATE :", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "ADRESSE :", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "DISPONIBILITE :", nullptr));
        checkBox_disponible->setText(QCoreApplication::translate("MainWindow", "DISPONIBLE", nullptr));
        checkBox_indisponible->setText(QCoreApplication::translate("MainWindow", "INDISPONIBLE", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "nom:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "telephone:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "adresse", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "telephone", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "disponibilite", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "15666", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Faycel Ben Ali", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Ariana", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "08/09/2024", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "25896357", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "OUI", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "17589", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Med ghraieb", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "La goulette", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(1, 3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "05/08/2024", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(1, 4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "90578159", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(1, 5);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "NON", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "18932", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(2, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Lina Gallati", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(2, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Menzah 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 3);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "20/09/2023", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 4);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "56762588", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(3, 0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "15558", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(3, 1);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "Rania Jbeli", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(3, 2);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Marsa", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(3, 3);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "01/10/2024", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(3, 4);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "25565505", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(3, 5);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "OUI", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "AJOUT FOURNISSEUR", nullptr));
        pushButton_modifier->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "ENTRER ID", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        pushButton_trier->setText(QCoreApplication::translate("MainWindow", "TRIER", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "EXPORTATION FORMAT PDF", nullptr));
        pushButton_ajouter->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        pushButton_supprimer->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        lineEdit_16->setText(QCoreApplication::translate("MainWindow", "ENTRER ID", nullptr));
        ACCEUIL->setTabText(ACCEUIL->indexOf(ACCEUIL2), QCoreApplication::translate("MainWindow", "acceuil", nullptr));
#if QT_CONFIG(accessibility)
        avis->setAccessibleName(QCoreApplication::translate("MainWindow", "avis", nullptr));
#endif // QT_CONFIG(accessibility)
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "DATE", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "DELAI", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "SERVICES", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "COMMENT", nullptr));

        const bool __sortingEnabled1 = tableWidget_3->isSortingEnabled();
        tableWidget_3->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_3->item(0, 0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "15/11/2023", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_3->item(0, 1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "3/5", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_3->item(0, 2);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "5/5", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_3->item(0, 3);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "un peu de retard", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_3->item(1, 0);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "25/01/2024", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_3->item(1, 1);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "5/5", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_3->item(1, 2);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "3.5/5", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_3->item(1, 3);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "rapide", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_3->item(2, 0);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", "06/02/2024", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_3->item(2, 1);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", "4/5", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_3->item(2, 2);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "4/5", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_3->item(2, 3);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", "satisfait", nullptr));
        tableWidget_3->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", "DATE", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "DELAI", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", "SERVICE", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("MainWindow", "NOTE", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("MainWindow", "AUTEUR", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("MainWindow", "1", nullptr));

        const bool __sortingEnabled2 = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_2->item(1, 0);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("MainWindow", "00/00/0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_2->item(1, 1);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("MainWindow", "(de1 \303\240 5)", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_2->item(1, 2);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("MainWindow", "(de 1 \303\240 5)", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_2->item(1, 3);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("MainWindow", "//", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_2->item(1, 4);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("MainWindow", "(le nom et prenom)", nullptr));
        tableWidget_2->setSortingEnabled(__sortingEnabled2);

        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Ajouter note", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Rechercher un fournisseur id:", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "TABLEAU DES EVALUATIONS:", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "AJOUTER UN COMMENTAIRE/NOTE:", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        label_4->setText(QString());
        ACCEUIL->setTabText(ACCEUIL->indexOf(avis), QCoreApplication::translate("MainWindow", "avis", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        lineEdit_8->setText(QCoreApplication::translate("MainWindow", "24", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("MainWindow", "38", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("MainWindow", "48", nullptr));
        lineEdit_11->setText(QCoreApplication::translate("MainWindow", "NUM FOURNISSEUR RAPIDE", nullptr));
        lineEdit_12->setText(QCoreApplication::translate("MainWindow", "NUM FOURNISSEUR -RAPIDE", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("MainWindow", "NUM FOURNISSEUR TARD", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        commandLinkButton_3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        commandLinkButton_4->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        commandLinkButton_5->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        commandLinkButton_6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        ACCEUIL->setTabText(ACCEUIL->indexOf(tab_2), QCoreApplication::translate("MainWindow", "statistiques", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "gestion fournisseur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "gestion clients", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "gestion commandes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "gestion produits", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "gestion employ\303\251s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
