/*************************************************************************
                           Stockage  -  description
                             -------------------
    début                : 2023
    copyright            : (C) 2023 par $AUTHOR$
    e-mail               : 
*************************************************************************/

//---------- Interface de la classe <LectureFichier> (fichier LectureFichier.h) ----------------
#if ! defined ( LECTUREFICHIER_H )
#define LECTUREFICHIER_H

//--------------------------------------------------- Interfaces utilisées

#include "../Modeles/Acteurs/Acteur.h"
#include "../Modeles/Acteurs/Fournisseur.h"
#include "../Modeles/Acteurs/Agence.h"
#include "../Modeles/Acteurs/UtilisateurPrive.h"
#include "../Modeles/Appareils/Capteur.h"
#include "../Modeles/Appareils/Purificateur.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <LectureFichier>
//
//
//------------------------------------------------------------------------

class LectureFichier
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    static void lireFournisseurs( unordered_map<string,Fournisseur>& listeARemplir ) ;

    static void lireCapteurs( unordered_map<string,Capteur>& listeARemplir ) ;

    static void lireUtilisateursPrive( unordered_map<string,UtilisateurPrive>& listeARemplir ) ;
    
    static void lirePurificateurs( unordered_map<string,Fournisseur>& fournisseursAModifier ) ;

    static void lireMesure( unordered_map<string,Capteur>& capteursAModifier ) ;

//------------------------------------------------- Surcharge d'opérateurs
    LectureFichier & operator = ( const LectureFichier & unLectureFichier );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    LectureFichier ( const LectureFichier & unLectureFichier );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    LectureFichier ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~LectureFichier ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <LectureFichier>

#endif // LECTUREFICHIER_H
