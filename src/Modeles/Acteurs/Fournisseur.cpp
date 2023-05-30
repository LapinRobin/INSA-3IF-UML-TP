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

//------------------------------------------------------ Include personnel
#include "Fournisseur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Fournisseur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Fournisseur::ajouterPurificateur(const Purificateur & unPurificateur)
// Algorithme :
// Ajoute un purificateur au fournisseur

{
    purificateurs.push_back(unPurificateur);
}

void Fournisseur::getPurificateurs(vector<Purificateur> & vect_purificateur)
{
    vect_purificateur = purificateurs;
}

//------------------------------------------------- Surcharge d'opérateurs

ostream& operator<<(ostream& os,const Fournisseur& four)
{
    os << "IdFournisseur : " << four.nom << "Mail : " << four.mail << "Purificateurs :" << endl;
    for (int i=0;i<(int)four.purificateurs.size();++i)
    {
        os << four.purificateurs[i] << ", ";
    }
    return os;
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

