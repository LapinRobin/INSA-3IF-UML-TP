/*************************************************************************
                           LectureFichier  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <LectureFichier> (fichier LectureFichier.h) ----------------
#if ! defined ( LECTUREFICHIER_H )
#define LECTUREFICHIER_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <LectureFichier>
//
//
//------------------------------------------------------------------------

class LectureFichier
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
    LectureFichier & operator = ( const LectureFichier & unLectureFichier );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    LectureFichier ( const LectureFichier & unLectureFichier );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    LectureFichier ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~LectureFichier ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <LectureFichier>

#endif // LECTUREFICHIER_H
