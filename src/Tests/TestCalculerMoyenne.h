/*************************************************************************
                           TestCalculerMoyenne  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TestCalculerMoyenne> (fichier TestCalculerMoyenne.h) ----------------
#if ! defined ( TESTCALCULERMOYENNE )
#define TESTCALCULERMOYENNE

#include <string>
#include <tuple>
#include <vector>
#include "../Services/CalculerMoyenne.h"
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TestCalculerMoyenne>
//
//
//------------------------------------------------------------------------

class TestCalculerMoyenne
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void runTests();


//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur

    TestCalculerMoyenne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TestCalculerMoyenne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
private:
    CalculerMoyenne calcMoyenne;
    std::vector<std::tuple<double, double, int, std::string, std::string, int, std::string>> testCases;

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <TestCalculerMoyenne>

#endif // TESTCALCULERMOYENNE
