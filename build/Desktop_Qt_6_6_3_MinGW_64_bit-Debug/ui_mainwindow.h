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
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QTabWidget *tabWidget_4;
    QWidget *tab_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *pushButton_10;
    QLineEdit *lineEdit_13;
    QLabel *label_28;
    QPushButton *pb_pdf_2;
    QLabel *label_29;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_30;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_31;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_32;
    QComboBox *comboBox_2;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_33;
    QLineEdit *lineEdit_14;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_34;
    QDateEdit *dateEdit_2;
    QLineEdit *lineEdit_15;
    QTableWidget *tableWidget_2;
    QWidget *tab_11;
    QLabel *label_35;
    QPushButton *pushButton_statistiques_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_graphique_2;
    QPushButton *pb_historique_2;
    QPushButton *arduino_2;
    QLineEdit *commandeIdInput_2;
    QWidget *tab_12;
    QLabel *label_36;
    QPushButton *sendSMS_2;
    QLabel *label_37;
    QPlainTextEdit *contenu_2;
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
        tabWidget_4 = new QTabWidget(tab_3);
        tabWidget_4->setObjectName("tabWidget_4");
        tabWidget_4->setGeometry(QRect(0, -10, 1321, 691));
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        pushButton_3 = new QPushButton(tab_10);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(720, 370, 131, 29));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../../Downloads/461508595_825905609429817_3860263783025879477_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon8);
        pushButton_7 = new QPushButton(tab_10);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(1100, 100, 141, 29));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../../../Downloads/461484528_521659267261567_8640738131585914016_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_7->setIcon(icon9);
        pushButton_8 = new QPushButton(tab_10);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(1010, 370, 121, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../../../Downloads/460177168_1665954550921902_7047727999174566408_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_8->setIcon(icon10);
        label_25 = new QLabel(tab_10);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(1200, 0, 111, 81));
        label_25->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/458735584_918125840206881_8473109506372732198_n-removebg-preview.png")));
        label_25->setScaledContents(true);
        label_26 = new QLabel(tab_10);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(180, 450, 63, 20));
        label_27 = new QLabel(tab_10);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(990, 430, 63, 20));
        pushButton_10 = new QPushButton(tab_10);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(640, 100, 141, 31));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../../../Downloads/460563423_1575797083314263_1051363182548254163_n.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_10->setIcon(icon11);
        lineEdit_13 = new QLineEdit(tab_10);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(480, 100, 151, 31));
        lineEdit_13->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: #44B070;\n"
"                            color: #333;\n"
"                            }"));
        label_28 = new QLabel(tab_10);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(480, 470, 201, 20));
        pb_pdf_2 = new QPushButton(tab_10);
        pb_pdf_2->setObjectName("pb_pdf_2");
        pb_pdf_2->setGeometry(QRect(620, 380, 71, 51));
        pb_pdf_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../../Documents/gestioncommande/461512018_8583292871729025_1881610230410531967_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_pdf_2->setIcon(icon12);
        pb_pdf_2->setIconSize(QSize(50, 50));
        label_29 = new QLabel(tab_10);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(-50, -100, 1911, 811));
        label_29->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: #44B070;\n"
"                            color: #333;\n"
"                            }"));
        label_29->setPixmap(QPixmap(QString::fromUtf8("../../Documents/gestioncommande/460640231_1322566308727208_3722229070046037089_n.png")));
        label_29->setScaledContents(true);
        groupBox_4 = new QGroupBox(tab_10);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(40, 60, 411, 401));
        pushButton_11 = new QPushButton(groupBox_4);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(20, 330, 131, 61));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("../../Documents/gestioncommande/461766791_3474883789478601_5900950519127739335_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon13);
        pushButton_11->setIconSize(QSize(50, 50));
        pushButton_12 = new QPushButton(groupBox_4);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(180, 330, 121, 61));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("../../Documents/gestioncommande/461755239_1311673180207872_9007432977068590092_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon14);
        pushButton_12->setIconSize(QSize(50, 50));
        layoutWidget_2 = new QWidget(groupBox_4);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 50, 233, 30));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget_2);
        label_30->setObjectName("label_30");

        horizontalLayout_6->addWidget(label_30);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_6->addWidget(lineEdit_2);

        layoutWidget_6 = new QWidget(groupBox_4);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(10, 180, 336, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(layoutWidget_6);
        label_31->setObjectName("label_31");

        horizontalLayout_7->addWidget(label_31);

        lineEdit_4 = new QLineEdit(layoutWidget_6);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_7->addWidget(lineEdit_4);

        layoutWidget_7 = new QWidget(groupBox_4);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(0, 230, 380, 30));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(layoutWidget_7);
        label_32->setObjectName("label_32");

        horizontalLayout_8->addWidget(label_32);

        comboBox_2 = new QComboBox(layoutWidget_7);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_8->addWidget(comboBox_2);

        layoutWidget_8 = new QWidget(groupBox_4);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(10, 290, 270, 30));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(layoutWidget_8);
        label_33->setObjectName("label_33");

        horizontalLayout_9->addWidget(label_33);

        lineEdit_14 = new QLineEdit(layoutWidget_8);
        lineEdit_14->setObjectName("lineEdit_14");

        horizontalLayout_9->addWidget(lineEdit_14);

        layoutWidget_9 = new QWidget(groupBox_4);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(30, 110, 167, 28));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(layoutWidget_9);
        label_34->setObjectName("label_34");

        horizontalLayout_10->addWidget(label_34);

        dateEdit_2 = new QDateEdit(layoutWidget_9);
        dateEdit_2->setObjectName("dateEdit_2");

        horizontalLayout_10->addWidget(dateEdit_2);

        lineEdit_15 = new QLineEdit(tab_10);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(870, 370, 131, 31));
        lineEdit_15->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                            border: 2px solid #4CAF50;\n"
"                            border-radius: 10px;\n"
"                            padding: 5px;\n"
"                            background-color: #f0f0f0;\n"
"	                        border-color: #44B070;\n"
"                            color: #333;\n"
"                            }"));
        tableWidget_2 = new QTableWidget(tab_10);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
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
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(580, 150, 641, 192));
        tabWidget_4->addTab(tab_10, QString());
        label_29->raise();
        pushButton_3->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        label_25->raise();
        label_26->raise();
        label_27->raise();
        pushButton_10->raise();
        lineEdit_13->raise();
        label_28->raise();
        pb_pdf_2->raise();
        groupBox_4->raise();
        lineEdit_15->raise();
        tableWidget_2->raise();
        tab_11 = new QWidget();
        tab_11->setObjectName("tab_11");
        label_35 = new QLabel(tab_11);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(0, 0, 1301, 571));
        label_35->setPixmap(QPixmap(QString::fromUtf8("../../Documents/gestioncommande/460640231_1322566308727208_3722229070046037089_n.png")));
        label_35->setScaledContents(true);
        pushButton_statistiques_2 = new QPushButton(tab_11);
        pushButton_statistiques_2->setObjectName("pushButton_statistiques_2");
        pushButton_statistiques_2->setGeometry(QRect(650, 340, 93, 29));
        verticalLayoutWidget_2 = new QWidget(tab_11);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(100, 30, 581, 261));
        verticalLayout_graphique_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_graphique_2->setSpacing(6);
        verticalLayout_graphique_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_graphique_2->setObjectName("verticalLayout_graphique_2");
        verticalLayout_graphique_2->setContentsMargins(0, 0, 0, 0);
        pb_historique_2 = new QPushButton(tab_11);
        pb_historique_2->setObjectName("pb_historique_2");
        pb_historique_2->setGeometry(QRect(930, 340, 141, 29));
        arduino_2 = new QPushButton(tab_11);
        arduino_2->setObjectName("arduino_2");
        arduino_2->setGeometry(QRect(790, 340, 93, 29));
        commandeIdInput_2 = new QLineEdit(tab_11);
        commandeIdInput_2->setObjectName("commandeIdInput_2");
        commandeIdInput_2->setGeometry(QRect(780, 390, 113, 26));
        tabWidget_4->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName("tab_12");
        label_36 = new QLabel(tab_12);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(0, 0, 1301, 571));
        label_36->setPixmap(QPixmap(QString::fromUtf8("../../Documents/gestioncommande/460640231_1322566308727208_3722229070046037089_n.png")));
        label_36->setScaledContents(true);
        sendSMS_2 = new QPushButton(tab_12);
        sendSMS_2->setObjectName("sendSMS_2");
        sendSMS_2->setGeometry(QRect(350, 140, 251, 61));
        label_37 = new QLabel(tab_12);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(170, 240, 281, 20));
        contenu_2 = new QPlainTextEdit(tab_12);
        contenu_2->setObjectName("contenu_2");
        contenu_2->setGeometry(QRect(30, 130, 291, 75));
        tabWidget_4->addTab(tab_12, QString());
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
        menuBar->setGeometry(QRect(0, 0, 1375, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(4);
        tabWidget_4->setCurrentIndex(1);


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
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("MainWindow", "Entrer ID", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Exporter format pdf", nullptr));
        pb_pdf_2->setText(QString());
        label_29->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Ajouter une commande", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "MontantTotal:", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "ModePaiement:", nullptr));
        comboBox_2->setItemText(0, QString());
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Virement banquaire", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Carte credit/Debit", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Cheque", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "Especes", nullptr));

        label_33->setText(QCoreApplication::translate("MainWindow", "Etat", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("MainWindow", "Entrer ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "idc", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "datec", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Nouvelle colonne", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "montantTotal", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "etat", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QCoreApplication::translate("MainWindow", "Acceuil", nullptr));
        label_35->setText(QString());
        pushButton_statistiques_2->setText(QCoreApplication::translate("MainWindow", "statis", nullptr));
        pb_historique_2->setText(QCoreApplication::translate("MainWindow", "historique", nullptr));
        arduino_2->setText(QCoreApplication::translate("MainWindow", "arduino", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_11), QCoreApplication::translate("MainWindow", "Statistique", nullptr));
        label_36->setText(QString());
        sendSMS_2->setText(QCoreApplication::translate("MainWindow", "SMS", nullptr));
        label_37->setText(QString());
        contenu_2->setPlainText(QCoreApplication::translate("MainWindow", "ecrire un message", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_12), QCoreApplication::translate("MainWindow", "Notification", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Gestion Commandes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Gestion Fournisseurs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
