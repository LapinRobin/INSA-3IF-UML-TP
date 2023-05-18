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

//--------------------------------------------------- Interfaces utilisées
#include "../Modeles/Acteurs/UtilisateurPrive.h"
#include "../Modeles/Appareils/Capteur.h"
#include "../Modeles/Acteurs/Fournisseur.h"
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
    // 
    // Contrat :
    // Aucun

    static UtilisateurPrive* getUtilisateurPrive(std::string id);
    
    static Fournisseur* getFournisseur(std::string id);

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

    static Capteur& getCapteurById(std::string id);


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

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
    static std::unordered_map<std::string, Capteur> capteurs;
    static std::unordered_map<std::string, UtilisateurPrive> utilisateursPrives;
    static std::unordered_map<std::string, Fournisseur> fournisseurs;
    
//----------------------------------------------------- Attributs protégés
    
};

//-------------------------------- Autres définitions dépendantes de <Stockage>

#endif // STOCKAGE_H
