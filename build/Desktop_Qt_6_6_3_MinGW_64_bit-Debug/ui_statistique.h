/********************************************************************************
** Form generated from reading UI file 'statistique.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIQUE_H
#define UI_STATISTIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_statistique
{
public:
    QPushButton *pushButton_11;
    QLabel *label_chat;

    void setupUi(QDialog *statistique)
    {
        if (statistique->objectName().isEmpty())
            statistique->setObjectName("statistique");
        statistique->resize(900, 682);
        pushButton_11 = new QPushButton(statistique);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(750, 637, 131, 31));
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
        label_chat = new QLabel(statistique);
        label_chat->setObjectName("label_chat");
        label_chat->setGeometry(QRect(19, 0, 850, 600));

        retranslateUi(statistique);

        QMetaObject::connectSlotsByName(statistique);
    } // setupUi

    void retranslateUi(QDialog *statistique)
    {
        statistique->setWindowTitle(QCoreApplication::translate("statistique", "Dialog", nullptr));
        pushButton_11->setText(QCoreApplication::translate("statistique", "Fermer", nullptr));
        label_chat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statistique: public Ui_statistique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIQUE_H
