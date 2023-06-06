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
    // Retourne la mesure de O3 à une date donnée
    // Contrat :
    // La date doit être valide

    float getMesureSo2 ( const std::string& date ) const;
    // Mode d'emploi :
    // Retourne la mesure de So2 à une date donnée
    // Contrat :
    // La date doit être valide

    float getMesureNo2( const std::string& date ) const;
    // Mode d'emploi :
    // Retourne la mesure de No2 à une date donnée
    // Contrat :
    // La date doit être valide

    float getMesurePm10 ( const std::string& date ) const;
    // Mode d'emploi :
    // Retourne la mesure de Pm10 à une date donnée
    // Contrat :
    // La date doit être valide

    bool estFonctionnel ( ) const;
    // Mode d'emploi :
    // Retourne vrai si le capteur est fonctionnel
    // Contrat :
    // Aucun

    void setFonctionnel ( bool estFonctionnel );
    // Mode d'emploi :
    // Set la valeur de l'attribut fonctionnel à estFonctionnel
    // Contrat :
    // Aucun

    std::vector<std::string> getDates ( ) const;
    // Mode d'emploi :
    // Retourne un vecteur contenant toutes les dates pour lesquelles on a des mesures
    // Contrat :
    // Aucun

    bool ajouterMesure( const std::string& date, const float& mesure, const std::string& type );
    // Mode d'emploi :
    // Ajoute une mesure à la date donnée
    // Contrat :
    // La date doit être valide, la mesure doit être positive, et le type doit être valide


//------------------------------------------------- Surcharge d'opérateurs

friend std::ostream& operator<<(std::ostream& os, const Capteur& capteur);

bool operator!=(const Capteur& capteur)const;


//-------------------------------------------- Constructeurs - destructeur

    Capteur ( double uneLatitude, double uneLongitude, const std::string& unId, bool estFonctionnel = true );
    // Mode d'emploi :
    // Constructeur d'un capteur
    // Contrat :
    // Les paramètres doivent être valides

    virtual ~Capteur ( );
    // Mode d'emploi :
    // Destructeur d'un capteur
    // Contrat :
    // Aucun


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

