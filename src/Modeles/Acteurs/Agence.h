/*************************************************************************
                           Agence  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Agence> (fichier Agence.h) ----------------
#if ! defined ( Agence_H )
#define Agence_H

//--------------------------------------------------- Interfaces utilisées
#include "Acteur.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Agence>
//
//
//------------------------------------------------------------------------

class Agence : public Acteur
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

friend std::ostream& operator<<(std::ostream& os,const Agence& ag);

//-------------------------------------------- Constructeurs - destructeur

    Agence (std::string unNom, std::string unMail, std::string unMdp );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Agence ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Agence>

#endif // Agence_H

