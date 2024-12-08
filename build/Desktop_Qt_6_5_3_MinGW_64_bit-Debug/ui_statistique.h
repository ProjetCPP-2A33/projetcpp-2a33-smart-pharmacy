/********************************************************************************
** Form generated from reading UI file 'statistique.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIQUE_H
#define UI_STATISTIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statistique
{
public:
    QLabel *label_chat;
    QPushButton *pushButton_11;

    void setupUi(QWidget *statistique)
    {
        if (statistique->objectName().isEmpty())
            statistique->setObjectName("statistique");
        statistique->resize(980, 681);
        label_chat = new QLabel(statistique);
        label_chat->setObjectName("label_chat");
        label_chat->setGeometry(QRect(-1, -17, 850, 600));
        pushButton_11 = new QPushButton(statistique);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(730, 620, 131, 31));
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

        retranslateUi(statistique);

        QMetaObject::connectSlotsByName(statistique);
    } // setupUi

    void retranslateUi(QWidget *statistique)
    {
        statistique->setWindowTitle(QCoreApplication::translate("statistique", "Form", nullptr));
        label_chat->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("statistique", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statistique: public Ui_statistique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIQUE_H
