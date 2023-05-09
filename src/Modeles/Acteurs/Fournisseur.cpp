/*************************************************************************
                           Fournisseur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Fournisseur> (fichier Fournisseur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <vector>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Fournisseur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Fournisseur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode



//-------------------------------------------- Constructeurs - destructeur
Fournisseur::Fournisseur ( const Fournisseur & unFournisseur )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Fournisseur>" << endl;
#endif
} //----- Fin de Fournisseur (constructeur de copie)


Fournisseur::Fournisseur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Fournisseur>" << endl;
#endif
} //----- Fin de Fournisseur


Fournisseur::~Fournisseur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Fournisseur>" << endl;
#endif
} //----- Fin de ~Fournisseur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

