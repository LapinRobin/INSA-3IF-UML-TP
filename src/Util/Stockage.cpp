//---------- Réalisation de la classe <stockage> (fichier stockage.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>


//------------------------------------------------------ Include personnel

#include "../Modeles/Appareils/Capteur.h"
#include "../Modeles/Acteurs/UtilisateurPrive.h"
#include "../Modeles/Acteurs/Fournisseur.h"
#include "Stockage.h"
#include "LectureFichier.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Stockage::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void initialiser()
{
std::unordered_map<std::string, Capteur> Stockage::capteurs;
LectureFichier::lireCapteurs(capteurs);

std::unordered_map<std::string, UtilisateurPrive> Stockage::utilisateursPrives;
lireUtilisateursPrives(utilisateursPrives);

std::unordered_map<std::string, Fournisseur> Stockage::fournisseurs;
LectureFichier::lireFournisseurs(fournisseurs);
}

static void getCapteurs(std::vector<Capteur> &vect_capteurs)
// Algorithme :
// Passer par référence un vecteur de capteurs
// Retourner un booléen pour savoir si la requête a fonctionné
{ 
    
    // pass the values of private attribute capteurs to the reference vector
    for (auto it = capteurs.begin(); it != capteurs.end(); ++it)
    {
        vect_capteurs.push_back(*it);
    }
    
    
    
} //----- Fin de Méthode


static void getUtilisateursPrives(std::vector<UtilisateurPrive> &vect_utilisateursPrives) 
// Algorithme :
// Passer par référence un vecteur d'utilisateurs privés
// Retourner un booléen pour savoir si la requête a fonctionné
{
    // pass the values of private attribute utilisateursPrives to the reference vector
    for (auto it = utilisateursPrives.begin(); it != utilisateursPrives.end(); ++it)
    {
        vect_utilisateursPrives.push_back(*it);
    }

} //----- Fin de Méthode

static void getFournisseurs(std::vector<Fournisseur> &vect_fournisseurs)  
// Algorithme :
// Passer par référence un vecteur de fournisseurs
// Retourner un booléen pour savoir si la requête a fonctionné
{
    // pass the values of private attribute fournisseurs to the reference vector
    for (auto it = fournisseurs.begin(); it != fournisseurs.end(); ++it)
    {
        vect_fournisseurs.push_back(*it);
    }
} //----- Fin de Méthode



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
