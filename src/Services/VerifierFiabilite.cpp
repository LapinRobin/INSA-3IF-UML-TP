/*************************************************************************
                           VerifierFiabilite  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <VerifierFiabilite> (fichier VerifierFiabilite.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <vector>

//------------------------------------------------------ Include personnel
#include "VerifierFiabilite.h"
#include "../Util/Stockage.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
double VerifierFiabilite::calculerTauxErreur ( const Capteur & capteur )
// Algorithme : 
// On récupère la liste des capteurs fonctionnels à moins de 100km du capteur en paramètre.
// Pour chaque capteur de cette liste, on compare les mesures de ce capteur avec celles du capteur en paramètre.
// Si l'écart entre les mesures est supérieur à un seuil, on incrémente le compteur d'erreur.
// A la fin, on retourne le taux d'erreur.
{
    int limiteDistance = 100;
    const float limiteEcartMesure [] = {2.0,2.0,2.0,2.0};
    float compteurErreur = 0.0;
    float compteurMesure = 0.0;

    vector<Capteur> listeCapteur;
    Stockage::getCapteurs(listeCapteur);
    vector<string> listeDate = capteur.getDates();


    for(int i = 0; i< (int)listeCapteur.size(); i++){
        if(listeCapteur[i].estFonctionnel() && capteur.calculerDistance(listeCapteur[i])<limiteDistance){
            for(int j = 0; j<(int)listeDate.size(); j++){
                if(abs(capteur.getMesureO3(listeDate[j])-listeCapteur[i].getMesureO3(listeDate[j]))>limiteEcartMesure[1]){
                    compteurErreur++;
                }
                if(abs(capteur.getMesureSo2(listeDate[j])-listeCapteur[i].getMesureSo2(listeDate[j]))>limiteEcartMesure[2]){
                    compteurErreur++;
                }
                if(abs(capteur.getMesureNo2(listeDate[j])-listeCapteur[i].getMesureNo2(listeDate[j]))>limiteEcartMesure[3]){
                    compteurErreur++;
                }
                if(abs(capteur.getMesurePm10(listeDate[j])-listeCapteur[i].getMesurePm10(listeDate[j]))>limiteEcartMesure[4]){
                    compteurErreur++;
                }
                compteurMesure+=4;
            }  
        }
    }
    float tauxErreur = compteurErreur/compteurMesure;
    return tauxErreur;
} //----- Fin de Méthode



//-------------------------------------------- Constructeurs - destructeur

VerifierFiabilite::VerifierFiabilite ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <VerifierFiabilite>" << endl;
#endif
} //----- Fin de VerifierFiabilite


VerifierFiabilite::~VerifierFiabilite ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <VerifierFiabilite>" << endl;
#endif
} //----- Fin de ~VerifierFiabilite


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

