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

    double getLatitude() const;
    // Mode d'emploi :
    // retourner la latitude de l'appareil
    // Contrat :
    // Non

    double getLongitude() const;
    // Mode d'emploi :
    // retourner la longitude de l'appareil
    // Contrat :
    // Non

    double calculerDistance ( const Appareil & appareil ) const;
    // Mode d'emploi :
    // Calcul de la distance entre l'appareil et un autre appareil
    // Contrat :
    // L'appareil doit être valide

    double calculerDistance ( double latitude, double longitude ) const;
    // Mode d'emploi :
    // Calcul de la distance entre l'appareil et un point de coordonnées données
    // Contrat :
    // Les coordonnées doivent être valides


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur


    Appareil ( double uneLatitude, double uneLongitude);
    // Mode d'emploi :
    // Constructeur de la classe Appareil
    // Contrat :
    // Les coordonnées doivent être valides

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

