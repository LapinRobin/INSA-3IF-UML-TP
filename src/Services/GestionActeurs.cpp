/*************************************************************************
                           GestionActeurs  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <GestionActeurs> (fichier GestionActeurs.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>


//------------------------------------------------------ Include personnel
#include "GestionActeurs.h"
#include "../Modeles/Acteurs/Acteur.h"
#include "../Modeles/Acteurs/UtilisateurPrive.h"
#include "../Modeles/Acteurs/Fournisseur.h"
#include "../Modeles/Acteurs/Agence.h"
#include "Stockage.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

Acteur GestionActeurs::authentifier(string unMail, string unMdp)
{
    // vérifier si l'utilisateur existe dans la base de données
    auto userIt = Stockage::utilisateursPrives.find(unMail);
    if (userIt != Stockage::utilisateursPrives.end() && userIt->second.getMdp() == unMdp)
    {
        return userIt->second;
    }

    // vérifier si l'agence existe dans la base de données
    auto providerIt = Stockage::fournisseurs.find(unMail);
    if (providerIt != Stockage::fournisseurs.end() && providerIt->second.getMdp() == unMdp)
    {
        return providerIt->second;
    }

    // retourner null Acteur si pas trouvé
    return Acteur::Acteur();
}



bool GestionActeurs::inscrire(Acteur unActeur)
{
    // TODO
    return false;
}





//-------------------------------------------- Constructeurs - destructeur

GestionActeurs::GestionActeurs ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <GestionActeurs>" << endl;
#endif
} //----- Fin de GestionActeurs


GestionActeurs::~GestionActeurs ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <GestionActeurs>" << endl;
#endif
} //----- Fin de ~GestionActeurs


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
