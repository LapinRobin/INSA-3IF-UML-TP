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

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Acteur>
//
//
//------------------------------------------------------------------------

class Acteur 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    string getMdp();


//-------------------------------------------- Constructeurs - destructeur

    Acteur ( std::string unNom, std::string unMail, std::string unMdp);
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

std::string nom;
std::string mail;
std::string mdp;

};

//-------------------------------- Autres définitions dépendantes de <Acteur>

#endif // Acteur_H

