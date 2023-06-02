/*************************************************************************
                           TestVerifierFiabilite  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TestVerifierFiabilite> (fichier TestVerifierFiabilite.h) ----------------
#if ! defined ( TESTVERIFIERFIABILITE_H )
#define TESTVERIFIERFIABILITE_H

//--------------------------------------------------- Interfaces utilisées
#include "../Services/VerifierFiabilite.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TestVerifierFiabilite>
//
//
//------------------------------------------------------------------------

class TestVerifierFiabilite
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
    TestVerifierFiabilite ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TestVerifierFiabilite ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
    

//----------------------------------------------------- Attributs protégés
    VerifierFiabilite verifFiab;
};

//-------------------------------- Autres définitions dépendantes de <TestVerifierFiabilite>

#endif // TESTVERIFIERFIABILITE_H
