//---------- Réalisation de la classe <stockage> (fichier stockage.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <unordered_map>
#include <vector>


//------------------------------------------------------ Include personnel
#include "Stockage.h"
#include "LectureFichier.h"

//------------------------------------------------------------- Constantes

std::unordered_map<std::string, Capteur> Stockage::capteurs;
std::unordered_map<std::string, UtilisateurPrive> Stockage::utilisateursPrives;
std::unordered_map<std::string, Fournisseur> Stockage::fournisseurs;

//----------------------------------------------------------------- PUBLIC
//----------------------------------------------------- Méthodes publiques
// type Stockage::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Stockage::initialiser()
{
    LectureFichier::lireCapteurs(capteurs);

    LectureFichier::lireUtilisateursPrives(utilisateursPrives, capteurs);

    LectureFichier::lireFournisseurs(fournisseurs);
}

void Stockage::getCapteurs(std::vector<Capteur> &vect_capteurs)
// Algorithme :
// Passer par référence un vecteur de capteurs
// 
{ 
    
    // pass the values of private attribute capteurs to the reference vector
    for (auto it = capteurs.begin(); it != capteurs.end(); ++it)
    {
        vect_capteurs.push_back(it->second);
    }
    
    
    
} //----- Fin de Méthode


void Stockage::getUtilisateursPrives(std::vector<UtilisateurPrive> &vect_utilisateursPrives)
// Algorithme :
// Passer par référence un vecteur d'utilisateurs privés
// Retourner un booléen pour savoir si la requête a fonctionné
{
    // pass the values of private attribute utilisateursPrives to the reference vector
    for (auto it = utilisateursPrives.begin(); it != utilisateursPrives.end(); ++it)
    {
        vect_utilisateursPrives.push_back(it->second);
    }

} //----- Fin de Méthode

void Stockage::getFournisseurs(std::vector<Fournisseur> &vect_fournisseurs)
// Algorithme :
// Passer par référence un vecteur de fournisseurs
// Retourner un booléen pour savoir si la requête a fonctionné
{
    // pass the values of private attribute fournisseurs to the reference vector
    for (auto it = fournisseurs.begin(); it != fournisseurs.end(); ++it)
    {
        vect_fournisseurs.push_back(it->second);
    }
} //----- Fin de Méthode



//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

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
