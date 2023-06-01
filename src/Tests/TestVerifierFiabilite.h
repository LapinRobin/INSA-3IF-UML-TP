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


//------------------------------------------------- Surcharge d'opérateurs
    TestVerifierFiabilite & operator = ( const TestVerifierFiabilite & unTestVerifierFiabilite );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    TestVerifierFiabilite ( const TestVerifierFiabilite & unTestVerifierFiabilite );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

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

};

//-------------------------------- Autres définitions dépendantes de <TestVerifierFiabilite>

#endif // TESTVERIFIERFIABILITE_H
