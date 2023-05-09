//---------- Réalisation de la classe <LectureFichier> (fichier LectureFichier.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <unordered_map>
#include <fstream>

//------------------------------------------------------ Include personnel
#include "LectureFichier.h"
#include "../Modeles/Acteurs/Acteur.h"
#include "../Modeles/Acteurs/Fournisseur.h"
#include "../Modeles/Acteurs/Agence.h"
#include "../Modeles/Acteurs/UtilisateurPrive.h"
#include "../Modeles/Appareils/Capteur.h"
#include "../Modeles/Appareils/Purificateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void LectureFichier::lireCapteurs( unordered_map<string,Capteur>* listeARemplir )
{
    string buffer;
    string id;
    double longitude;
    double latitude;
    ifstream fichierCapteurs("sensors.csv");
    
    while(!fichierCapteurs.eof())
    {
        getline(fichierCapteurs,buffer,';');
        id=buffer;
        getline(fichierCapteurs,buffer,';');
        longitude=stod(buffer);
        getline(fichierCapteurs,buffer,'\n');
        latitude=stod(buffer);
        Capteur cap(latitude,longitude,id);
        listeARemplir->insert(make_pair(id,cap));
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
