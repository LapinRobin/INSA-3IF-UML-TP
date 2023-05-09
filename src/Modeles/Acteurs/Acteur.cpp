/*************************************************************************
                           Acteur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Acteur> (fichier Acteur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Acteur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Acteur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur
Acteur::Acteur ( const Acteur & unActeur )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Acteur>" << endl;
#endif
} //----- Fin de Acteur (constructeur de copie)


Acteur::Acteur(string unNom, string unMail, string unMdp)
    : nom(unNom), mail(unMail), mdp(unMdp)

// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Acteur>" << endl;
#endif
} //----- Fin de Acteur


Acteur::~Acteur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Acteur>" << endl;
#endif
} //----- Fin de ~Acteur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

