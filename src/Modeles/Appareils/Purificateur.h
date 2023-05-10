/*************************************************************************
                           Purificateur  -  description
                             -------------------
    début                : $2023$
    copyright            : (C) $2023$ par $CREMONA$
    e-mail               : $antoine.cremona@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <Purificateur> (fichier Purificateur.h) ----------------
#if ! defined ( PURIFICATEUR_H )
#define PURIFICATEUR_H

//--------------------------------------------------- Interfaces utilisées
#include "Appareil.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Purificateur>
//
//
//------------------------------------------------------------------------

class Purificateur : public Appareil
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


//-------------------------------------------- Constructeurs - destructeur

    Purificateur ( double uneLatitude, double uneLongitude, std::string unId, std::string dateDemarrage, std::string dateArret );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Purificateur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
//----------------------------------------------------- Attributs protégés
    std::string id;
    std::string demarrage;
    std::string arret;
};

//-------------------------------- Autres définitions dépendantes de <Purificateur>

#endif // PURIFICATEUR_H

