/*************************************************************************
                           Agence  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Agence> (fichier Agence.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Agence.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Agence::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode



//-------------------------------------------- Constructeurs - destructeur
Agence::Agence ( const Agence & unAgence )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Agence>" << endl;
#endif
} //----- Fin de Agence (constructeur de copie)


Agence::Agence ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Agence>" << endl;
#endif
} //----- Fin de Agence


Agence::~Agence ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Agence>" << endl;
#endif
} //----- Fin de ~Agence


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

