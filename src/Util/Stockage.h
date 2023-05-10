/*************************************************************************
                           Stockage  -  description
                             -------------------
    début                : 2023
    copyright            : (C) 2023 par $AUTHOR$
    e-mail               : 
*************************************************************************/

//---------- Interface de la classe <Stockage> (fichier Stockage.h) ----------------
#if ! defined ( STOCKAGE_H )
#define STOCKAGE_H

#include "../Modeles/Acteurs/UtilisateurPrive.h"
#include "../Modeles/Appareils/Capteur.h"
#include "../Modeles/Acteurs/Fournisseur.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Stockage>
//
//
//------------------------------------------------------------------------

class Stockage
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    static void initialiser();

    static void getCapteurs(std::vector<Capteur> &vect_capteurs);
    // Mode d'emploi :
    // Passer par référence un vector pour le remplir avec les capteurs
    // Retourne true si le vector est rempli, false sinon
    // Contrat :
    // Aucun




    static void getUtilisateursPrives(std::vector<UtilisateurPrive> &vect_utilisateursPrives);
    // Mode d'emploi :
    // Passer par référence un vector pour le remplir avec les utilisateurs privés
    // Contrat :
    // Aucun


    static void getFournisseurs(std::vector<Fournisseur> &vect_fournisseurs);
    // Mode d'emploi :
    // Passer par référence un vector pour le remplir avec les fournisseurs
    // Contrat :
    // Aucun



//------------------------------------------------- Surcharge d'opérateurs
    Stockage & operator = ( const Stockage & unStockage );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Stockage ( const Stockage & unStockage );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Stockage ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Stockage ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

private:
    static std::unordered_map<std::string, Capteur> capteurs;
    static std::unordered_map<std::string, UtilisateurPrive> utilisateursPrives;
    static std::unordered_map<std::string, Fournisseur> fournisseurs;
};

//-------------------------------- Autres définitions dépendantes de <Stockage>

#endif // STOCKAGE_H
