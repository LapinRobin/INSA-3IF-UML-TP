/*************************************************************************
                           Appareil  -  description
                             -------------------
    début                : $2023$
    copyright            : (C) $2023$ par $CREMONA$
    e-mail               : $antoine.cremona@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <Appareil> (fichier Appareil.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cmath>

//------------------------------------------------------ Include personnel
#include "Appareil.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Appareil::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


double Appareil::getLatitude() const
// Algorithme :
// retourner la latitude de l'appareil
{
    return latitude;
} //----- Fin de Méthode

double Appareil::getLongitude() const
// Algorithme :
// retourner la longitude de l'appareil
{
    return longitude;
} //----- Fin de Méthode

double Appareil::CalculerDistance ( const Appareil & unAppareil )
// Algorithme :
//
{
    CalculerDistance(unAppareil.latitude, unAppareil.longitude);
} //----- Fin de Méthode


double Appareil::CalculerDistance(double uneLatitude, double uneLongitude)
// Algorithme :
// Calcul de la distance entre l'appareil et un point de coordonnées données
{
    const double earthRadius = 6371.0; // rayon de la terre

    double latitude = getLatitude();
    double longitude = getLongitude();

    double dLat = (uneLatitude - latitude) * M_PI / 180.0;
    double dLon = (uneLongitude - longitude) * M_PI / 180.0;

    double lat1 = latitude * M_PI / 180.0;
    double lat2 = uneLatitude * M_PI / 180.0;

    double a = sin(dLat / 2.0) * sin(dLat / 2.0) +
               sin(dLon / 2.0) * sin(dLon / 2.0) * cos(lat1) * cos(lat2);
    double c = 2.0 * atan2(sqrt(a), sqrt(1.0 - a));

    double distance = earthRadius * c;

    return distance;
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Appareil & Appareil::operator = ( const Appareil & unAppareil )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Appareil::Appareil ( const Appareil & unAppareil )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Appareil>" << endl;
#endif
} //----- Fin de Appareil (constructeur de copie)


Appareil::Appareil ( double uneLatitude, double uneLongitude)
        : latitude(uneLatitude), longitude(uneLongitude)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Appareil>" << endl;
#endif
} //----- Fin de Appareil


Appareil::~Appareil ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Appareil>" << endl;
#endif
} //----- Fin de ~Appareil


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

