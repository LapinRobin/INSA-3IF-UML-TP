/*************************************************************************
                           Capteur  -  description
                             -------------------
    début                : $2023$
    copyright            : (C) $2023$ par $CREMONA$
    e-mail               : $antoine.cremona@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <Capteur> (fichier Capteur.h) ----------------
#if ! defined ( CAPTEUR_H )
#define CAPTEUR_H

//--------------------------------------------------- Interfaces utilisées
#include "Appareil.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Capteur>
//
//
//------------------------------------------------------------------------

class Capteur : public Appareil
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
    Capteur & operator = ( const Capteur & unCapteur );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Capteur ( const Capteur & unCapteur );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Capteur ( string unId, bool estFonctionnel = true );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Capteur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
    string id;
    bool fonctionnel;
    unordered_map<string, float> o3;
    unordered_map<string, float> so2;
    unordered_map<string, float> no2;
    unordered_map<string, float> pm10;
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Capteur>

#endif // CAPTEUR_H

