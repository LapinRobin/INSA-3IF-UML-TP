/*************************************************************************
                           Agence  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Agence> (fichier Agence.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Agence.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Agence::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//------------------------------------------------- Surcharge d'opérateurs

ostream& operator<<(ostream& os,const Agence& ag)
{
    os << "Nom : " << ag.nom << "Mail : " << ag.mail << endl;
    return os;
}

//-------------------------------------------- Constructeurs - destructeur


Agence::Agence (string unNom, string unMail, string unMdp )
    : Acteur(unNom, unMail, unMdp)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Agence>" << endl;
#endif
} //----- Fin de Agence


Agence::~Agence ( )
    
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Agence>" << endl;
#endif
} //----- Fin de ~Agence


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

