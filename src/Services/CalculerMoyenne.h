/*************************************************************************
                           CalculerMoyenne  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <CalculerMoyenne> (fichier CalculerMoyenne.h) ----------------
#if ! defined ( CALCULERMOYENNE_H )
#define CALCULERMOYENNE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CalculerMoyenne>
//
//
//------------------------------------------------------------------------

class CalculerMoyenne 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    int calculerMoyenne(double latitude, double longitude, int rayon, std::string t1, std::string t2);

    int calculerIndiceAtmo(double O3, double SO2, double NO2, double PM10);

//-------------------------------------------- Constructeurs - destructeur

    CalculerMoyenne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CalculerMoyenne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés


};

//-------------------------------- Autres définitions dépendantes de <CalculerMoyenne>

#endif // CALCULERMOYENNE_H
