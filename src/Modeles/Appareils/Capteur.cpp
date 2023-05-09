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


//------------------------------------------------- Surcharge d'opérateurs
Capteur & Capteur::operator = ( const Capteur & unCapteur )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Capteur::Capteur ( const Capteur & unCapteur )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Capteur>" << endl;
#endif
} //----- Fin de Capteur (constructeur de copie)


Capteur::Capteur ( string unId, bool estFonctionnel)
        : id(unId), fonctionnel(estFonctionnel)
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

