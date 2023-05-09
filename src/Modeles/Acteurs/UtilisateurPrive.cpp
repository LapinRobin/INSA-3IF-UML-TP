/*************************************************************************
                           UtilisateurPrive  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <UtilisateurPrive> (fichier UtilisateurPrive.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>
#include <vector>

//------------------------------------------------------ Include personnel
#include "UtilisateurPrive.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type UtilisateurPrive::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode



//-------------------------------------------- Constructeurs - destructeur
UtilisateurPrive::UtilisateurPrive ( const UtilisateurPrive & unUtilisateurPrive )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <UtilisateurPrive>" << endl;
#endif
} //----- Fin de UtilisateurPrive (constructeur de copie)


UtilisateurPrive::UtilisateurPrive ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <UtilisateurPrive>" << endl;
#endif
} //----- Fin de UtilisateurPrive


UtilisateurPrive::~UtilisateurPrive ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <UtilisateurPrive>" << endl;
#endif
} //----- Fin de ~UtilisateurPrive


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

