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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QGroupBox *groupBox_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_mail;
    QLineEdit *lineEdit_adresse;
    QLineEdit *lineEdit_allergies;
    QLineEdit *lineEdit_sexe;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_cin;
    QLineEdit *lineEdit_gsm;
    QLabel *label_21;
    QLineEdit *lineEdit_nbrachat;
    QPushButton *pushButton_rechercher;
    QPushButton *pushButton_trier;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_supprimer;
    QLabel *label_9;
    QPushButton *pushButton_pdf;
    QPushButton *pushButton_ajouter;
    QLineEdit *lineEdit_rechercher;
    QTableView *tableView_2;
    QLabel *label_4;
    QWidget *tab_6;
    QPushButton *pushButton_stat;
    QLabel *label_5;
    QLabel *label_22;
    QWidget *tab_7;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_19;
    QLineEdit *lineEdit_idc;
    QLineEdit *lineEdit_diag;
    QLineEdit *lineEdit_trait;
    QDateEdit *dateEdit;
    QTableView *tableView_hm;
    QLabel *label_20;
    QLineEdit *lineEdit_recherche;
    QPushButton *pushButton_recherche;
    QPushButton *pushButton_AddHistorique;
    QLabel *label_6;
    QWidget *tab_8;
    QPushButton *pushButton_fidele;
    QTableView *tableView_fidele;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *tab_9;
    QLineEdit *lineEdit;
    QLabel *label_23;
    QLabel *label_24;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1375, 787);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1371, 711));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 1371, 681));
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 20, 351, 581));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift")});
        font.setPointSize(14);
        font.setKerning(true);
        groupBox_2->setFont(font);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 80, 63, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift")});
        font1.setPointSize(12);
        font1.setKerning(true);
        label_10->setFont(font1);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 130, 81, 20));
        label_11->setFont(font1);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 180, 63, 20));
        label_12->setFont(font1);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 230, 63, 20));
        label_13->setFont(font1);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 280, 63, 20));
        label_14->setFont(font1);
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 330, 63, 20));
        label_15->setFont(font1);
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 380, 91, 20));
        label_16->setFont(font1);
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 430, 91, 21));
        label_17->setFont(font1);
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 480, 63, 20));
        label_18->setFont(font1);
        lineEdit_nom = new QLineEdit(groupBox_2);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(100, 70, 241, 41));
        lineEdit_nom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_prenom = new QLineEdit(groupBox_2);
        lineEdit_prenom->setObjectName("lineEdit_prenom");
        lineEdit_prenom->setGeometry(QRect(100, 120, 241, 41));
        lineEdit_prenom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_mail = new QLineEdit(groupBox_2);
        lineEdit_mail->setObjectName("lineEdit_mail");
        lineEdit_mail->setGeometry(QRect(100, 320, 241, 41));
        lineEdit_mail->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_adresse = new QLineEdit(groupBox_2);
        lineEdit_adresse->setObjectName("lineEdit_adresse");
        lineEdit_adresse->setGeometry(QRect(100, 370, 241, 41));
        lineEdit_adresse->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_allergies = new QLineEdit(groupBox_2);
        lineEdit_allergies->setObjectName("lineEdit_allergies");
        lineEdit_allergies->setGeometry(QRect(100, 420, 241, 41));
        lineEdit_allergies->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_sexe = new QLineEdit(groupBox_2);
        lineEdit_sexe->setObjectName("lineEdit_sexe");
        lineEdit_sexe->setGeometry(QRect(100, 470, 241, 41));
        lineEdit_sexe->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_id = new QLineEdit(groupBox_2);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(100, 170, 241, 41));
        lineEdit_id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_cin = new QLineEdit(groupBox_2);
        lineEdit_cin->setObjectName("lineEdit_cin");
        lineEdit_cin->setGeometry(QRect(100, 220, 241, 41));
        lineEdit_cin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_gsm = new QLineEdit(groupBox_2);
        lineEdit_gsm->setObjectName("lineEdit_gsm");
        lineEdit_gsm->setGeometry(QRect(100, 270, 241, 41));
        lineEdit_gsm->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 530, 131, 20));
        label_21->setFont(font1);
        lineEdit_nbrachat = new QLineEdit(groupBox_2);
        lineEdit_nbrachat->setObjectName("lineEdit_nbrachat");
        lineEdit_nbrachat->setGeometry(QRect(150, 520, 191, 41));
        lineEdit_nbrachat->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        pushButton_rechercher = new QPushButton(tab_5);
        pushButton_rechercher->setObjectName("pushButton_rechercher");
        pushButton_rechercher->setGeometry(QRect(870, 30, 161, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift")});
        font2.setBold(true);
        pushButton_rechercher->setFont(font2);
        pushButton_rechercher->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: rgb(255, 255, 255);\n"
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
        icon.addFile(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/rechercher.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_rechercher->setIcon(icon);
        pushButton_rechercher->setIconSize(QSize(40, 40));
        pushButton_trier = new QPushButton(tab_5);
        pushButton_trier->setObjectName("pushButton_trier");
        pushButton_trier->setGeometry(QRect(1150, 460, 101, 41));
        pushButton_trier->setFont(font2);
        pushButton_trier->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"   \n"
"	color: rgb(255, 255, 255);\n"
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
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/trier .png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_trier->setIcon(icon1);
        pushButton_trier->setIconSize(QSize(30, 30));
        pushButton_modifier = new QPushButton(tab_5);
        pushButton_modifier->setObjectName("pushButton_modifier");
        pushButton_modifier->setGeometry(QRect(1020, 460, 121, 41));
        pushButton_modifier->setFont(font2);
        pushButton_modifier->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"   \n"
"	color: rgb(255, 255, 255);\n"
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
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/modifier.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_modifier->setIcon(icon2);
        pushButton_modifier->setIconSize(QSize(30, 30));
        pushButton_supprimer = new QPushButton(tab_5);
        pushButton_supprimer->setObjectName("pushButton_supprimer");
        pushButton_supprimer->setGeometry(QRect(880, 460, 131, 41));
        pushButton_supprimer->setFont(font2);
        pushButton_supprimer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"   \n"
"	color: rgb(255, 255, 255);\n"
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
"}\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/supprimer.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_supprimer->setIcon(icon3);
        pushButton_supprimer->setIconSize(QSize(30, 30));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(920, 540, 201, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift")});
        font3.setPointSize(12);
        label_9->setFont(font3);
        pushButton_pdf = new QPushButton(tab_5);
        pushButton_pdf->setObjectName("pushButton_pdf");
        pushButton_pdf->setGeometry(QRect(1160, 520, 81, 71));
        pushButton_pdf->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"   \n"
"	color: rgb(255, 255, 255);\n"
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
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/pdf.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_pdf->setIcon(icon4);
        pushButton_pdf->setIconSize(QSize(70, 70));
        pushButton_ajouter = new QPushButton(tab_5);
        pushButton_ajouter->setObjectName("pushButton_ajouter");
        pushButton_ajouter->setGeometry(QRect(400, 500, 141, 51));
        pushButton_ajouter->setFont(font2);
        pushButton_ajouter->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_ajouter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"   \n"
"	color: rgb(255, 255, 255);\n"
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
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/ajouter.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_ajouter->setIcon(icon5);
        pushButton_ajouter->setIconSize(QSize(40, 40));
        lineEdit_rechercher = new QLineEdit(tab_5);
        lineEdit_rechercher->setObjectName("lineEdit_rechercher");
        lineEdit_rechercher->setGeometry(QRect(490, 30, 361, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(12);
        font4.setBold(false);
        lineEdit_rechercher->setFont(font4);
        lineEdit_rechercher->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        tableView_2 = new QTableView(tab_5);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(370, 80, 981, 361));
        label_4 = new QLabel(tab_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 1371, 641));
        label_4->setPixmap(QPixmap(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/bg.png")));
        label_4->setScaledContents(true);
        tabWidget_2->addTab(tab_5, QString());
        label_4->raise();
        groupBox_2->raise();
        pushButton_rechercher->raise();
        pushButton_trier->raise();
        pushButton_modifier->raise();
        pushButton_supprimer->raise();
        label_9->raise();
        pushButton_pdf->raise();
        pushButton_ajouter->raise();
        lineEdit_rechercher->raise();
        tableView_2->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        pushButton_stat = new QPushButton(tab_6);
        pushButton_stat->setObjectName("pushButton_stat");
        pushButton_stat->setGeometry(QRect(30, 70, 141, 51));
        pushButton_stat->setFont(font2);
        pushButton_stat->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: rgb(255, 255, 255);\n"
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
        icon6.addFile(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/stat.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_stat->setIcon(icon6);
        pushButton_stat->setIconSize(QSize(30, 30));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 1371, 641));
        label_5->setPixmap(QPixmap(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/bg.png")));
        label_5->setScaledContents(true);
        label_22 = new QLabel(tab_6);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(390, 10, 581, 41));
        label_22->setFont(font3);
        tabWidget_2->addTab(tab_6, QString());
        label_5->raise();
        pushButton_stat->raise();
        label_22->raise();
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        groupBox_3 = new QGroupBox(tab_7);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 20, 521, 481));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Bahnschrift")});
        font5.setPointSize(14);
        font5.setBold(false);
        groupBox_3->setFont(font5);
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 151, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Bahnschrift")});
        font6.setPointSize(12);
        font6.setBold(false);
        label->setFont(font6);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 150, 141, 41));
        label_2->setFont(font6);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 240, 71, 51));
        label_3->setFont(font6);
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(20, 350, 101, 31));
        label_19->setFont(font6);
        lineEdit_idc = new QLineEdit(groupBox_3);
        lineEdit_idc->setObjectName("lineEdit_idc");
        lineEdit_idc->setGeometry(QRect(20, 390, 161, 51));
        lineEdit_idc->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_diag = new QLineEdit(groupBox_3);
        lineEdit_diag->setObjectName("lineEdit_diag");
        lineEdit_diag->setGeometry(QRect(20, 90, 451, 51));
        lineEdit_diag->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        lineEdit_trait = new QLineEdit(groupBox_3);
        lineEdit_trait->setObjectName("lineEdit_trait");
        lineEdit_trait->setGeometry(QRect(20, 190, 451, 51));
        lineEdit_trait->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        dateEdit = new QDateEdit(groupBox_3);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(20, 290, 161, 41));
        tableView_hm = new QTableView(tab_7);
        tableView_hm->setObjectName("tableView_hm");
        tableView_hm->setGeometry(QRect(570, 80, 491, 531));
        label_20 = new QLabel(tab_7);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(550, 30, 101, 41));
        label_20->setFont(font3);
        lineEdit_recherche = new QLineEdit(tab_7);
        lineEdit_recherche->setObjectName("lineEdit_recherche");
        lineEdit_recherche->setGeometry(QRect(650, 20, 211, 51));
        lineEdit_recherche->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: rgb(68, 176, 112);\n"
"                            color: #333;\n"
"                            }"));
        pushButton_recherche = new QPushButton(tab_7);
        pushButton_recherche->setObjectName("pushButton_recherche");
        pushButton_recherche->setGeometry(QRect(870, 30, 161, 41));
        pushButton_recherche->setFont(font2);
        pushButton_recherche->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: rgb(255, 255, 255);\n"
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
        pushButton_recherche->setIcon(icon);
        pushButton_recherche->setIconSize(QSize(30, 30));
        pushButton_AddHistorique = new QPushButton(tab_7);
        pushButton_AddHistorique->setObjectName("pushButton_AddHistorique");
        pushButton_AddHistorique->setGeometry(QRect(180, 530, 121, 51));
        pushButton_AddHistorique->setFont(font2);
        pushButton_AddHistorique->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: rgb(255, 255, 255);\n"
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
        pushButton_AddHistorique->setIcon(icon5);
        pushButton_AddHistorique->setIconSize(QSize(30, 30));
        label_6 = new QLabel(tab_7);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(2, -1, 1371, 641));
        label_6->setPixmap(QPixmap(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/bg.png")));
        label_6->setScaledContents(true);
        tabWidget_2->addTab(tab_7, QString());
        label_6->raise();
        groupBox_3->raise();
        tableView_hm->raise();
        label_20->raise();
        lineEdit_recherche->raise();
        pushButton_recherche->raise();
        pushButton_AddHistorique->raise();
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        pushButton_fidele = new QPushButton(tab_8);
        pushButton_fidele->setObjectName("pushButton_fidele");
        pushButton_fidele->setGeometry(QRect(70, 260, 151, 51));
        pushButton_fidele->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"   \n"
"	color: rgb(255, 255, 255);\n"
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
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../3f558a7b0b24f49d5f45961e5419ecd5-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_fidele->setIcon(icon7);
        pushButton_fidele->setIconSize(QSize(30, 30));
        tableView_fidele = new QTableView(tab_8);
        tableView_fidele->setObjectName("tableView_fidele");
        tableView_fidele->setGeometry(QRect(260, 60, 421, 551));
        label_7 = new QLabel(tab_8);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 1371, 641));
        label_7->setPixmap(QPixmap(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/bg.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(tab_8);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(210, 10, 521, 41));
        label_8->setFont(font3);
        tabWidget_2->addTab(tab_8, QString());
        label_7->raise();
        pushButton_fidele->raise();
        tableView_fidele->raise();
        label_8->raise();
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        lineEdit = new QLineEdit(tab_9);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 70, 271, 61));
        label_23 = new QLabel(tab_9);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(50, 20, 251, 41));
        label_23->setFont(font3);
        label_24 = new QLabel(tab_9);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(0, 0, 1371, 641));
        label_24->setPixmap(QPixmap(QString::fromUtf8("D:/Atelier_Connexion/Atelier_Connexion/icones et bg/bg.png")));
        label_24->setScaledContents(true);
        tabWidget_2->addTab(tab_9, QString());
        label_24->raise();
        lineEdit->raise();
        label_23->raise();
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(-5, -9, 1381, 741));
        MainWindow->setCentralWidget(centralWidget);
        tableView->raise();
        tabWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1375, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "                  Ajout Client", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Nom :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom :", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "ID :", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "CIN :", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "GSM :", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Mail :", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Adresse:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Allergies:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Sexe :", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Nbr d'achats :", nullptr));
        pushButton_rechercher->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        pushButton_trier->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        pushButton_modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Exporter format PDF : ", nullptr));
        pushButton_pdf->setText(QString());
        pushButton_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        lineEdit_rechercher->setText(QCoreApplication::translate("MainWindow", "Entrer ID", nullptr));
        label_4->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Accueuil", nullptr));
        pushButton_stat->setText(QCoreApplication::translate("MainWindow", "Explorer", nullptr));
        label_5->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "Les statistiques montrent la r\303\251partition des clients selon le sexe", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "                             Historique", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Diagnostique :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Traitements :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Date :", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Entrer ID :", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Entrer ID :", nullptr));
        pushButton_recherche->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        pushButton_AddHistorique->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_6->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Historique M\303\251dical", nullptr));
        pushButton_fidele->setText(QCoreApplication::translate("MainWindow", "Fid\303\251lit\303\251 des 10", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Ici vous pourrez consulter nos 10 premiers clients fid\303\250les", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Fid\303\251lit\303\251", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Voici l'id de la commande :", nullptr));
        label_24->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("MainWindow", "Arduino", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Gestion Clients", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Gestion Produits", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Gestion Commandes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Gestion Fournisseurs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
