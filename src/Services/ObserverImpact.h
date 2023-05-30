/*************************************************************************
                           ObserverImpact  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <ObserverImpact> (fichier ObserverImpact.h) ----------------
#if ! defined ( OBSERVERIMPACT_H )
#define OBSERVERIMPACT_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include "../Modeles/Appareils/Purificateur.h"
#include "../Modeles/Appareils/Capteur.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ObserverImpact>
//
//
//------------------------------------------------------------------------

class ObserverImpact 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    float observerImpact(std::vector<Capteur>& sensors, const Purificateur& p);

//-------------------------------------------- Constructeurs - destructeur

    ObserverImpact ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ObserverImpact ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés


};

//-------------------------------- Autres définitions dépendantes de <ObserverImpact>

#endif // OBSERVERIMPACT_H
