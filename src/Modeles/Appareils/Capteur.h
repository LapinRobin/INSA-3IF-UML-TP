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
#include <string>
#include <unordered_map>
#include <vector>
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

    float getMesureO3 ( string date );
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesureSo2 ( string date );
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesureNo2( string date );
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesurePm10 ( string date );
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool estFonctionnel ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<string> getDates ( );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur

    Capteur ( double uneLatitude, double uneLongitude, string unId, bool estFonctionnel = true );
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
    
//----------------------------------------------------- Attributs protégés
    string id;
    bool fonctionnel;
    unordered_map<string, float> o3;
    unordered_map<string, float> so2;
    unordered_map<string, float> no2;
    unordered_map<string, float> pm10;
};

//-------------------------------- Autres définitions dépendantes de <Capteur>

#endif // CAPTEUR_H

