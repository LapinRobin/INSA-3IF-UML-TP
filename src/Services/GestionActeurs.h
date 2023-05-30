/*************************************************************************
                           GestionActeurs  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <GestionActeurs> (fichier GestionActeurs.h) ----------------
#if ! defined ( GESTIONACTEURS_H )
#define GESTIONACTEURS_H
#include "../Modeles/Acteurs/Acteur.h"
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <GestionActeurs>
//
//
//------------------------------------------------------------------------

class GestionActeurs 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    Acteur* authentifier(std::string mail, std::string mdp);


//-------------------------------------------- Constructeurs - destructeur

    GestionActeurs ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~GestionActeurs ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés


};

//-------------------------------- Autres définitions dépendantes de <GestionActeurs>

#endif // GESTIONACTEURS_H
