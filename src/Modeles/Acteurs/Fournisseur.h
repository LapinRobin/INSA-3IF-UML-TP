/*************************************************************************
                           Fournisseur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Fournisseur> (fichier Fournisseur.h) ----------------
#if ! defined ( Fournisseur_H )
#define Fournisseur_H

//--------------------------------------------------- Interfaces utilisées
#include "Acteur.h"
#include <vector>
#include "../Appareils/Purificateur.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Fournisseur>
//
//
//------------------------------------------------------------------------

class Fournisseur : public Acteur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void ajouterPurificateur(const Purificateur & unPurificateur);


//-------------------------------------------- Constructeurs - destructeur

    Fournisseur ( std::string unNom, std::string unMail, std::string unMdp, std::string unId, std::vector<Purificateur> desPurificateurs);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Fournisseur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    std::string idFournisseur;
    std::vector<Purificateur> purificateurs;

};

//-------------------------------- Autres définitions dépendantes de <Fournisseur>

#endif // Fournisseur_H

