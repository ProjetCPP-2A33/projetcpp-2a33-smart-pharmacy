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

    /*Recherche*/
    QSqlQueryModel *afficher_libelle(QString ch);
    QSqlQueryModel *afficher_disponibilite(QString ch);

    /*Tri*/
    QSqlQueryModel *afficher_choix(QString choix);

    /*Statistique*/
    int statistique1();
    int statistique2();

    /*PDF*/
    Produit* readproduit (QString val);

private :
    int ID ;
    QString libelle ;
    float prix ;
    QDate dateExpiration ;
    QString categorie ;
    QString disponibilite ;


};

#endif // PRODUIT_H
