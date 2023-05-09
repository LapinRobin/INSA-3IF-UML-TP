//---------- Réalisation de la classe <stockage> (fichier stockage.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Stockage.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Stockage::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Stockage & Stockage::operator = ( const Stockage & unStockage )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Stockage::Stockage ( const Stockage & unStockage )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Stockage>" << endl;
#endif
} //----- Fin de Stockage (constructeur de copie)


Stockage::Stockage ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Stockage>" << endl;
#endif
} //----- Fin de Stockage


Stockage::~Stockage ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Stockage>" << endl;
#endif
} //----- Fin de ~Stockage


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
