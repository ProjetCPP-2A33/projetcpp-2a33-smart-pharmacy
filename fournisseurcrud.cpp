#include "fournisseurcrud.h"

FournisseurCRUD::FournisseurCRUD() {}

// Ajouter un fournisseur
bool FournisseurCRUD::ajouter(const Fournisseur &fournisseur)
{
    QSqlQuery query;
    query.prepare("INSERT INTO fournisseur (id, nom, adresse, telephone) VALUES (:id, :nom, :adresse, :telephone)");
    query.bindValue(":id", fournisseur.getId());
    query.bindValue(":nom", fournisseur.getNom());
    query.bindValue(":adresse", fournisseur.getAdresse());
    query.bindValue(":telephone", fournisseur.getTelephone());

    return query.exec();
}

// Supprimer un fournisseur
bool FournisseurCRUD::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM fournisseur WHERE id = :id");
    query.bindValue(":id", id);

    return query.exec();
}

// Modifier un fournisseur
bool FournisseurCRUD::modifier(const Fournisseur &fournisseur)
{
    QSqlQuery query;
    query.prepare("UPDATE fournisseur SET nom = :nom, adresse = :adresse, telephone = :telephone , prenom = :prenom, description = :description , disponibilite = :disponibilite, WHERE id = :id");
    query.bindValue(":id", fournisseur.getId());
    query.bindValue(":nom", fournisseur.getNom());
    query.bindValue(":adresse", fournisseur.getAdresse());
    query.bindValue(":telephone", fournisseur.getTelephone());
    query.bindValue(":prenom", fournisseur.getPrenom());
    query.bindValue(":disponibilite", fournisseur.getDisponibilite());
    query.bindValue(":description", fournisseur.getDescription());

    return query.exec();
}

// Afficher les fournisseurs
QSqlQuery FournisseurCRUD::afficher()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM fournisseur");
    query.exec();

    return query;
}
