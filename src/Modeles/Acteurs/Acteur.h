/*************************************************************************
                           Acteur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Acteur> (fichier Acteur.h) ----------------
#if ! defined ( Acteur_H )
#define Acteur_H

//--------------------------------------------------- Interfaces utilisées
#include <cstring>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Acteur>
//
//
//------------------------------------------------------------------------

class Acteur : 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //



//-------------------------------------------- Constructeurs - destructeur
    Acteur ( const Acteur & unActeur );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Acteur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Acteur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

String nom;
String mail;
String mdp;

};

//-------------------------------- Autres définitions dépendantes de <Acteur>

#endif // Acteur_H

