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
// retourner la mesure de O3 à une date donnée
{
    return o3.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesureSo2 ( const string& uneDate ) const
// Algorithme :
// retourner la mesure de SO2 à une date donnée
{
    return so2.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesureNo2 ( const string& uneDate ) const
// Algorithme :
// retourner la mesure de NO2 à une date donnée
{
    return no2.at(uneDate);
} //----- Fin de Méthode

float Capteur::getMesurePm10 ( const string& uneDate ) const
// Algorithme :
// retourner la mesure de PM10 à une date donnée
{
    return pm10.at(uneDate);
} //----- Fin de Méthode

vector<string> Capteur::getDates ( ) const
// Algorithme :
// retourner les dates des mesures
{
    vector<string> dates;
    for (std::unordered_map<std::string, float>::const_iterator it = o3.begin(); it != o3.end(); ++it) 
    {
        dates.push_back(it->first);
    }
    return dates;
} //----- Fin de Méthode

bool Capteur::ajouterMesure( const string& date, const float& mesure, const string& type )
// Algorithme :
// ajouter une mesure à une date donnée
{
    pair<unordered_map<string,float>::iterator,bool> controle;
    if(type=="O3")
    {
        controle = o3.insert(make_pair(date,mesure));
        return controle.second;
    }
    if(type=="SO2")
    {
        controle = so2.insert(make_pair(date,mesure));
        return controle.second;
    }
    if(type=="NO2")
    {
        controle = no2.insert(make_pair(date,mesure));
        return controle.second;
    }
    if(type=="PM10")
    {
        controle = pm10.insert(make_pair(date,mesure));
        return controle.second;
    }
    else
    {
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

