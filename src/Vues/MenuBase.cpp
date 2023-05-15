/*************************************************************************
                           MenuBase  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <MenuBase> (fichier MenuBase.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "MenuBase.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type MenuBase::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
MenuBase & MenuBase::operator = ( const MenuBase & unMenuBase )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
MenuBase::MenuBase ( const MenuBase & unMenuBase )
// Algorithme :
//
{
    
#ifdef MAP
    cout << "Appel au constructeur de copie de <MenuBase>" << endl;
#endif
} //----- Fin de MenuBase (constructeur de copie)


MenuBase::MenuBase ( char* options, int nbOptions )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <MenuBase>" << endl;
#endif
} //----- Fin de MenuBase


MenuBase::~MenuBase ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <MenuBase>" << endl;
#endif
} //----- Fin de ~MenuBase


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
