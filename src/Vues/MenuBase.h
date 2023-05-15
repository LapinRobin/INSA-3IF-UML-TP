/*************************************************************************
                           MenuBase  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <MenuBase> (fichier MenuBase.h) ----------------
#if ! defined ( MENUBASE_H )
#define MENUBASE_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <string>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <MenuBase>
//
//
//------------------------------------------------------------------------

class MenuBase
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void ajouterSousMenu(MenuBase*);

    MenuBase* getSousMenu(int choix);

//------------------------------------------------- Surcharge d'opérateurs
    MenuBase & operator = ( const MenuBase & unMenuBase );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    MenuBase ( const MenuBase & unMenuBase );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    MenuBase (  char* options, int nbOptions );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~MenuBase ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

std::vector<MenuBase*> sousMenus;
MenuBase* parent;
bool retour;
bool quitter;
std::string titre;
};

//-------------------------------- Autres définitions dépendantes de <MenuBase>

#endif // MENUBASE_H
