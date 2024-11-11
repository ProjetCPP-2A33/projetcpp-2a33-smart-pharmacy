#include "commande.h"
#include <qlocale.h>
#include <QSqlQuery>
#include <QString>
#include <qsqlerror.h>
#include <QMap>
#include <QSqlError>
#include <QDebug>
#include <QPdfWriter>
#include <QPainter>
#include <QMessageBox>

Commande::Commande(int idc,QDate datec,double montantTotal,QString modePaiement,QString etat)
{
    this->idc=idc;
    this->datec=datec;
    this->montantTotal=montantTotal;
    this->modePaiement=modePaiement;
    this->etat= etat;

}
bool Commande::ajouter() {
    QSqlQuery query;
    QString res = QString::number(idc);

    // Correction de la requête SQL
    query.prepare("INSERT INTO commande (idc, datec, montantTotal, modePaiement, etat) "
                  "VALUES (:idc, :datec, :montantTotal, :modePaiement, :etat)");

    // Utilisation correcte de bindValue
    query.bindValue(":idc", res);
    query.bindValue(":datec", datec);
    query.bindValue(":montantTotal", montantTotal);
    query.bindValue(":modePaiement", modePaiement);
    query.bindValue(":etat", etat);  // Ajout d'un point-virgule ici

    return query.exec();
}

bool Commande::idExiste(int idc) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM commande WHERE idc = :idc");
    query.bindValue(":idc", idc);

    if (!query.exec()) {
        qDebug() << "Erreur SQL lors de la vérification de l'existence de l'ID : " << query.lastError().text();
        return false;
    }

    query.next();  // Passer à la première ligne du résultat
    int count = query.value(0).toInt();
    return count > 0;  // Si l'ID existe, count sera supérieur à 0
}

bool Commande::supprimer(int idc) {
    // Vérifier si l'ID existe dans la base de données avant de tenter de le supprimer
    if (!idExiste(idc)) {
        qDebug() << "L'ID spécifié n'existe pas dans la base de données.";
        return false;  // Retourner false si l'ID n'existe pas
    }

    QSqlQuery query;
    query.prepare("DELETE FROM commande WHERE idc = :idc");
    query.bindValue(":idc", idc);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression : " << query.lastError().text();
        return false;
    }
    return true;
}


QSqlQueryModel* Commande::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM commande");

    // Définir les en-têtes de colonnes
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idc"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("datec"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("montantTotal"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("modePaiement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("etat"));

    return model;
}
bool Commande::modifier() {
    if (!idExiste(idc)) {
        qDebug() << "L'ID n'existe pas dans la base de données.";
        return false;
    }

    QSqlQuery query;
    QStringList updates;

    if (!datec.isNull()) updates << "datec = :datec";
    if (montantTotal != -1) updates << "montantTotal = :montantTotal";
    if (!modePaiement.isEmpty()) updates << "modePaiement = :modePaiement";
    if (!etat.isEmpty()) updates << "etat = :etat";

    QString queryStr = "UPDATE commande SET " + updates.join(", ") + " WHERE idc = :idc";
    query.prepare(queryStr);

    query.bindValue(":idc", idc);
    if (!datec.isNull()) query.bindValue(":datec", datec);
    if (montantTotal != -1) query.bindValue(":montantTotal", montantTotal);
    if (!modePaiement.isEmpty()) query.bindValue(":modePaiement", modePaiement);
    if (!etat.isEmpty()) query.bindValue(":etat", etat);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la modification : " << query.lastError().text();
        return false;
    }
    return true;
}

QSqlQueryModel* Commande::rechercher(int idc) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM commande WHERE idc = :idc");
    query.bindValue(":idc", idc);

    if (query.exec()) {
        model->setQuery(query);
    } else {
        qDebug() << "Erreur lors de la recherche : " << query.lastError().text();
    }
    return model;
}
QSqlQueryModel* Commande::trierParDateDesc() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM commande ORDER BY datec DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Montant Total"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Mode Paiement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("État"));
    return model;
}



QMap<QString, int> Commande::statistiquesParModePaiement() {
    QMap<QString, int> statistiques;

    // Mode de paiement : "Virement banquaire"
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM commande WHERE modePaiement = 'Virement banquaire'");
    if (query.exec()) {
        query.next();
        statistiques["Virement banquaire"] = query.value(0).toInt();
    } else {
        qDebug() << "Erreur requête Virement banquaire: " << query.lastError();
    }

    // Mode de paiement : "Cheque"
    query.prepare("SELECT COUNT(*) FROM commande WHERE modePaiement = 'Cheque'");
    if (query.exec()) {
        query.next();
        statistiques["Cheque"] = query.value(0).toInt();
    } else {
        qDebug() << "Erreur requête Cheque: " << query.lastError();
    }

    // Mode de paiement : "Carte credit/Debit"
    query.prepare("SELECT COUNT(*) FROM commande WHERE modePaiement = 'Carte credit/Debit'");
    if (query.exec()) {
        query.next();
        statistiques["Carte credit/Debit"] = query.value(0).toInt();
    } else {
        qDebug() << "Erreur requête Carte credit/Debit: " << query.lastError();
    }

    // Mode de paiement : "Especes"
    query.prepare("SELECT COUNT(*) FROM commande WHERE modePaiement = 'Especes'");
    if (query.exec()) {
        query.next();
        statistiques["Especes"] = query.value(0).toInt();
    } else {
        qDebug() << "Erreur requête Especes: " << query.lastError();
    }

    return statistiques;
}



void Commande::exporterPDF(const QString &nomFichier, QAbstractItemModel *model)
{
    QPdfWriter pdfWriter(nomFichier);
    QPainter painter(&pdfWriter);

    // Paramètres PDF
    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial", 20));

    // Titre
    painter.drawText(2500, 1100, "Liste des Commandes");

    // Coordonnées et dimensions des cellules
    int startX = 200;
    int startY = 1800;
    int cellWidth = 1100;
    int cellHeight = 450;

    // En-têtes du tableau
    QStringList headers = {"ID Commande", "Date", "Montant Total", "Mode de Paiement", "État"};
    painter.setFont(QFont("Arial", 10, QFont::Bold));
    for (int col = 0; col < headers.size(); ++col) {
        painter.drawText(startX + col * cellWidth, startY, cellWidth, cellHeight, Qt::AlignCenter, headers[col]);
    }

    // Données des commandes
    int rowCount = model->rowCount();
    painter.setFont(QFont("Arial", 10));
    for (int row = 0; row < rowCount; ++row) {
        QColor bgColor = (row % 2 == 0) ? Qt::lightGray : Qt::white;

        for (int col = 0; col < headers.size(); ++col) {
            QString data = model->data(model->index(row, col)).toString();
            QRect cellRect(startX + col * cellWidth, startY + (row + 1) * cellHeight, cellWidth, cellHeight);

            painter.fillRect(cellRect, bgColor);
            painter.drawText(cellRect, Qt::AlignCenter, data);
            painter.drawRect(cellRect);
        }
    }

    QMessageBox::information(nullptr, "PDF Créé", "Un fichier PDF a été créé.");
}
