/*************************************************************************
                           TestVerifierFiabilite  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TestVerifierFiabilite> (fichier TestVerifierFiabilite.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TestVerifierFiabilite.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TestVerifierFiabilite::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
TestVerifierFiabilite & TestVerifierFiabilite::operator = ( const TestVerifierFiabilite & unTestVerifierFiabilite )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
TestVerifierFiabilite::TestVerifierFiabilite ( const TestVerifierFiabilite & unTestVerifierFiabilite )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TestVerifierFiabilite>" << endl;
#endif
} //----- Fin de TestVerifierFiabilite (constructeur de copie)


TestVerifierFiabilite::TestVerifierFiabilite ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TestVerifierFiabilite>" << endl;
#endif
} //----- Fin de TestVerifierFiabilite


TestVerifierFiabilite::~TestVerifierFiabilite ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TestVerifierFiabilite>" << endl;
#endif
} //----- Fin de ~TestVerifierFiabilite


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
