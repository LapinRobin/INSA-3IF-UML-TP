/*************************************************************************
                           TestCalculerMoyenne  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TestCalculerMoyenne> (fichier TestCalculerMoyenne.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <cassert>
#include <iostream>
#include <chrono>

//------------------------------------------------------ Include personnel
#include "TestCalculerMoyenne.h"



//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TestCalculerMoyenne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void TestCalculerMoyenne::runTests() {
    cout << "TESTS CALCULER MOYENNE :"<<endl;
    for (auto& test : testCases) {
        auto start = std::chrono::high_resolution_clock::now();
        int output = calcMoyenne.calculerMoyenne(std::get<0>(test), std::get<1>(test), std::get<2>(test), std::get<3>(test), std::get<4>(test));
        auto end = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double> elapsed = end - start;
        std::cout << "Test: " << std::get<6>(test) << std::endl;

        assert(output == std::get<5>(test) && "Test failed");

        std::cout << "Test passed. Execution time: " << elapsed.count() << " s\n";
    }
}


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur


TestCalculerMoyenne::TestCalculerMoyenne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TestCalculerMoyenne>" << endl;
#endif
    testCases = {
        
        // entrees valides
        {0.0, 1.2, 100, "2019-01-01 12:00:00", "2019-01-03 12:00:00", 5, "entrees valides"},

        // cas ou pas de capteurs dans la region
        {1.0, 2.0, 100, "2023-06-01 12:00:00", "2023-06-02 12:00:00", -1, "pas de capteurs dans la region"},

        // cas ou pas de donnees dans la periode
        {0.0, 1.2, 100, "2019-01-04 12:00:00", "2019-01-05 12:00:00", -3, "pas de donnees dans la periode"},

        // periode invalide
        {0.0, 1.2, 100, "2019-01-05 12:00:00", "2019-01-04 12:00:00", -2, "periode invalide"},

        // cas ou rayon == 0 et capteur dans la region
        {0.0, 1.3, 0, "2019-01-01 12:00:00", "2019-01-02 12:00:00", 4, "rayon == 0 et capteur dans la region"},


        // cas ou rayon == 0 et pas de capteur dans la region
        {0.0, 1.2, 0, "2019-01-01 12:00:00", "2019-01-02 12:00:00", -1, "rayon == 0 et pas de capteur dans la region"}
    

    };
} //----- Fin de TestCalculerMoyenne


TestCalculerMoyenne::~TestCalculerMoyenne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TestCalculerMoyenne>" << endl;
#endif
} //----- Fin de ~TestCalculerMoyenne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
