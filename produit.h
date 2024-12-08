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
    Produit(int,QString,float,QDate,QString,QString,int);
    ~Produit();

    //GETTERS & SETTERS :

    int getID();
    QString getLibelle();
    float getPrix();
    QDate getDateExpiration();
    QString getCategorie();
    QString getDisponiblite();
    int getQuantite();

    void setID(int ID);
    void setLibelle(QString);
    void setPrix(float);
    void setDateExpiration(QDate);
    void setCategorie(QString);
    void setDisponibilite(QString);
    void setQuantite(int);

    bool ajouter();
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

    /*Arduino*/
    void incr(int);
    bool limit(int);
    int getQuantiteByID(int id);

private :
    int ID ;
    QString libelle ;
    float prix ;
    QDate dateExpiration ;
    QString categorie ;
    QString disponibilite ;
    int quantite ;



};

#endif // PRODUIT_H
