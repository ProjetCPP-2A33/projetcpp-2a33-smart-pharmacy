#ifndef COMMANDE_H
#define COMMANDE_H

#include <QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QMap>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QCalendarWidget>
#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>


class Commande {
private:
    int idc;
    QDate datec;
    double montantTotal;
    QString modePaiement;
    QString etat;

public:
    Commande(){}
    Commande(int idc, QDate datec, double montantTotal, QString modePaiement, QString etat);

    // Getters
    int getIdc() const;
    QString getDatec() const;
    double getMontatTotal() const;
    QString getModePaiement() const;
    QString getEtat() const;

    // Setters
    void setIdc(int idc);
    void setDatec(QDate date);
    void setEMontatTotal(double montatntTotal );
    void setmodePaiement(QString modePaiement);
    void setetat(QString etat);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();
    QSqlQueryModel* rechercher(int idc);
    QSqlQueryModel* trierParDateDesc();
    bool idExiste(int idc);
    QMap<QString, int> statistiquesParModePaiement();
    void exporterPDF(const QString &nomFichier, QAbstractItemModel *model);
    void addToHistory(const QString &action, int idc);
    QDate ouvrirCalendrier();





};

#endif // COMMANDE_H
