/*************************************************************************
                           UtilisateurPrive  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <UtilisateurPrive> (fichier UtilisateurPrive.h) ----------------
#if ! defined ( UtilisateurPrive_H )
#define UtilisateurPrive_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <UtilisateurPrive>
//
//
//------------------------------------------------------------------------

class UtilisateurPrive : 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //



//-------------------------------------------- Constructeurs - destructeur
    UtilisateurPrive ( const UtilisateurPrive & unUtilisateurPrive );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    UtilisateurPrive ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~UtilisateurPrive ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

String idUtilisateur;
Vector<Capteur> capteurs;
int points;

};

//-------------------------------- Autres définitions dépendantes de <UtilisateurPrive>

#endif // UtilisateurPrive_H

