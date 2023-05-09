//---------- Réalisation de la classe <LectureFichier> (fichier LectureFichier.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <unordered_map>
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
    string id;
    double longitude;
    double latitude;
    ifstream fichierFournisseurs("../..data/sensors.csv");
    
    while(!fichierFournisseurs.eof())
    {
        getline(fichierFournisseurs,buffer,';');
        id=buffer;
        getline(fichierFournisseurs,buffer,';');
        longitude=stod(buffer);
        getline(fichierFournisseurs,buffer,'\n');
        latitude=stod(buffer);
        Fournisseur four(latitude,longitude,id);
        listeARemplir.insert(make_pair(id,four));
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
