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

    float getMesureO3 ( const std::string& date ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesureSo2 ( const std::string& date ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesureNo2( const std::string& date ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    float getMesurePm10 ( const std::string& date ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool estFonctionnel ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    std::vector<std::string> getDates ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool ajouterMesure( const std::string& date, const float& mesure, const std::string& type );

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur

    Capteur ( double uneLatitude, double uneLongitude, const std::string& unId, bool estFonctionnel = true );
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
    std::string id;
    bool fonctionnel;
    std::unordered_map<std::string, float> o3;
    std::unordered_map<std::string, float> so2;
    std::unordered_map<std::string, float> no2;
    std::unordered_map<std::string, float> pm10;
};

//-------------------------------- Autres définitions dépendantes de <Capteur>

#endif // CAPTEUR_H

