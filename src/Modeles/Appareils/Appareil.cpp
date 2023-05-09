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

double Appareil::CalculerDistance ( const Appareil & unAppareil )
// Algorithme :
//
{
    CalculerDistance(unAppareil.latitude, unAppareil.longitude);
} //----- Fin de Méthode

double Appareil::CalculerDistance ( double uneLatitude, double uneLongitude )
// Algorithme :
//
{
    
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

