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
    // Mode d'emploi :
    // Lit le fichier csv des fournisseurs et le stocker dans la référence de la liste passée en paramètre
    // Contrat :
    // Aucun

    static void lireCapteurs( unordered_map<string,Capteur>& listeARemplir ) ;
    // Mode d'emploi :
    // Lit le fichier csv des capteurs et le stocker dans la référence de la liste passée en paramètre
    // Contrat :
    // Aucun

    static void lireUtilisateursPrives( unordered_map<string,UtilisateurPrive>& listeARemplir, const unordered_map<string,Capteur>& listeCapteurs ) ;
    // Mode d'emploi :
    // Lit le fichier csv des utilisateurs privés et le stocker dans la référence de la liste passée en paramètre
    // Contrat :
    // Aucun


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    LectureFichier ( );
    // Mode d'emploi :
    // Constructeur par défaut
    // Contrat :
    // Aucun

    virtual ~LectureFichier ( );
    // Mode d'emploi :
    // Destructeur
    // Contrat :
    // Aucun

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

    static void lirePurificateurs( unordered_map<string,Purificateur>& listeARemplir ) ;

    static void lireMesures( unordered_map<string,Capteur>& capteursAModifier ) ;
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <LectureFichier>

#endif // LECTUREFICHIER_H
