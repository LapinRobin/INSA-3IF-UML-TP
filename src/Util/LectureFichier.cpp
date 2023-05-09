//---------- Réalisation de la classe <LectureFichier> (fichier LectureFichier.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <fstream>

//------------------------------------------------------ Include personnel
#include "LectureFichier.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void LectureFichier::lireCapteurs( unordered_map<string,Capteur>& listeARemplir )
{
    string buffer;
    string id;
    double longitude;
    double latitude;
    ifstream fichierCapteurs("../..data/sensors.csv");
    
    while(!fichierCapteurs.eof())
    {
        getline(fichierCapteurs,buffer,';');
        id=buffer;
        getline(fichierCapteurs,buffer,';');
        longitude=stod(buffer);
        getline(fichierCapteurs,buffer,'\n');
        latitude=stod(buffer);
        Capteur cap(latitude,longitude,id);
        listeARemplir.insert(make_pair(id,cap));
    }
}

void LectureFichier::lireFournisseurs( unordered_map<string,Fournisseur>& listeARemplir )
{
    string buffer;
    string fournisseurId;
    string purificateurId;
    ifstream fichierFournisseurs("../../data/providers.csv");
    unordered_map<string,Purificateur> listePurificateurs;
    lirePurificateurs(listePurificateurs);
    
    while(!fichierFournisseurs.eof())
    {
        getline(fichierFournisseurs,buffer,';');
        fournisseurId=buffer;
        getline(fichierFournisseurs,buffer,';');
        purificateurId=buffer;
        getline(fichierFournisseurs,buffer);
        if(listeARemplir.find(fournisseurId)!=listeARemplir.end())
        {
            listeARemplir[fournisseurId].ajouterPurificateur(listePurificateurs[purificateurId]);
        }
        else
        {
            vector<Purificateur> desPurificateurs;
            desPurificateurs.push_back(listePurificateurs[purificateurId]);
            Fournisseur four(fournisseurId,fournisseurId+"@gmail.com","mdp",fournisseurId,desPurificateurs);
            listeARemplir.insert(make_pair(fournisseurId,four));
        }
    }
}

void LectureFichier::lireUtilisateursPrives( unordered_map<string,UtilisateurPrive>& listeARemplir )
{
    string buffer;
    string id;
    string mail;
    string mdp;
    ifstream fichierUtilisateursPrives("../..data/users.csv");
    
    while(!fichierUtilisateursPrives.eof())
    {
        getline(fichierUtilisateursPrives,buffer,';');
        id=buffer;
        getline(fichierUtilisateursPrives,buffer,';');
        mail=buffer;
        getline(fichierUtilisateursPrives,buffer,'\n');
        mdp=buffer;
        UtilisateurPrive user(id,mail,mdp);
        listeARemplir.insert(make_pair(id,user));
    }
}


//------------------------------------------------- Surcharge d'opérateurs
LectureFichier & LectureFichier::operator = ( const LectureFichier & unLectureFichier )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
LectureFichier::LectureFichier ( const LectureFichier & unLectureFichier )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <LectureFichier>" << endl;
#endif
} //----- Fin de LectureFichier (constructeur de copie)


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
