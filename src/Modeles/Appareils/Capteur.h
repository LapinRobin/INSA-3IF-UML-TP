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
#include <unordered_map>
#include <vector>
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

    float getMesureO3 ( const string& date ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesureSo2 ( const string& date ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesureNo2( const string& date ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesurePm10 ( const string& date ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool estFonctionnel ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<string> getDates ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool ajouterMesure( const string& date, const float& mesure, const string& type );

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur

    Capteur ( double uneLatitude, double uneLongitude, const string& unId, bool estFonctionnel = true );
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
    std::unordered_map<string, float> o3;
    std::unordered_map<string, float> so2;
    std::unordered_map<string, float> no2;
    std::unordered_map<string, float> pm10;
};

//-------------------------------- Autres définitions dépendantes de <Capteur>

#endif // CAPTEUR_H

