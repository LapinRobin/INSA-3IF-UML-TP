/*************************************************************************
                           Appareil  -  description
                             -------------------
    début                : $2023$
    copyright            : (C) $2023$ par $CREMONA$
    e-mail               : $antoine.cremona@gmail.com$
*************************************************************************/

//---------- Interface de la classe <Appareil> (fichier Appareil.h) ----------------
#if ! defined ( APPAREIL_H )
#define APPAREIL_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Appareil>
//
//
//------------------------------------------------------------------------

class Appareil
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    double CalculerDistance ( const Appareil & appareil );
    // Mode d'emploi :
    //
    // Contrat :
    //

    double CalculerDistance ( double latitude, double longitude );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    Appareil & operator = ( const Appareil & unAppareil );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Appareil ( const Appareil & unAppareil );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Appareil ( double uneLatitude, double uneLongitude)
            : latitude(uneLatitude), longitude(uneLongitude)
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Appareil ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    double latitude;
    double longitude;
};

//-------------------------------- Autres définitions dépendantes de <Appareil>

#endif // APPAREIL_H

