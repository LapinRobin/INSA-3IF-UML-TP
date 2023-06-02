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
#include <cassert>
#include <iostream>
#include <chrono>

//------------------------------------------------------ Include personnel
#include "TestVerifierFiabilite.h"
#include "../Util/Stockage.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void TestVerifierFiabilite::runTests ( )
// Algorithme :
//
{
    cout << "TESTS VERIFIER FIABILITE :" << endl;
    cout << "Test 1 : Capteur avec des données identiques aux capteurs voisins" << endl;
    Capteur capteur1 = Stockage::getCapteurById("SensorTestVerifierFiabilite1");
    auto start1 = std::chrono::high_resolution_clock::now();
    double taux1 = verifFiab.calculerTauxErreur(capteur1);
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = end1 - start1;
    assert(taux1 == 1 && "Test Vérifier Fiabilité 1 failed");
    cout << "   Test 1 passé : Taux = 1. Durée : "<< elapsed1.count() << endl;

    cout << "Test 2 : Capteur avec des données différentes des capteurs voisins" << endl;
    Capteur capteur2 = Stockage::getCapteurById("SensorTestVerifierFiabilite2");
    auto start2 = std::chrono::high_resolution_clock::now();
    double taux2 = verifFiab.calculerTauxErreur(capteur1);
    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed2 = end2 - start2;
    assert(taux2 == 0 && "Test Vérifier Fiabilité 2 failed");
    cout << "   Test 2 passé : Taux = 0. Durée : "<< elapsed2.count() << endl;
    
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur


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
