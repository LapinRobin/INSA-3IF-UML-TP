/*************************************************************************
                           Capteur  -  description
                             -------------------
    début                : $2023$
    copyright            : (C) $2023$ par $CREMONA$
    e-mail               : $antoine.cremona@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <Capteur> (fichier Capteur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Capteur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Capteur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

float Capteur::getMesureO3 ( string uneDate )
// Algorithme :
//
{
    return o3.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesureSo2 ( string uneDate )
// Algorithme :
//
{
    return so2.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesureNo2 ( string uneDate )
// Algorithme :
//
{
    return no2.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesurePm10 ( string uneDate )
// Algorithme :
//
{
    return pm10.at(uneDate);
} //----- Fin de Méthode

vector<string> Capteur::getDates ( )
// Algorithme :
//
{
    vector<string> dates;
    for (const std::pair<string, float>& element : o3) {
        dates.push_back(element.first);
    }
    return dates;
} //----- Fin de Méthode

bool Capteur::estFonctionnel ( )
// Algorithme :
//
{
    return fonctionnel;
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur


Capteur::Capteur ( double uneLatitude, double uneLongitude, string unId, bool estFonctionnel)
        : Appareil(uneLatitude, uneLongitude), id(unId), fonctionnel(estFonctionnel)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Capteur>" << endl;
#endif
} //----- Fin de Capteur


Capteur::~Capteur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Capteur>" << endl;
#endif
} //----- Fin de ~Capteur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

