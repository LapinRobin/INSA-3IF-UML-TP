/*************************************************************************
                           Affichage  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Affichage> (fichier Affichage.h) ----------------
#if ! defined ( AFFICHAGE_H )
#define AFFICHAGE_H

//--------------------------------------------------- Interfaces utilisées
#include <map>


//------------------------------------------------------------------ Types

struct OptionMenu
{
    const char* texte;
    Menu* (*action)();
};
typedef std::map<char,OptionMenu> Menu;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------------
// Rôle de la classe <Affichage>
//
//
//------------------------------------------------------------------------

class Affichage
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    static void afficherTitre();

    static Menu* se_connecter();

    static Menu* s_inscrire();

    void gererMenu(Menu* menu);

    static Menu* setDoitQuitter();

    static void effacerConsole();

//------------------------------------------------- Surcharge d'opérateurs
    Affichage & operator = ( const Affichage & unAffichage );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Affichage ( const Affichage & unAffichage );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Affichage ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Affichage ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
static bool doitQuiter;
};

//-------------------------------- Autres définitions dépendantes de <Affichage>

#endif // AFFICHAGE_H
