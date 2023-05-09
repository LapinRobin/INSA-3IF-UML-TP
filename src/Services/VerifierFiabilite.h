/*************************************************************************
                           VerifierFiabilite  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <VerifierFiabilite> (fichier VerifierFiabilite.h) ----------------
#if ! defined ( VerifierFiabilite_H )
#define VerifierFiabilite_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <VerifierFiabilite>
//
//
//------------------------------------------------------------------------

class VerifierFiabilite 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    double CalculerTauxErreur ( const Capteur & capteur );
    // Mode d'emploi :
    //
    // Contrat :
    //



//-------------------------------------------- Constructeurs - destructeur

    VerifierFiabilite ( string unNom, string unMail, string unMdp, string unId, vector<Capteur> desCapteurs);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~VerifierFiabilite ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

string idUtilisateur;
vector<Capteur> capteurs;
int points;

};

//-------------------------------- Autres définitions dépendantes de <VerifierFiabilite>

#endif // VerifierFiabilite_H

