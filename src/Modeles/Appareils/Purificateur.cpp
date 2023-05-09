/*************************************************************************
                           Purificateur  -  description
                             -------------------
    début                : $2023$
    copyright            : (C) $2023$ par $CREMONA$
    e-mail               : $antoine.cremona@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <Purificateur> (fichier Purificateur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Purificateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Purificateur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Purificateur & Purificateur::operator = ( const Purificateur & unPurificateur )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Purificateur::Purificateur ( const Purificateur & unPurificateur )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Purificateur>" << endl;
#endif
} //----- Fin de Purificateur (constructeur de copie)


Purificateur::Purificateur ( double uneLatitude, double uneLongitude, string unId, string dateDemarrage, string dateArret)
        : Appareil(uneLatitude, uneLongitude), id(unId), demarrage(dateDemarrage), arret(dateArret)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Purificateur>" << endl;
#endif
} //----- Fin de Purificateur


Purificateur::~Purificateur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Purificateur>" << endl;
#endif
} //----- Fin de ~Purificateur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

