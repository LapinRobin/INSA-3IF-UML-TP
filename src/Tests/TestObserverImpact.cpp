/*************************************************************************
                           TestObserverImpact  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TestObserverImpact> (fichier TestObserverImpact.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cassert>
#include <chrono>

//------------------------------------------------------ Include personnel
#include "TestObserverImpact.h"
#include "../Services/ObserverImpact.h"
#include "../Modeles/Appareils/Purificateur.h"
#include "../Modeles/Appareils/Capteur.h"
#include "../Util/Stockage.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TestObserverImpact::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void TestObserverImpact::runTests ( )
// Algorithme :
//
{
    ObserverImpact oi;
    vector<Capteur> capteurs;
    Stockage::getCapteurs(capteurs);
    float rayon;
    vector<Purificateur> lp;
    
    cout<<"TEST OBSERVER IMPACT PURIFICATEUR"<<endl<<endl;

    cout<<"Test 1, purificateur non fonctionnel : "<<endl;
    Stockage::getPurificateursFromFournisseur("ProviderTest1", lp);
    auto start1 = std::chrono::high_resolution_clock::now();
    rayon = oi.observerImpact(capteurs, lp[0]);
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = end1 - start1;
    assert(rayon == 0 && "Test Observer Impact 1 failed");
    cout<<"   Test 1 validé, rayon = 0. Durée : "<< elapsed1.count() << "s" << endl;
    cout<<endl;
    cout<<"Test 2, purificateur fonctionnel : "<<endl;
    Stockage::getPurificateursFromFournisseur("ProviderTest2", lp);
    auto start2 = std::chrono::high_resolution_clock::now();
    rayon = oi.observerImpact(capteurs, lp[0]);
    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed2 = end2 - start2;
    assert(rayon < 23 && rayon > 22 && "Test Observer Impact 2 failed");
    cout<<"   Test 2 validé, rayon = " << rayon << ". Durée : "<< elapsed2.count() << "s" << endl;
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur


TestObserverImpact::TestObserverImpact ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TestObserverImpact>" << endl;
#endif
} //----- Fin de TestObserverImpact


TestObserverImpact::~TestObserverImpact ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TestObserverImpact>" << endl;
#endif
} //----- Fin de ~TestObserverImpact


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
