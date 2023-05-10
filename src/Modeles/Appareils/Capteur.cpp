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

float Capteur::getMesureO3 ( const string& uneDate ) const
// Algorithme :
//
{
    return o3.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesureSo2 ( const string& uneDate ) const
// Algorithme :
//
{
    return so2.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesureNo2 ( const string& uneDate ) const
// Algorithme :
//
{
    return no2.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesurePm10 ( const string& uneDate ) const
// Algorithme :
//
{
    return pm10.at(uneDate);
} //----- Fin de Méthode

vector<string> Capteur::getDates ( ) const
// Algorithme :
//
{
    vector<string> dates;
    for (const std::pair<string, float>& element : o3) {
        dates.push_back(element.first);
    }
    return dates;
} //----- Fin de Méthode

bool Capteur::ajouterMesure( const string& date, const float& mesure, const typeMesure& type )
{
    pair<unordered_map<string,float>::iterator,bool> controle;
    switch (type)
    {
    case typeMesure::O_3:
        controle = o3.insert(make_pair(date,mesure));
        return controle.second;
    case typeMesure::SO_2:
        controle = so2.insert(make_pair(date,mesure));
        return controle.second;
    case typeMesure::NO_2:
        controle = no2.insert(make_pair(date,mesure));
        return controle.second;
    case typeMesure::PM_10:
        controle = pm10.insert(make_pair(date,mesure));
        return controle.second;
    default:
        return false;
    }
}

bool Capteur::estFonctionnel ( ) const
// Algorithme :
//
{
    return fonctionnel;
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur


Capteur::Capteur ( double uneLatitude, double uneLongitude, const string& unId, bool estFonctionnel)
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

