#include"fournisseur.h"
#include <qlocale.h>
#include <QSqlQuery>
#include <QString>
#include <qsqlerror.h>
#include<QMessageBox>

fournisseur::fournisseur() : id(""), nom(""), adresse(""), telephone(""), date_aff(QDate::currentDate()), disponibilite(0) {
    // Initialisation des membres
}

fournisseur::fournisseur(QString id,QString nom,QString adresse,QString telephone,QDate date_aff,int disponibilite) {
    this->adresse=adresse;
    this->nom=nom;
    this->id=id;
    this->telephone=telephone;
    this->date_aff=date_aff;
    this->disponibilite=disponibilite;

}
bool fournisseur::ajouter(QString id, QString nom, QString telephone, QString adresse, QDate date_aff, int disponibilite ) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM fournisseur WHERE nom = :nom_fournisseur");
    query.bindValue(":nom_fournisseur", nom);

    if (query.exec() && query.next()) {
        if (query.value(0).toInt() > 0) {
            // Un fournisseur avec ce nom existe déjà
            QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Un fournisseur avec ce nom existe déjà."));
            return false;
        }
    }

    query.prepare("INSERT INTO fournisseur (id,nom,telephone, adresse, date_aff, disponibilite) "
                  "VALUES (:id,:nom,:telephone,:adresse, :date_aff, :disponibilite)");
    query.bindValue(":id", id);
    query.bindValue(":telephone", telephone);
    query.bindValue(":adresse", adresse);
    query.bindValue(":date_aff", date_aff);
    query.bindValue(":nom", nom);
    query.bindValue(":disponibilite", disponibilite);

    return query.exec();
}

 QSqlQueryModel * fournisseur::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from fournisseur");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Adresse"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("telephone"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("Disponibilite"));

    return model;

}

bool fournisseur::trier(QString nom) {
    QSqlQuery query;
    query.prepare("SELECT * FROM fournisseur ORDER BY nom ASC");
    return query.exec();
}

bool fournisseur::supprimer(QString id) {
    QSqlQuery query;

    query.prepare("DELETE FROM fournisseur WHERE ID = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression :" << query.lastError().text();
        return false;  // Ajout d'une gestion d'erreur
    }
    return true;
}

