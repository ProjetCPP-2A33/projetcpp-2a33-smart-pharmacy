#include "Client.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVariant>
#include <QSqlError>

Client::Client()
{
    id = 0;
    gsm = 0;
    cin = 0;
    nom = "";
    prenom = "";
    sexe = "";
    allergies = "";
    adresse = "";
    mail = "";
}

Client::Client(int id, int gsm, int cin, const QString &nom, const QString &prenom,const QString &sexe, const QString &allergies, const QString &adresse, const QString &mail)
{
    this->id=id;
    this->gsm=gsm;
    this->cin=cin;
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
    query.prepare("INSERT INTO clients (id,gsm,cin,nom,prenom,sexe,mail,allergies,adresse)" "values(:id,:gsm,:cin,:nom,:prenom,:sexe,:mail,:allergies,:adresse)");

    query.bindValue(":id",id);
    query.bindValue(":gsm",gsm);
    query.bindValue(":cin",cin);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":sexe",sexe);
    query.bindValue(":mail",mail);
    query.bindValue(":allergies",allergies);
    query.bindValue(":adresse",adresse);

    return query.exec();//exec() envoie la requete pour l'executer
}

//Afficher client
QsqlQueryModel * Client::afficher() {
    QList<QMap<QString, QString>> clients;  // Liste pour stocker chaque client sous forme de QMap

    QSqlQuery query;
    query.prepare("SELECT id, nom, prenom, cin, gsm, mail, adresse, allergies, sexe FROM clients");

    if (query.exec()) {
        while (query.next()) {
            QMap<QString, QString> client;

            client["ID"] = query.value("id").toString();
            client["Nom"] = query.value("nom").toString();
            client["Prénom"] = query.value("prenom").toString();
            client["CIN"] = query.value("cin").toString();
            client["GSM"] = query.value("gsm").toString();
            client["Mail"] = query.value("mail").toString();
            client["Adresse"] = query.value("adresse").toString();
            client["Allergies"] = query.value("allergies").toString();
            client["Sexe"] = query.value("sexe").toString();

            clients.append(client);  // Ajouter le client à la liste
        }
    } else {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError();
    }

    return clients;  // Retourne la liste des clients
}


//Supprimer client
bool Client::supprimer(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM commande WHERE id = :id");

    // Utilisation correcte de bindValue
    query.bindValue(":id", id);  // Il n'est pas nécessaire de convertir ici, bindValue accepte directement un int

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression : " << query.lastError().text();
        return false;
    }
    return true;
}


//Modifier client
bool Client::modifier(int id,int gsm,int cin, QString nom, QString prenom,QString sexe,QString allergies, QString adresse, QString mail) {
    QSqlQuery query;
    query.prepare("UPDATE clients SET gsm = :gsm, cin = :cin, nom = :nom, prenom = :prenom, sexe = :sexe," "allergies = :allergies, adresse = :adresse, mail = :mail WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":gsm", gsm);
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":sexe", sexe);
    query.bindValue(":allergies", allergies);
    query.bindValue(":adresse", adresse);
    query.bindValue(":mail", mail);
    return query.exec();
}

//rechercher client
QSqlQueryModel* Client::rechercher(int id)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM Client WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("GSM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("Sexe"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Allergies"));
        model->setHeaderData(7, Qt::Horizontal, QObject::tr("Adresse"));
        model->setHeaderData(8, Qt::Horizontal, QObject::tr("Mail"));
    }

    return model;
}

