/*************************************************************************
                           Fournisseur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Fournisseur> (fichier Fournisseur.h) ----------------
#if ! defined ( Fournisseur_H )
#define Fournisseur_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Fournisseur>
//
//
//------------------------------------------------------------------------

class Fournisseur : public Acteur
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
    Fournisseur ( const Fournisseur & unFournisseur );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Fournisseur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Fournisseur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

String idFournisseur;
Vector<Purificateur> purificateurs;

};

//-------------------------------- Autres définitions dépendantes de <Fournisseur>

#endif // Fournisseur_H

