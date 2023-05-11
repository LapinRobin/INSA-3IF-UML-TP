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
#include "../Util/Stockage.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques


Acteur* GestionActeurs::authentifier(string unId, string unMdp)
{
    // vérifier si l'utilisateur existe dans la base de données
    UtilisateurPrive* user = Stockage::getUtilisateurPrive(unId);
    if (user != nullptr && user->getMdp() == unMdp)
    {
        return user;
    }

    // vérifier si le fournisseur existe dans la base de données
    Fournisseur* provider = Stockage::getFournisseur(unId);
    if (provider != nullptr && provider->getMdp() == unMdp)
    {
        return provider;
    }

    // retourner null Acteur si pas trouvé
    return nullptr;
}


bool GestionActeurs::inscrire(Acteur unActeur)
{
    // TODO
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
