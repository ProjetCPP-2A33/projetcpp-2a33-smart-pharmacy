#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
#include <QDate>
#include <QSqlQueryModel>

class Produit
{
public:
    Produit();
    Produit(int,QString,float,QDate,QString,QString);
    ~Produit();

    //GETTERS & SETTERS :

    int getID();
    QString getLibelle();
    float getPrix();
    QDate getDateExpiration();
    QString getCategorie();
    QString getDisponiblite();

    void setID(int ID);
    void setLibelle(QString);
    void setPrix(float);
    void setDateExpiration(QDate);
    void setCategorie(QString);
    void setDisponibilite(QString);

    bool ajouter();
    bool update();
    bool supprimer(QString id);
    QSqlQueryModel * afficher();
    bool modifier();

private :
    int ID ;
    QString libelle ;
    float prix ;
    QDate dateExpiration ;
    QString categorie ;
    QString disponibilite ;

};

#endif // PRODUIT_H
