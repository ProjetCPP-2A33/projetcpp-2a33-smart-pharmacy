#include "Client.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVariant>
#include <QSqlError>
#include <QDebug>
#include <QTextStream>
#include <QFile>
#include <QSqlRecord>
#include <QDateTime>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QMessageBox>


Client::Client()
{
    id = 0;
    gsm = 0;
    cin = 0;
    nbrachat = 0;
    nom = "";
    prenom = "";
    sexe = "";
    allergies = "";
    adresse = "";
    mail = "";
}

Client::Client(int id, int gsm, int cin,int nbrachat, const QString &nom, const QString &prenom,const QString &sexe, const QString &allergies, const QString &adresse, const QString &mail)
{
    this->id=id;
    this->gsm=gsm;
    this->cin=cin;
    this->nbrachat=nbrachat;
    this->nom=nom;
    this->prenom=prenom;
    this->mail=mail;
    this->sexe=sexe;
    this->adresse=adresse;
    this->allergies=allergies;
}

//Ajouter client
bool Client::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO clients (id,gsm,cin,nbrachat,nom,prenom,sexe,mail,allergies,adresse)" "values(:id,:gsm,:cin,:nbrachat,:nom,:prenom,:sexe,:mail,:allergies,:adresse)");
    //Vous fournissez une valeur d'entrée à la requête SQL pour qu'elle soit exécutée correctement.
    query.bindValue(":id",id);
    query.bindValue(":gsm",gsm);
    query.bindValue(":cin",cin);
    query.bindValue(":nbrachat",nbrachat);
    query.bindValue(":nom",nom);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":sexe",sexe);
    query.bindValue(":mail",mail);
    query.bindValue(":allergies",allergies);
    query.bindValue(":adresse",adresse);

    // Contrôle pour l'adresse e-mail : utiliser une expression régulière simple
    QRegularExpression mailRegex("^[\\w.-]+@[\\w.-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = mailRegex.match(mail);
    if (!match.hasMatch()) {
        QMessageBox::warning(nullptr, "Erreur", "L'adresse e-mail est invalide.");
        return false;
    }

    // Contrôle pour le sexe : accepter uniquement "Homme" ou "Femme"
    if (sexe != "Homme" && sexe != "Femme")
    {
        QMessageBox::warning(nullptr, "Erreur", "Le champ 'sexe' doit être soit 'Homme' soit 'Femme'.");
        return false;
    }

    return query.exec();//exec() envoie la requete pour l'executer
}

//Afficher client
QSqlQueryModel* Client::afficher()
    {
        QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("SELECT id,nom,prenom,cin,gsm,mail,allergies,adresse,sexe,nbrachat from clients ");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("Cin"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("Gsm"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("Mail"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("Adresse"));
        model->setHeaderData(7,Qt::Horizontal,QObject::tr("Allergies"));
        model->setHeaderData(8,Qt::Horizontal,QObject::tr("Sexe"));
        model->setHeaderData(9,Qt::Horizontal,QObject::tr("Nbr_achat"));

        return model;
    }

// Méthode pour vérifier si un client avec un ID donné existe
bool Client::existe(int id) {
    QSqlQuery query;
        query.prepare("SELECT COUNT(*) FROM clients WHERE id = :id");
        query.bindValue(":id", id);

        if (query.exec()) {
            if (query.next()) {
                return query.value(0).toInt() > 0;  // Retourne vrai si le client existe
            }
        } else {
            qDebug() << "Erreur lors de la vérification d'existence: " << query.lastError().text();
        }
        return false;
    }


//Supprimer client
bool Client::supprimer(int id)
{
    // Vérification d'existence du client avant suppression
    if (!existe(id))
    {
        qDebug() << "Client avec l'ID" << id << "n'existe pas dans la base de données.";
        return false;
    }
    QSqlQuery query;
    query.prepare("DELETE FROM clients WHERE id = :id");
    query.bindValue(":id", id);

    // Vérifier si la suppression a réussi
    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Erreur suppression: " << query.lastError().text();  // Pour voir l'erreur si elle survient
        return false;
    }
}

//Modifier client
bool Client::modifier(int id, int gsm, int cin,int nbrachat, const QString& nom,const QString& prenom, const QString& sexe, const QString& allergies,const QString& adresse, const QString& mail) {
    QSqlQuery query;
    query.prepare("UPDATE clients SET gsm = :gsm, cin = :cin, nbrachat = :nbrachat, nom = :nom, prenom = :prenom,sexe = :sexe, allergies = :allergies, adresse = :adresse, mail = :mail WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":gsm", gsm);
    query.bindValue(":cin", cin);
    query.bindValue(":nbrachat", nbrachat);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":sexe", sexe);
    query.bindValue(":allergies", allergies);
    query.bindValue(":adresse", adresse);
    query.bindValue(":mail", mail);

    return query.exec();  // Retourne true si la mise à jour est réussie, sinon false
}


//tri par nom
QSqlQueryModel* Client::trierParNom()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    // Requête SQL pour trier les clients par nom en ordre alphabétique
    query.prepare("SELECT id, nom, prenom,cin, gsm,nbrachat, mail,adresse,allergies,sexe FROM clients ORDER BY nom ASC");

    if (query.exec()) {
        model->setQuery(std::move(query));
    } else {
        qDebug() << "Erreur lors du tri des clients par nom:" << query.lastError().text();
    }

    return model;
}

//rechercher
QSqlQueryModel* Client::rechercherParID(int id)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    // Requête SQL pour rechercher un client par ID
    query.prepare("SELECT id, nom, prenom,cin, gsm,nbrachat, mail,adresse,allergies,sexe FROM clients WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec())
    {
        model->setQuery(std::move(query));

        // Vérifier si le modèle contient des données
        if (model->rowCount() == 0) {
            qDebug() << "Aucun client trouvé avec l'ID:" << id;
        }
    }
    else
    {
        qDebug() << "Erreur lors de la recherche du client par ID:" << query.lastError().text();
    }

    return model;
}

//ajout historique
bool Client::ajouterHistorique(int id, const QString& diagnostique, const QString& traitement, const QDate& datehm)
{
    QSqlQuery query;
    query.prepare("INSERT INTO HISTORIQUEMEDICAL (idcl, diagnostique, traitement, datehm) VALUES (:id, :diagnostic, :traitement, :datehm)");
    query.bindValue(":id", id);
    query.bindValue(":diagnostic", diagnostique);
    query.bindValue(":traitement", traitement);
    query.bindValue(":datehm", datehm);

    if (query.exec())
    {
        qDebug() << "Historique ajouté avec succès.";
        return true;
    }
    else
    {
        qDebug() << "Erreur lors de l'ajout de l'historique :" << query.lastError().text();
        return false;
    }
}

QSqlQueryModel* Client::afficherHistorique()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT idcl, diagnostique, traitement, datehm FROM HISTORIQUEMEDICAL");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Diagnostique"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Traitement"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));

    return model;
}

QSqlQueryModel* Client::getTopFideleClients()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    // Requête SQL pour récupérer les 50 clients avec le plus grand nombre d'achats
    query.prepare("SELECT ID, NOM, PRENOM, NBRACHAT FROM CLIENTS ORDER BY NBRACHAT DESC FETCH FIRST 10 ROWS ONLY");

    if (query.exec()) {
        model->setQuery(std::move(query));
    } else {
        qDebug() << "Erreur lors de la récupération des clients fidèles : " << query.lastError().text();
    }

    return model;
}

QSqlQueryModel* Client::afficherfidele()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    query.prepare("SELECT ID, NOM, PRENOM, NBRACHAT FROM CLIENTS");

    if (query.exec()) {
        model->setQuery(std::move(query));
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nbrachat"));
    } else {
        qDebug() << "Erreur lors de l'affichage des clients : " << query.lastError().text();
    }

    return model;
}
