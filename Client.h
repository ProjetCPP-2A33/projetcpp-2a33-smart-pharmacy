#ifndef CLIENT_H
#define CLIENT_H

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>


class Client
{
private:
    int id;
    int gsm;
    int cin;
    QString nom;
    QString prenom;
    QString sexe;
    QString allergies;
    QString adresse;
    QString mail;
public:
    //constructeurs
    Client();
    Client(int id, int gsm, int cin, const QString &nom, const QString &prenom,const QString &sexe, const QString &allergies, const QString &adresse, const QString &mail);

    //Getters
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getSexe(){return sexe;}
    QString getAllergies(){return allergies;}
    QString getAdresse(){return adresse;}
    QString getMail(){return mail;}
    int getId(){return id;}
    int getGsm(){return gsm;}
    int getCin(){return cin;}
    //Setters
    void setNom(QString n){nom=n;}
    void setPrenom(QString p){prenom=p;}
    void setSexe(QString s){sexe=s;}
    void setAllergies(QString al){allergies=al;}
    void setAdresse(QString a){adresse=a;}
    void setMail(QString m){mail=m;}
    void setId(int id){id=id;}
    void setGsm(int g){gsm=g;}
    void setCin(int c){cin=c;}
    //Fonctionnalite de base relatives a l'entite client
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int id);
    bool modifier(int id, int gsm,int cin, QString nom, QString prenom,QString sexe,QString allergies, QString adresse, QString mail);
    QSqlQueryModel * rechercher(int id);

};

#endif // CLIENT_H
