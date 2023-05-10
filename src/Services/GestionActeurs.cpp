/*************************************************************************
                           GestionActeurs  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <GestionActeurs> (fichier GestionActeurs.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>


//------------------------------------------------------ Include personnel
#include "GestionActeurs.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques




//-------------------------------------------- Constructeurs - destructeur

GestionActeurs::GestionActeurs ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <GestionActeurs>" << endl;
#endif
} //----- Fin de GestionActeurs


GestionActeurs::~GestionActeurs ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <GestionActeurs>" << endl;
#endif
} //----- Fin de ~GestionActeurs


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
