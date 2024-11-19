/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
    QTabWidget *tabWidget_2;
    QWidget *tab_8;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_11;
    QPushButton *pushButton_stat;
    QPushButton *pushButton_recherche;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *idProduitAjout;
    QLabel *label_2;
    QLineEdit *libelleAjout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *dateAjout;
    QLabel *label_6;
    QComboBox *categorieAjout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QLabel *label_8;
    QLineEdit *prixAjout;
    QPushButton *pushButton_pdf;
    QTableWidget *tableWidget_2;
    QLineEdit *lineEdit_rech;
    QLabel *label_9;
    QTableView *tableView;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_tri;
    QComboBox *comboBox_rech;
    QLabel *label_7;
    QLineEdit *lineEdit_idpdf;
    QPushButton *pushButton;
    QLabel *label_10;
    QPushButton *addbutton;
    QPushButton *pushButton_10;
    QPushButton *pushButton_2;
    QWidget *tab_4;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_80;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *pushButton_4;
    QLabel *label_25;
    QWidget *tab_3;
    QLabel *label_17;
    QPushButton *send;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *email;
    QLineEdit *nomProduit;
    QDateEdit *dateExpiration;
    QLineEdit *nom;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_18;
    QLabel *label_26;
    QWidget *tab_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_78;
    QPushButton *showStatsForMen;
    QPushButton *showStatsForWomen;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_1;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *tab_9;
    QWidget *tab_10;
    QWidget *tab_11;
    QWidget *tab_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1167, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 10, 1171, 531));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font.setPointSize(12);
        font.setBold(false);
        tabWidget_2->setFont(font);
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        tabWidget = new QTabWidget(tab_8);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1171, 501));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font1.setPointSize(10);
        font1.setBold(false);
        tabWidget->setFont(font1);
        tab = new QWidget();
        tab->setObjectName("tab");
        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(990, 390, 141, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        pushButton_11->setFont(font2);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/460177168_1665954550921902_7047727999174566408_n-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_11->setIcon(icon);
        pushButton_11->setIconSize(QSize(23, 23));
        pushButton_stat = new QPushButton(tab);
        pushButton_stat->setObjectName("pushButton_stat");
        pushButton_stat->setGeometry(QRect(620, 390, 141, 31));
        pushButton_stat->setFont(font2);
        pushButton_stat->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/461484528_521659267261567_8640738131585914016_n-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_stat->setIcon(icon1);
        pushButton_stat->setIconSize(QSize(23, 23));
        pushButton_recherche = new QPushButton(tab);
        pushButton_recherche->setObjectName("pushButton_recherche");
        pushButton_recherche->setGeometry(QRect(990, 50, 101, 31));
        pushButton_recherche->setFont(font2);
        pushButton_recherche->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Downloads/460563423_1575797083314263_1051363182548254163_n__1_-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_recherche->setIcon(icon2);
        pushButton_recherche->setIconSize(QSize(23, 23));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 30, 241, 401));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font3.setPointSize(10);
        font3.setBold(true);
        groupBox->setFont(font3);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 131, 21));
        label->setFont(font1);
        idProduitAjout = new QLineEdit(groupBox);
        idProduitAjout->setObjectName("idProduitAjout");
        idProduitAjout->setGeometry(QRect(20, 60, 201, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 81, 20));
        label_2->setFont(font1);
        libelleAjout = new QLineEdit(groupBox);
        libelleAjout->setObjectName("libelleAjout");
        libelleAjout->setGeometry(QRect(20, 120, 201, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 160, 111, 20));
        label_3->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 340, 111, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 220, 161, 20));
        label_5->setFont(font1);
        dateAjout = new QDateEdit(groupBox);
        dateAjout->setObjectName("dateAjout");
        dateAjout->setGeometry(QRect(20, 240, 201, 21));
        dateAjout->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 280, 141, 21));
        label_6->setFont(font1);
        categorieAjout = new QComboBox(groupBox);
        categorieAjout->addItem(QString());
        categorieAjout->addItem(QString());
        categorieAjout->addItem(QString());
        categorieAjout->addItem(QString());
        categorieAjout->setObjectName("categorieAjout");
        categorieAjout->setGeometry(QRect(20, 300, 201, 21));
        categorieAjout->setFont(font1);
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 360, 91, 24));
        checkBox->setFont(font1);
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(120, 360, 111, 24));
        checkBox_3->setFont(font1);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 30, 241, 371));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/Sans titre - 3.png")));
        label_8->setScaledContents(true);
        prixAjout = new QLineEdit(groupBox);
        prixAjout->setObjectName("prixAjout");
        prixAjout->setGeometry(QRect(20, 180, 201, 21));
        label_8->raise();
        prixAjout->raise();
        label->raise();
        idProduitAjout->raise();
        label_2->raise();
        libelleAjout->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        dateAjout->raise();
        label_6->raise();
        categorieAjout->raise();
        checkBox->raise();
        checkBox_3->raise();
        pushButton_pdf = new QPushButton(tab);
        pushButton_pdf->setObjectName("pushButton_pdf");
        pushButton_pdf->setGeometry(QRect(410, 390, 181, 31));
        pushButton_pdf->setFont(font2);
        pushButton_pdf->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Downloads/461512018_8583292871729025_1881610230410531967_n-removebg-preview (1).png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_pdf->setIcon(icon3);
        pushButton_pdf->setIconSize(QSize(32, 32));
        tableWidget_2 = new QTableWidget(tab);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget_2->rowCount() < 4)
            tableWidget_2->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 5, __qtablewidgetitem29);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(370, 180, 761, 181));
        lineEdit_rech = new QLineEdit(tab);
        lineEdit_rech->setObjectName("lineEdit_rech");
        lineEdit_rech->setGeometry(QRect(630, 50, 351, 31));
        lineEdit_rech->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(-20, -40, 1181, 901));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Screenshots/Capture d'\303\251cran 2024-10-07 191245.png")));
        label_9->setScaledContents(true);
        tableView = new QTableView(tab);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(340, 180, 801, 181));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(820, 390, 161, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        comboBox_tri = new QComboBox(tab);
        comboBox_tri->addItem(QString());
        comboBox_tri->addItem(QString());
        comboBox_tri->addItem(QString());
        comboBox_tri->addItem(QString());
        comboBox_tri->setObjectName("comboBox_tri");
        comboBox_tri->setGeometry(QRect(470, 430, 271, 31));
        comboBox_rech = new QComboBox(tab);
        comboBox_rech->addItem(QString());
        comboBox_rech->addItem(QString());
        comboBox_rech->setObjectName("comboBox_rech");
        comboBox_rech->setGeometry(QRect(460, 50, 161, 31));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(380, 430, 91, 31));
        lineEdit_idpdf = new QLineEdit(tab);
        lineEdit_idpdf->setObjectName("lineEdit_idpdf");
        lineEdit_idpdf->setGeometry(QRect(290, 390, 113, 31));
        lineEdit_idpdf->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(990, 111, 151, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(340, 20, 131, 31));
        addbutton = new QPushButton(tab);
        addbutton->setObjectName("addbutton");
        addbutton->setGeometry(QRect(341, 111, 204, 44));
        addbutton->setFont(font2);
        addbutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Downloads/plus-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::On);
        addbutton->setIcon(icon4);
        addbutton->setIconSize(QSize(30, 50));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(550, 110, 204, 44));
        pushButton_10->setFont(font2);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Downloads/461508595_825905609429817_3860263783025879477_n-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_10->setIcon(icon5);
        pushButton_10->setIconSize(QSize(27, 27));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(760, 110, 204, 44));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Downloads/moins-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(30, 50));
        tabWidget->addTab(tab, QString());
        label_9->raise();
        pushButton_11->raise();
        pushButton_stat->raise();
        pushButton_recherche->raise();
        groupBox->raise();
        pushButton_pdf->raise();
        tableWidget_2->raise();
        lineEdit_rech->raise();
        tableView->raise();
        lineEdit_3->raise();
        comboBox_tri->raise();
        comboBox_rech->raise();
        label_7->raise();
        lineEdit_idpdf->raise();
        addbutton->raise();
        pushButton_10->raise();
        pushButton_2->raise();
        pushButton->raise();
        label_10->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_21 = new QLabel(tab_4);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(-10, -10, 1241, 601));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Screenshots/Capture d'\303\251cran 2024-10-07 191245.png")));
        label_21->setScaledContents(true);
        label_22 = new QLabel(tab_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(260, 120, 501, 271));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Screenshots/Capture d'\303\251cran 2024-10-07 224650.png")));
        label_22->setScaledContents(true);
        label_80 = new QLabel(tab_4);
        label_80->setObjectName("label_80");
        label_80->setGeometry(QRect(240, 100, 541, 311));
        label_80->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/Sans titre - 3.png")));
        label_80->setScaledContents(true);
        label_23 = new QLabel(tab_4);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(50, 30, 451, 41));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/88.png")));
        label_23->setScaledContents(true);
        label_24 = new QLabel(tab_4);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(60, 40, 501, 20));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(900, 190, 101, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
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
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../Downloads/360_F_258801609_qHQKHFxR6gfzOGrzm8hbvGBinLuC07lg-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_4->setIcon(icon7);
        pushButton_4->setIconSize(QSize(80, 80));
        label_25 = new QLabel(tab_4);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(910, 270, 91, 20));
        tabWidget->addTab(tab_4, QString());
        label_21->raise();
        label_80->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        pushButton_4->raise();
        label_25->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_17 = new QLabel(tab_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(-10, 10, 1211, 591));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Screenshots/Capture d'\303\251cran 2024-10-07 191245.png")));
        label_17->setScaledContents(true);
        send = new QPushButton(tab_3);
        send->setObjectName("send");
        send->setGeometry(QRect(420, 300, 111, 31));
        send->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
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
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../Downloads/Capture_d_\303\251cran_2024-10-07_213823-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::On);
        send->setIcon(icon8);
        send->setIconSize(QSize(70, 70));
        label_19 = new QLabel(tab_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(50, 60, 251, 41));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/88.png")));
        label_19->setScaledContents(true);
        label_20 = new QLabel(tab_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(30, 20, 301, 20));
        email = new QLineEdit(tab_3);
        email->setObjectName("email");
        email->setGeometry(QRect(300, 90, 361, 31));
        nomProduit = new QLineEdit(tab_3);
        nomProduit->setObjectName("nomProduit");
        nomProduit->setGeometry(QRect(300, 190, 361, 31));
        dateExpiration = new QDateEdit(tab_3);
        dateExpiration->setObjectName("dateExpiration");
        dateExpiration->setGeometry(QRect(300, 240, 361, 31));
        nom = new QLineEdit(tab_3);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(300, 140, 361, 31));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(110, 100, 131, 21));
        label_13->setFont(font1);
        label_14 = new QLabel(tab_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(110, 140, 131, 21));
        label_14->setFont(font1);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(110, 190, 131, 21));
        label_18->setFont(font1);
        label_26 = new QLabel(tab_3);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(110, 240, 131, 21));
        label_26->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_11 = new QLabel(tab_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(-10, -40, 1231, 611));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Screenshots/Capture d'\303\251cran 2024-10-07 191245.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(tab_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(70, 20, 501, 41));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/88.png")));
        label_12->setScaledContents(true);
        label_15 = new QLabel(tab_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(80, 30, 481, 20));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(160, 90, 771, 321));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Screenshots/Capture d'\303\251cran 2024-10-07 222607.png")));
        label_16->setScaledContents(true);
        label_78 = new QLabel(tab_2);
        label_78->setObjectName("label_78");
        label_78->setGeometry(QRect(140, 70, 811, 361));
        label_78->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/Sans titre - 3.png")));
        label_78->setScaledContents(true);
        showStatsForMen = new QPushButton(tab_2);
        showStatsForMen->setObjectName("showStatsForMen");
        showStatsForMen->setGeometry(QRect(80, 70, 121, 28));
        showStatsForMen->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        showStatsForWomen = new QPushButton(tab_2);
        showStatsForWomen->setObjectName("showStatsForWomen");
        showStatsForWomen->setGeometry(QRect(620, 80, 131, 28));
        showStatsForWomen->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
"    background-color: rgb(68, 176, 112);\n"
"    font-size: 18px;\n"
"    line-height: 1.5;\n"
"    width: 200px;\n"
"    height: 40px;\n"
"    opacity: 0.65;\n"
"    text-align: center;\n"
"    \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #097C36; /* Couleur de la bordure modifi\303\251e */\n"
"    \n"
"    border-radius: 10px;\n"
"}"));
        horizontalLayoutWidget = new QWidget(tab_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(80, 130, 441, 291));
        horizontalLayout_1 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(tab_2);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(620, 130, 441, 291));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_2, QString());
        label_11->raise();
        label_78->raise();
        label_12->raise();
        label_15->raise();
        label_16->raise();
        showStatsForMen->raise();
        showStatsForWomen->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        tabWidget_2->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName("tab_11");
        tabWidget_2->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName("tab_12");
        tabWidget_2->addTab(tab_12, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1167, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton_stat->setText(QCoreApplication::translate("MainWindow", "Statistique", nullptr));
        pushButton_recherche->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", " Ajout Produits", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID Produit :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Libell\303\251      :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Prix (TND) :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251 :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Date d'expiration :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Cat\303\251gorie :", nullptr));
        categorieAjout->setItemText(0, QCoreApplication::translate("MainWindow", "M\303\251dicament sur ordonnance", nullptr));
        categorieAjout->setItemText(1, QCoreApplication::translate("MainWindow", "M\303\251dicament en ventre libre ", nullptr));
        categorieAjout->setItemText(2, QCoreApplication::translate("MainWindow", "Produit de soins pour b\303\251b\303\251 ", nullptr));
        categorieAjout->setItemText(3, QCoreApplication::translate("MainWindow", "Produit de soins personnel", nullptr));

        checkBox->setText(QCoreApplication::translate("MainWindow", "En stock", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "En rupture", nullptr));
        label_8->setText(QString());
        pushButton_pdf->setText(QCoreApplication::translate("MainWindow", "  Exporter PDF  ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "libell\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Prix", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Date d'expiration", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Cat\303\251gorie", nullptr));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "MED001", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->item(0, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Parac\303\251tamol 500mg", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->item(0, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "5.00", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->item(0, 3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "En stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->item(0, 4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "2025-06-15", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->item(0, 5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "M\303\251dicament en vente libre", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->item(1, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "MED002", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->item(1, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Ibuprof\303\250ne 200mg", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->item(1, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "6.50", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->item(1, 3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "En stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->item(1, 4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "2026-03-10", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->item(1, 5);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "M\303\251dicament sur ordonnance", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->item(2, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "MED003", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->item(2, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Amoxicilline 500mg", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->item(2, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "15.00", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->item(2, 3);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "En rupture", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->item(2, 4);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "2024-11-30", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->item(2, 5);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "M\303\251dicament sur ordonnance", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->item(3, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "MED004", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_2->item(3, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Aspirine 100mg", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_2->item(3, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "3.00", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_2->item(3, 3);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "En stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_2->item(3, 4);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "2025-09-01", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_2->item(3, 5);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "M\303\251dicament en vente libre", nullptr));
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        lineEdit_rech->setText(QString());
        lineEdit_rech->setPlaceholderText(QCoreApplication::translate("MainWindow", "Recherche", nullptr));
        label_9->setText(QString());
        lineEdit_3->setText(QString());
        comboBox_tri->setItemText(0, QCoreApplication::translate("MainWindow", "libelle croissants", nullptr));
        comboBox_tri->setItemText(1, QCoreApplication::translate("MainWindow", "libelle decroissants", nullptr));
        comboBox_tri->setItemText(2, QCoreApplication::translate("MainWindow", "prix croissants", nullptr));
        comboBox_tri->setItemText(3, QCoreApplication::translate("MainWindow", "prix decroissants", nullptr));

        comboBox_rech->setItemText(0, QCoreApplication::translate("MainWindow", "Libelle", nullptr));
        comboBox_rech->setItemText(1, QCoreApplication::translate("MainWindow", "Disponibilite", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Trier Par :", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Rafraishir", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Recherche :", nullptr));
        addbutton->setText(QCoreApplication::translate("MainWindow", "Ajouter  ", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Annuler  ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Acceuil", nullptr));
        label_21->setText(QString());
        label_22->setText(QString());
        label_80->setText(QString());
        label_23->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "Etat du produit le plus demand\303\251 selon le genre :", nullptr));
        pushButton_4->setText(QString());
        label_25->setText(QCoreApplication::translate("MainWindow", "Explorer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Etat ", nullptr));
        label_17->setText(QString());
        send->setText(QCoreApplication::translate("MainWindow", "Envoyer", nullptr));
        label_19->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "Le message \303\240 envoyer :", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Email :", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Nom :", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Nom de Produit:", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Date d'expiration:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Notifications", nullptr));
        label_11->setText(QString());
        label_12->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "Etat du produit le plus demand\303\251 selon le genre :", nullptr));
        label_16->setText(QString());
        label_78->setText(QString());
        showStatsForMen->setText(QCoreApplication::translate("MainWindow", "Homme", nullptr));
        showStatsForWomen->setText(QCoreApplication::translate("MainWindow", "Femme", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Gestion produits", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("MainWindow", "Gestion clients", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QCoreApplication::translate("MainWindow", "Gestion employ\303\251s", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QCoreApplication::translate("MainWindow", "Gestion Fournisseurs", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QCoreApplication::translate("MainWindow", "Gestion commandes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
