/*************************************************************************
                           Affichage  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Affichage> (fichier Affichage.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Affichage.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Affichage::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Affichage::afficherTitre()
{
    cout << "###########################################################\n";
    cout << "#    ___    _     _       __      __       __             #\n";
    cout << "#   /   |  (_)___| |     / /___ _/ /______/ /_  ___  _____#\n";
    cout << "#  / /| | / / ___/ | /| / / __ `/ __/ ___/ __ \\/ _ \\/ ___/#\n";
    cout << "# / ___ |/ / /   | |/ |/ / /_/ / /_/ /__/ / / /  __/ /    #\n";
    cout << "#/_/  |_/_/_/    |__/|__/\\__,_/\\__/\\___/_/ /_/\\___/_/     #\n";
    cout << "###########################################################\n" << endl;
}

//------------------------------------------------- Surcharge d'opérateurs
Affichage & Affichage::operator = ( const Affichage & unAffichage )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Affichage::Affichage ( const Affichage & unAffichage )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Affichage>" << endl;
#endif
} //----- Fin de Affichage (constructeur de copie)


Affichage::Affichage ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Affichage>" << endl;
#endif
}

Affichage::~Affichage ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Affichage>" << endl;
#endif
} //----- Fin de ~Affichage


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
