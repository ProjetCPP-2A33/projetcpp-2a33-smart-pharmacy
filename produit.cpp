#include "produit.h"
#include <QSqlQuery>
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>

Produit::Produit(){
    ID = 0 ;
    libelle = "" ;
    prix = 0.0 ;
    categorie = "" ;
    disponibilite = "" ;
}

Produit::Produit(int ID,QString libelle,float prix ,QDate dateExpiration ,QString categorie,QString disponibilite){
    this->ID = ID ;
    this->libelle = libelle ;
    this->prix = prix ;
    this->categorie = categorie ;
    this->disponibilite = disponibilite ;
    this->dateExpiration = dateExpiration ;
}
Produit::~Produit(){}

//  GETTERS & SETTERS :

int Produit::getID(){return ID ;}
QString Produit::getLibelle(){return libelle ;}
float Produit::getPrix(){return prix ;}
QDate Produit::getDateExpiration(){return dateExpiration ;}
QString Produit::getCategorie(){return categorie ;}
QString Produit::getDisponiblite(){return disponibilite ;}

void Produit::setID(int ID){this->ID = ID ;}
void Produit::setLibelle(QString libelle){this-> libelle = libelle ;}
void Produit::setPrix(float prix ){this->prix = prix;}
void Produit::setDateExpiration(QDate dateExpiration){this->dateExpiration = dateExpiration ;}
void Produit::setCategorie(QString categorie ) {this->categorie = categorie ;}
void Produit::setDisponibilite(QString disponibilite){this->disponibilite = disponibilite ;}

//  CRUD

bool Produit::ajouter() {
    QSqlQuery query;
    QString dateS = dateExpiration.toString("dd-MM-yyyy"); // Changed to match SQL format
    QString idString = QString::number(ID); // Convert ID to QString for consistency

    // Debugging output
    qDebug() << "ID being inserted:" << idString; // Check ID value before executing

    // Prepare the SQL query
    query.prepare("INSERT INTO GESTIONPRODUITS (id, dateexpiration, categorie, disponibilite, libelle, prix) "
                  "VALUES (:id, TO_DATE(:dateexpiration, 'DD-MM-YYYY'), :categorie, :disponibilite, :libelle, :prix)");

    // Bind values to the query
    query.bindValue(":id", idString);
    query.bindValue(":dateexpiration", dateS);
    query.bindValue(":categorie", categorie);
    query.bindValue(":disponibilite", disponibilite);
    query.bindValue(":libelle", libelle);
    query.bindValue(":prix", prix);

    // Execute the query and return the result
    if (!query.exec()) {
        qDebug() << "SQL Error:" << query.lastError().text(); // Print SQL error if any
        return false; // Return false if the query fails
    }

    return true; // Return true if the query executes successfully
}

bool Produit::supprimer(QString id){
    QSqlQuery query ;
    query.prepare("DELETE FROM GESTIONPRODUITS WHERE ID = :id");
    query.bindValue(":id",id);
    return query.exec();

}
QSqlQueryModel * Produit::afficher(){
    QSqlQueryModel * model = new QSqlQueryModel() ;
    model->setQuery("SELECT * FROM GESTIONPRODUITS");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));


    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATEEXPIRATION"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("PRIX"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("LIBELLE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DISPONIBILITE"));
 model->setHeaderData(2,Qt::Horizontal,QObject::tr("CATEGORIE"));
    return model ;

}





bool Produit::modifier() {
    QSqlQuery query;
    QString dateS = dateExpiration.toString("dd-MM-yyyy"); // Ensure date format matches
    QString idString = QString::number(ID); // Convert ID to QString for consistency

    // Prepare the SQL query for updating
    query.prepare("UPDATE GESTIONPRODUITS SET "
                  "dateexpiration = TO_DATE(:dateexpiration, 'DD-MM-YYYY'), "
                  "categorie = :categorie, "
                  "disponibilite = :disponibilite, "
                  "libelle = :libelle, "
                  "prix = :prix "
                  "WHERE id = :id");

    // Bind values to the query
    query.bindValue(":id", idString);
    query.bindValue(":dateexpiration", dateS);
    query.bindValue(":categorie", categorie);
    query.bindValue(":disponibilite", disponibilite);
    query.bindValue(":libelle", libelle);
    query.bindValue(":prix", prix);

    // Execute the query and return the result
    if (!query.exec()) {
        qDebug() << "SQL Error:" << query.lastError().text(); // Print SQL error if any
        return false; // Return false if the query fails
    }

    return true; // Return true if the query executes successfully
}







