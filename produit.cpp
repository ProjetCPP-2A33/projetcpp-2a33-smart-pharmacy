#include "produit.h"
#include <QSqlQuery>
#include <QObject>
#include <QSqlError>
#include <QDebug>

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
    QString prixStr = QString::number(prix);

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
    query.bindValue(":prix", prixStr);

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

// ## Recherche ## //

QSqlQueryModel *Produit::afficher_libelle(QString ch)
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT * FROM GESTIONPRODUITS where libelle = '"+ch+"' ");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));


    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATEEXPIRATION"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("PRIX"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("LIBELLE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DISPONIBILITE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("CATEGORIE"));
    return model ;
}
QSqlQueryModel *Produit::afficher_disponibilite(QString ch)
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT * FROM GESTIONPRODUITS where DISPONIBILITE = '"+ch+"' ");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));


    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATEEXPIRATION"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("PRIX"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("LIBELLE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DISPONIBILITE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("CATEGORIE"));
    return model ;
}

// ## Tri ## //

QSqlQueryModel *Produit:: afficher_choix(QString choix)
{
    QSqlQueryModel * model =new QSqlQueryModel();

    if(choix=="libelle croissants")
    {
        model->setQuery("SELECT * FROM GESTIONPRODUITS ORDER BY libelle ASC");

        model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));


        model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATEEXPIRATION"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("PRIX"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("LIBELLE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("DISPONIBILITE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("CATEGORIE"));
    }
    else if(choix=="libelle decroissants")
    {
        model->setQuery("SELECT * FROM GESTIONPRODUITS ORDER BY libelle DESC");

        model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));


        model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATEEXPIRATION"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("PRIX"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("LIBELLE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("DISPONIBILITE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("CATEGORIE"));
    }
    else if(choix=="prix decroissants")
    {
        model->setQuery("SELECT * FROM GESTIONPRODUITS ORDER BY prix DESC");

        model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));


        model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATEEXPIRATION"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("PRIX"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("LIBELLE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("DISPONIBILITE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("CATEGORIE"));
    }
    else if(choix=="prix croissants")
    {
        model->setQuery("SELECT * FROM GESTIONPRODUITS ORDER BY prix ASC");

        model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));


        model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATEEXPIRATION"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("PRIX"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("LIBELLE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("DISPONIBILITE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("CATEGORIE"));

    }
    return model ;
}

// ## Statistique ## //

int Produit::statistique1(){
    int count = 0;

    QSqlQuery requete("SELECT * FROM GESTIONPRODUITS WHERE disponibilite like 'In Stock' ");

    while(requete.next()) {
        count++;
    }

    return count;
}


int Produit::statistique2(){
    int count = 0;

    QSqlQuery requete("SELECT * FROM GESTIONPRODUITS WHERE disponibilite like 'Out of Stock' ");

    while(requete.next()) {
        count++;
    }

    return count;
}

// ## PDF ## //

Produit* Produit::readproduit(QString val)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM GESTIONPRODUITS WHERE id = :val");

    query.bindValue(":val", val);

    if (query.exec())
    {
        while (query.next())
        {
            setID(query.value(0).toInt());
            setDateExpiration(query.value(1).toDate());
            setCategorie(query.value(2).toString());
            setDisponibilite(query.value(3).toString());
            setLibelle(query.value(4).toString());
            setPrix(query.value(5).toFloat());
        }
    }
    return this;
}




