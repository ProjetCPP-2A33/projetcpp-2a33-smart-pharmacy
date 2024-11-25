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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_11;
    QLabel *label_16;
    QLabel *label_18;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_10;
    QLabel *label_9;
    QPushButton *pb_pdf;
    QLabel *label_3;
    QGroupBox *groupBox;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QComboBox *comboBox;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLineEdit *lineEdit_11;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_12;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QLabel *label;
    QPushButton *pushButton_statistiques;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_graphique;
    QPushButton *pb_historique;
    QPushButton *arduino;
    QLineEdit *clientIdInput;
    QWidget *tab_3;
    QLabel *label_2;
    QPushButton *sendSMS;
    QLabel *label_6;
    QPlainTextEdit *contenu;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1328, 687);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(-10, 0, 1331, 641));
        tabWidget_2->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Bahnschrift Light\";"));
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1321, 601));
        tab = new QWidget();
        tab->setObjectName("tab");
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(720, 370, 131, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
" \n"
"	background-color: rgb(68, 176, 112);\n"
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
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1100, 100, 141, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
" \n"
"	background-color: rgb(68, 176, 112);\n"
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
        icon1.addFile(QString::fromUtf8("../../../Downloads/461484528_521659267261567_8640738131585914016_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_2->setIcon(icon1);
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1010, 370, 121, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
" \n"
"	background-color: rgb(68, 176, 112);\n"
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
        icon2.addFile(QString::fromUtf8("../../../Downloads/460177168_1665954550921902_7047727999174566408_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_4->setIcon(icon2);
        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1200, 0, 111, 81));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/458735584_918125840206881_8473109506372732198_n-removebg-preview.png")));
        label_11->setScaledContents(true);
        label_16 = new QLabel(tab);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(180, 450, 63, 20));
        label_18 = new QLabel(tab);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(990, 430, 63, 20));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(640, 100, 141, 31));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
" \n"
"	background-color: rgb(68, 176, 112);\n"
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
        icon3.addFile(QString::fromUtf8("../../../Downloads/460563423_1575797083314263_1051363182548254163_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_9->setIcon(icon3);
        lineEdit_10 = new QLineEdit(tab);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(480, 100, 151, 31));
        lineEdit_10->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: #44B070;\n"
"                            color: #333;\n"
"                            }"));
        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(480, 470, 201, 20));
        pb_pdf = new QPushButton(tab);
        pb_pdf->setObjectName("pb_pdf");
        pb_pdf->setGeometry(QRect(670, 450, 71, 51));
        pb_pdf->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
" \n"
"	background-color: rgb(68, 176, 112);\n"
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("461512018_8583292871729025_1881610230410531967_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_pdf->setIcon(icon4);
        pb_pdf->setIconSize(QSize(50, 50));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-30, -10, 1901, 811));
        label_3->setPixmap(QPixmap(QString::fromUtf8("460640231_1322566308727208_3722229070046037089_n.png")));
        label_3->setScaledContents(true);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 60, 411, 401));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 330, 131, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
" \n"
"	background-color: rgb(68, 176, 112);\n"
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("461766791_3474883789478601_5900950519127739335_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(50, 50));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(180, 330, 121, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: black;\n"
" \n"
"	background-color: rgb(68, 176, 112);\n"
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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("461755239_1311673180207872_9007432977068590092_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon6);
        pushButton_5->setIconSize(QSize(50, 50));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 50, 233, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 180, 336, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        lineEdit_3 = new QLineEdit(layoutWidget_3);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);

        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(0, 230, 380, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        comboBox = new QComboBox(layoutWidget_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_4->addWidget(comboBox);

        layoutWidget_5 = new QWidget(groupBox);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(10, 290, 270, 30));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName("label_10");

        horizontalLayout_5->addWidget(label_10);

        lineEdit_11 = new QLineEdit(layoutWidget_5);
        lineEdit_11->setObjectName("lineEdit_11");

        horizontalLayout_5->addWidget(lineEdit_11);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 110, 167, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget1);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_2->addWidget(dateEdit);

        lineEdit_12 = new QLineEdit(tab);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(870, 370, 131, 31));
        lineEdit_12->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: #44B070;\n"
"                            color: #333;\n"
"                            }"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(580, 150, 641, 192));
        tabWidget->addTab(tab, QString());
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        label_11->raise();
        label_16->raise();
        label_18->raise();
        pushButton_9->raise();
        lineEdit_10->raise();
        label_9->raise();
        pb_pdf->raise();
        groupBox->raise();
        lineEdit_12->raise();
        tableWidget->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label = new QLabel(tab_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -10, 1301, 571));
        label->setPixmap(QPixmap(QString::fromUtf8("460640231_1322566308727208_3722229070046037089_n.png")));
        label->setScaledContents(true);
        pushButton_statistiques = new QPushButton(tab_2);
        pushButton_statistiques->setObjectName("pushButton_statistiques");
        pushButton_statistiques->setGeometry(QRect(340, 330, 93, 29));
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(100, 30, 581, 261));
        verticalLayout_graphique = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_graphique->setObjectName("verticalLayout_graphique");
        verticalLayout_graphique->setContentsMargins(0, 0, 0, 0);
        pb_historique = new QPushButton(tab_2);
        pb_historique->setObjectName("pb_historique");
        pb_historique->setGeometry(QRect(930, 340, 141, 29));
        arduino = new QPushButton(tab_2);
        arduino->setObjectName("arduino");
        arduino->setGeometry(QRect(640, 350, 93, 29));
        clientIdInput = new QLineEdit(tab_2);
        clientIdInput->setObjectName("clientIdInput");
        clientIdInput->setGeometry(QRect(660, 440, 113, 26));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_2 = new QLabel(tab_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 1301, 571));
        label_2->setPixmap(QPixmap(QString::fromUtf8("460640231_1322566308727208_3722229070046037089_n.png")));
        label_2->setScaledContents(true);
        sendSMS = new QPushButton(tab_3);
        sendSMS->setObjectName("sendSMS");
        sendSMS->setGeometry(QRect(350, 140, 251, 61));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 240, 281, 20));
        contenu = new QPlainTextEdit(tab_3);
        contenu->setObjectName("contenu");
        contenu->setGeometry(QRect(30, 130, 291, 75));
        tabWidget->addTab(tab_3, QString());
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        tabWidget_2->addTab(tab_7, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1328, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_11->setText(QString());
        label_16->setText(QString());
        label_18->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("MainWindow", "Entrer ID", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Exporter format pdf", nullptr));
        pb_pdf->setText(QString());
        label_3->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Ajouter une commande", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "MontantTotal:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ModePaiement:", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Virement banquaire", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Carte credit/Debit", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Cheque", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Especes", nullptr));

        label_10->setText(QCoreApplication::translate("MainWindow", "Etat", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        lineEdit_12->setText(QCoreApplication::translate("MainWindow", "Entrer ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "idc", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "datec", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Nouvelle colonne", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "montantTotal", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "etat", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Acceuil", nullptr));
        label->setText(QString());
        pushButton_statistiques->setText(QCoreApplication::translate("MainWindow", "statis", nullptr));
        pb_historique->setText(QCoreApplication::translate("MainWindow", "historique", nullptr));
        arduino->setText(QCoreApplication::translate("MainWindow", "arduino", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Statistique", nullptr));
        label_2->setText(QString());
        sendSMS->setText(QCoreApplication::translate("MainWindow", "SMS", nullptr));
        label_6->setText(QString());
        contenu->setPlainText(QCoreApplication::translate("MainWindow", "ecrire un message", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Notification", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Gestion des commandes", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Gestion des produits", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Gestion des fournisseurs", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Gestion des clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
