#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include<QString>
#include<QDate>
#include<QSqlQueryModel>
#include<QSqlQuery>

class fournisseur
{
private:
    QString id;
    QString nom;
    QString telephone;
    QString adresse;
    QDate date_aff;
    int disponibilite;

public:
    fournisseur();
    fournisseur(QString id,QString nom,QString adresse,QString telephone,QDate date_aff,int disponibilite);
    QSqlQueryModel* afficher();


    QString getID() const;
    QString getNom() const;
    QString getTelephone() const;
    QString getAdresse()const;
    QString getDate_Aff() const;
    int getDisponibilite() const;


    void setAdresse(QString a);
    void setDate_Aff(QDate d);
    void setNom(QString n);
    void setDisponibilite(int disponibilite);
    void setID(QString id);
    void setTelephone(QString telephone);

    bool ajouter(QString id, QString nom, QString telephone, QString adresse, QDate date_aff, int disponibilite);
    bool supprimer(QString id);
    bool trier(QString nom);
    bool modifier(QString id, QString nom, QString telephone, QString adresse, QDate date_aff, int disponibilite);



};

#endif // FOURNISSEUR_H
