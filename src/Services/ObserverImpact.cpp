/*************************************************************************
                           ObserverImpact  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <ObserverImpact> (fichier ObserverImpact.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>


//------------------------------------------------------ Include personnel
#include "ObserverImpact.h"



//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques









//-------------------------------------------- Constructeurs - destructeur

ObserverImpact::ObserverImpact ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ObserverImpact>" << endl;
#endif
} //----- Fin de ObserverImpact


ObserverImpact::~ObserverImpact ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ObserverImpact>" << endl;
#endif
} //----- Fin de ~ObserverImpact


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
