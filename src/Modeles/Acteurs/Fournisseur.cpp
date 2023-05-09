/*************************************************************************
                           Fournisseur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Fournisseur> (fichier Fournisseur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <vector>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Fournisseur.h"
#include "../Appareils/Purificateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Fournisseur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Fournisseur::ajouterPurificateur(const Purificateur & unPurificateur)
{
    purificateurs.push_back(unPurificateur);
}

//-------------------------------------------- Constructeurs - destructeur

Fournisseur::Fournisseur ( string unNom, string unMail, string unMdp, string unId, vector<Purificateur> desPurificateurs)
    :Acteur(unNom, unMail, unMdp), idFournisseur(unId), purificateurs(desPurificateurs)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Fournisseur>" << endl;
#endif
} //----- Fin de Fournisseur


Fournisseur::~Fournisseur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Fournisseur>" << endl;
#endif
} //----- Fin de ~Fournisseur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

