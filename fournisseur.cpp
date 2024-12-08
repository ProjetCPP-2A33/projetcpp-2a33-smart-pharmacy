#include"fournisseur.h"
#include <qlocale.h>
#include <QSqlQuery>
#include <QString>
#include <qsqlerror.h>
#include<QMessageBox>

fournisseur::fournisseur() : id(""), nomf(""), adressef(""), telephone(""), date_aff(QDate::currentDate()), disponibilite(0),image("") {
    // Initialisation des membres
}

fournisseur::fournisseur(QString id,QString nomf,QString adressef,QString telephone,QDate date_aff,int disponibilite,QString  image) {
    this->adressef=adressef;
    this->nomf=nomf;
    this->id=id;
    this->telephone=telephone;
    this->date_aff=date_aff;
    this->disponibilite=disponibilite;
    this->image=image;

}
bool fournisseur::ajouter(QString id, QString nomf, QString telephone, QString adressef, QDate date_aff, int disponibilite ,QString image) {
    if (id.isEmpty() || id == "0") {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("L'ID ne peut pas être vide ou égal à 0."));
        return false;
    }

    QSqlQuery query;
    // Vérifier si un fournisseur avec le même ID existe déjà
    query.prepare("SELECT COUNT(*) FROM fournisseur WHERE idf = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        if (query.value(0).toInt() > 0) {
            // Un fournisseur avec cet ID existe déjà
            QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Un fournisseur avec cet ID existe déjà."));
            return false;
        }
    }

    query.prepare("INSERT INTO fournisseur (idf,nomf,telephone, adressef, date_aff, disponibilite,image) "
                  "VALUES (:id,:nomf,:telephone,:adressef, :date_aff, :disponibilite,:image)");
    query.bindValue(":id", id);
    query.bindValue(":telephone", telephone);
    query.bindValue(":adressef", adressef);
    query.bindValue(":date_aff", date_aff);
    query.bindValue(":nomf", nomf);
    query.bindValue(":disponibilite", disponibilite);
    query.bindValue(":image", image);

    return query.exec();
}

QSqlQueryModel * fournisseur::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM fournisseur ");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Adresse"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("telephone"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("Disponibilite"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("Image"));

    return model;

}
 QSqlQueryModel * fournisseur::afficherTri()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM fournisseur ORDER BY nomf ASC");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Adresse"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("telephone"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("Disponibilite"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("IMAGE"));

    return model;

}

bool fournisseur::trier(QString nom) {
    QSqlQuery query;
    query.prepare("SELECT * FROM fournisseur ORDER BY nomf ASC");
    return query.exec();
}

bool fournisseur::modifier(QString id, QString nom, QString telephone, QString adresse, QDate date_aff, int disponibilite,QString image) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM fournisseur WHERE idf = ?");
    query.addBindValue(id);

    if (!query.exec()) {
       // qDebug() << "Erreur lors de la modification : " << query.lastError().text();
        return false;  // Retourne false en cas d'erreur
    }
    query.prepare("UPDATE fournisseur SET nomf = ?, telephone = ?, adressef = ?, date_aff = TO_DATE(?, 'YYYY-MM-DD'), disponibilite = ?,IMAGE=? WHERE idf = ?");
    query.addBindValue(nomf);
    query.addBindValue(telephone);
    query.addBindValue(adressef);
    query.addBindValue(date_aff.toString("yyyy-MM-dd"));
    query.addBindValue(disponibilite);
    query.addBindValue(image);
    query.addBindValue(id);

    if (!query.exec()) {
       // qDebug() << "Erreur lors de la modification : " << query.lastError().text();
        return false;  // Retourne false en cas d'erreur
    }
    return true;  // Retourne true si la modification est réussie
}

bool fournisseur::supprimer(QString id) {
    QSqlQuery query;

    query.prepare("DELETE FROM fournisseur WHERE idf = :id");
    query.bindValue(":id", id);
return query.exec();
}
QSqlQueryModel* fournisseur::rechercher(QString id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM fournisseur WHERE idf = :id");
    query.bindValue(":id", id);

    QSqlQueryModel* model = new QSqlQueryModel();  // Déclaration correcte de model
    if (query.exec()) {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Adresse"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Téléphone"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("Disponibilité"));
    }

    return model;
}




int fournisseur::countdisponibilite(const QString& dispoo)
{
    int count = 0;

    QSqlQuery query;
    query.prepare("SELECT COUNT(DISPONIBILITE) FROM FOURNISSEUR WHERE DISPONIBILITE = :DISPONIBILITE");
    query.bindValue(":DISPONIBILITE", dispoo);

    if (query.exec() && query.next()) {
        count = query.value(0).toInt();
    }

    return count;
}
