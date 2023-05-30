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
#include "../Modeles/Acteurs/Agence.h"

//------------------------------------------------------------- Constantes

std::unordered_map<std::string, Capteur> Stockage::capteurs;
std::unordered_map<std::string, UtilisateurPrive> Stockage::utilisateursPrives;
std::unordered_map<std::string, Fournisseur> Stockage::fournisseurs;
Agence Stockage::agence("agence", "agence@gmail.com", "mdp");

//----------------------------------------------------------------- PUBLIC
//----------------------------------------------------- Méthodes publiques
// type Stockage::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Stockage::initialiser()
// Algorithme :
// Initialise les capteurs, utilisateurs privés et fournisseurs
{
    LectureFichier::lireCapteurs(capteurs);

    LectureFichier::lireUtilisateursPrives(utilisateursPrives, capteurs);

    LectureFichier::lireFournisseurs(fournisseurs);


}

void Stockage::getCapteurs(std::vector<Capteur> &vect_capteurs)
// Algorithme :
// Passer par référence un vecteur de capteurs
{ 
    
    for (auto it = capteurs.begin(); it != capteurs.end(); ++it)
    {
        vect_capteurs.push_back(it->second);
    }
    
} //----- Fin de Méthode

void Stockage::getPurificateurFromFournisseur(string idFournisseur, std::vector<Purificateur> &vect_purificateur)
// Algorithme :
// Passer par référence un vecteur de purificateurs
{ 
    
    Fournisseur f = fournisseurs.at(idFournisseur)

    f.getPurificateurs(vect_purificateur);
    
    
} //----- Fin de Méthode

UtilisateurPrive* Stockage::getUtilisateurPrive(string id)
{
    try {
        return &utilisateursPrives.at(id);
    } catch (const std::out_of_range& e) {
        // return null UtilisateurPrive
        return nullptr;
    }
}

void Stockage::getUtilisateursPrives(std::vector<UtilisateurPrive> &vect_utilisateursPrives)
// Algorithme :
// Passer par référence un vecteur d'utilisateurs privés
{

    for (auto it = utilisateursPrives.begin(); it != utilisateursPrives.end(); ++it)
    {
        vect_utilisateursPrives.push_back(it->second);
    }

} //----- Fin de Méthode

Fournisseur* Stockage::getFournisseur(string id)
{
    try {
        return &fournisseurs.at(id);
    } catch (const std::out_of_range& e) {
        // return null Fournisseur
        return nullptr;
    }
}

void Stockage::getFournisseurs(std::vector<Fournisseur> &vect_fournisseurs)
// Algorithme :
// Passer par référence un vecteur de fournisseurs
{
    for (auto it = fournisseurs.begin(); it != fournisseurs.end(); ++it)
    {
        vect_fournisseurs.push_back(it->second);
    }
} //----- Fin de Méthode

Capteur& Stockage::getCapteurById(string id)
{
    return capteurs.at(id);
}

Agence* Stockage::getAgence()
{
    return &agence;
}

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
