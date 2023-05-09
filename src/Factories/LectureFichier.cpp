//---------- Réalisation de la classe <LectureFichier> (fichier LectureFichier.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "LectureFichier.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type LectureFichier::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
LectureFichier & LectureFichier::operator = ( const LectureFichier & unLectureFichier )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
LectureFichier::LectureFichier ( const LectureFichier & unLectureFichier )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <LectureFichier>" << endl;
#endif
} //----- Fin de LectureFichier (constructeur de copie)


LectureFichier::LectureFichier ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <LectureFichier>" << endl;
#endif
} //----- Fin de LectureFichier


LectureFichier::~LectureFichier ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <LectureFichier>" << endl;
#endif
} //----- Fin de ~LectureFichier


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
