/*************************************************************************
                           AuthentifierUtilisateur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <AuthentifierUtilisateur> (fichier AuthentifierUtilisateur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>


//------------------------------------------------------ Include personnel
#include "AuthentifierUtilisateur.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques


AuthentifierUtilisateur::authentifierUtilisateur(string unMail, string unMdp)

//-------------------------------------------- Constructeurs - destructeur

AuthentifierUtilisateur::AuthentifierUtilisateur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AuthentifierUtilisateur>" << endl;
#endif
} //----- Fin de AuthentifierUtilisateur


AuthentifierUtilisateur::~AuthentifierUtilisateur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AuthentifierUtilisateur>" << endl;
#endif
} //----- Fin de ~AuthentifierUtilisateur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
