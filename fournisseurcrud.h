#ifndef FOURNISSEURCRUD_H
#define FOURNISSEURCRUD_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include "fournisseur.h"

class FournisseurCRUD
{
public:
    FournisseurCRUD();

    // CRUD operations
    bool ajouter(const Fournisseur &fournisseur);
    bool supprimer(int id);
    bool modifier(const Fournisseur &fournisseur);
    QSqlQuery afficher();
};

#endif // FOURNISSEURCRUD_H
