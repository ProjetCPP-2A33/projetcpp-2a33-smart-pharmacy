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
    QString nomf;
    QString telephone;
    QString adressef;
    QDate date_aff;
    int disponibilite;
    QString image;

public:
    fournisseur();
    fournisseur(QString id,QString nomf,QString adressef,QString telephone,QDate date_aff,int disponibilite,QString image);
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficherTri();
    QSqlQueryModel* rechercher(QString id);



    QString getID() const;
    QString getNomf() const;
    QString getTelephone() const;
    QString getAdressef()const;
    QString getDate_Aff() const;
    int getDisponibilite() const;


    void setAdressef(QString a);
    void setDate_Aff(QDate d);
    void setNomf(QString n);
    void setDisponibilite(int disponibilite);
    void setID(QString id);
    void setTelephone(QString telephone);

    bool ajouter(QString id, QString nomf, QString telephone, QString adressef, QDate date_aff, int disponibilite,QString image);
    bool supprimer(QString id);
    bool trier(QString nomf);
    bool modifier(QString id, QString nomf, QString telephone, QString adressef, QDate date_aff, int disponibilite,QString image);
    bool rechercher();
    int countdisponibilite(const QString& dispoo);



};

#endif // FOURNISSEUR_H
