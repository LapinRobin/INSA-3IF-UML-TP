/*************************************************************************
                           UtilisateurPrive  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <UtilisateurPrive> (fichier UtilisateurPrive.h) ----------------
#if ! defined ( UtilisateurPrive_H )
#define UtilisateurPrive_H

//--------------------------------------------------- Interfaces utilisées
#include "Acteur.h"
#include "../Appareils/Capteur.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <UtilisateurPrive>
//
//
//------------------------------------------------------------------------

class UtilisateurPrive : public Acteur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void ajouterCapteur(const Capteur& unCapteur);



//-------------------------------------------- Constructeurs - destructeur

    UtilisateurPrive ( std::string unNom, std::string unMail, std::string unMdp, std::string unId, std::vector<Capteur> desCapteurs);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~UtilisateurPrive ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

std::string idUtilisateur;
std::vector<Capteur> capteurs;
int points;

};

//-------------------------------- Autres définitions dépendantes de <UtilisateurPrive>

#endif // UtilisateurPrive_H

