/*************************************************************************
                           Purificateur  -  description
                             -------------------
    début                : $2023$
    copyright            : (C) $2023$ par $CREMONA$
    e-mail               : $antoine.cremona@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <Purificateur> (fichier Purificateur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Purificateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Purificateur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

string Purificateur::getId (  ) const
// Algorithme :
//
{
    return id;
} //----- Fin de Méthode

string Purificateur::getDemarrage (  ) const
// Algorithme :
//
{
    return demarrage;
} //----- Fin de Méthode

string Purificateur::getArret (  ) const
// Algorithme :
//
{
    return arret;
} //----- Fin de Méthode

//------------------------------------------------- Surcharge d'opérateurs

ostream& operator<<(ostream& os,const Purificateur& purif)
{
    return os << "Id : " << purif.id << " Latitude : " << purif.latitude << " Longitude : " << purif.longitude << " Date départ : " << purif.demarrage << " Date fin : " << purif.arret;
}

//-------------------------------------------- Constructeurs - destructeur


Purificateur::Purificateur ( double uneLatitude, double uneLongitude, string unId, string dateDemarrage, string dateArret)
        : Appareil(uneLatitude, uneLongitude), id(unId), demarrage(dateDemarrage), arret(dateArret)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Purificateur>" << endl;
#endif
} //----- Fin de Purificateur


Purificateur::~Purificateur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Purificateur>" << endl;
#endif
} //----- Fin de ~Purificateur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

