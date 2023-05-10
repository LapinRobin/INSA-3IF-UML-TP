/*************************************************************************
                           InscrireUtilisateur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <InscrireUtilisateur> (fichier InscrireUtilisateur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>


//------------------------------------------------------ Include personnel
#include "InscrireUtilisateur.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques


bool InscrireUtilisateur::inscrireUtilisateur() {
    return true;
}

//-------------------------------------------- Constructeurs - destructeur

InscrireUtilisateur::InscrireUtilisateur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <InscrireUtilisateur>" << endl;
#endif
} //----- Fin de InscrireUtilisateur


InscrireUtilisateur::~InscrireUtilisateur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <InscrireUtilisateur>" << endl;
#endif
} //----- Fin de ~InscrireUtilisateur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
