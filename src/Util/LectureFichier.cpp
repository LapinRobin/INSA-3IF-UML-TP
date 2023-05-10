//---------- Réalisation de la classe <LectureFichier> (fichier LectureFichier.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

//------------------------------------------------------ Include personnel
#include "LectureFichier.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void LectureFichier::lireCapteurs( unordered_map<string,Capteur>& listeARemplir )
// Algorithme :
// Lire le fichier sensors.csv et le stocker dans une référence de unordered_map passé en paramètre


{
    string buffer;
    string id;
    double longitude;
    double latitude;
    ifstream fichierCapteurs("./dataset/sensors.csv");
    
    while(!fichierCapteurs.eof())
    {
        getline(fichierCapteurs,buffer,';');
        if(fichierCapteurs.eof())
        {
            break;
        }
        id=buffer;
        getline(fichierCapteurs,buffer,';');
        latitude=stod(buffer);
        getline(fichierCapteurs,buffer,';');
        longitude=stod(buffer);
        getline(fichierCapteurs,buffer);
        Capteur cap(latitude,longitude,id);
        listeARemplir.insert(make_pair(id,cap));
    }
    lireMesures(listeARemplir);
}

void LectureFichier::lireFournisseurs( unordered_map<string,Fournisseur>& listeARemplir )
// Algorithme :
// Lire le fichier providers.csv et le stocker dans une référence de unordered_map passé en paramètre
{
    string buffer;
    string fournisseurId;
    string purificateurId;
    ifstream fichierFournisseurs("./dataset/providers.csv");
    unordered_map<string,Purificateur> listePurificateurs;
    lirePurificateurs(listePurificateurs);
    
    while(!fichierFournisseurs.eof())
    {
        getline(fichierFournisseurs,buffer,';');
        if(fichierFournisseurs.eof())
        {
            break;
        }
        fournisseurId=buffer;
        getline(fichierFournisseurs,buffer,';');
        purificateurId=buffer;
        getline(fichierFournisseurs,buffer);
        if(listeARemplir.find(fournisseurId)!=listeARemplir.end())
        {
            listeARemplir.at(fournisseurId).ajouterPurificateur(listePurificateurs.at(purificateurId));
        }
        else
        {
            vector<Purificateur> desPurificateurs;
            desPurificateurs.push_back(listePurificateurs.at(purificateurId));
            Fournisseur four(fournisseurId,fournisseurId+"@gmail.com","mdp",fournisseurId,desPurificateurs);
            listeARemplir.insert(make_pair(fournisseurId,four));
        }
    }
}

void LectureFichier::lireUtilisateursPrives( unordered_map<string,UtilisateurPrive>& listeARemplir,const unordered_map<string,Capteur>& listeCapteurs )
// Algorithme :
// Lire le fichier users.csv et le stocker dans une référence de unordered_map passé en paramètre

{
    string buffer;
    string userId;
    string capteurId;
    ifstream fichierUtilisateursPrives("./dataset/users.csv");
    
    while(!fichierUtilisateursPrives.eof())
    {
        getline(fichierUtilisateursPrives,buffer,';');
        if(fichierUtilisateursPrives.eof())
        {
            break;
        }
        userId=buffer;
        getline(fichierUtilisateursPrives,buffer,';');
        capteurId=buffer;
        getline(fichierUtilisateursPrives,buffer);
        vector<Capteur> desCapteurs;
        if(listeARemplir.find(userId)!=listeARemplir.end())
        {
            listeARemplir.at(userId).ajouterCapteur(listeCapteurs.at(capteurId));
        }
        else
        {
            desCapteurs.push_back(listeCapteurs.at(capteurId));
            UtilisateurPrive user(userId,userId+"@gmail.com","mdp",userId,desCapteurs);
            listeARemplir.insert(make_pair(userId,user));   
        }
    }
}


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

LectureFichier::LectureFichier ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <LectureFichier>" << endl;
#endif
} //----- Fin de LectureFichier


LectureFichier::~LectureFichier ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <LectureFichier>" << endl;
#endif
} //----- Fin de ~LectureFichier


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

void LectureFichier::lireMesures( unordered_map<string,Capteur>& capteursAModifier )
// Algorithme :
// Lire le fichier measurements.csv et le stocker dans une référence de unordered_map passé en paramètre
{
    string buffer;
    string date;
    string capteurId;
    string type;
    float mesure;
    ifstream fichierMesures("./dataset/measurements.csv");
    
    while(!fichierMesures.eof())
    {
        getline(fichierMesures,buffer,';');
        if(fichierMesures.eof())
        {
            break;
        }
        date=buffer;
        getline(fichierMesures,buffer,';');
        capteurId=buffer;
        getline(fichierMesures,buffer,';');
        type==buffer;
        getline(fichierMesures,buffer,';');
        mesure=stof(buffer);
        getline(fichierMesures,buffer);
        capteursAModifier.at(capteurId).ajouterMesure(date,mesure,type);
    }
}

void LectureFichier::lirePurificateurs( unordered_map<string,Purificateur>& listeARemplir )
// Algorithme :
// Lire le fichier cleaners.csv et le stocker dans une référence de unordered_map passé en paramètre
{
    string buffer;
    ifstream fichierPurificateurs("./dataset/cleaners.csv");
    string purificateurId;
    double latitude;
    double longitude;
    string dateDebut;
    string dateFin;

    while(!fichierPurificateurs.eof())
    {
        getline(fichierPurificateurs,buffer,';');
        if(fichierPurificateurs.eof())
        {
            break;
        }
        purificateurId=buffer;
        getline(fichierPurificateurs,buffer,';');
        latitude=stod(buffer);
        getline(fichierPurificateurs,buffer,';');
        longitude=stod(buffer);
        getline(fichierPurificateurs,buffer,';');
        dateDebut=buffer;
        getline(fichierPurificateurs,buffer,';');
        dateFin=buffer;
        getline(fichierPurificateurs,buffer);
        Purificateur purif(latitude,longitude,purificateurId,dateDebut,dateFin);
        listeARemplir.insert(make_pair(purificateurId,purif));
    }
}