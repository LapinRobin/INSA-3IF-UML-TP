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
#include <cassert>

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
    int limiteDistance = 50;
    const double limiteEcartMesure [] = {15.0,20.0,15.0,8.0};
    int compteurErreur03 = 0;
    int compteurErreurso2 = 0;
    int compteurErreurno2 = 0;
    int compteurErreurpm10 = 0;

    int compteurMesure = 0;
    int compteurCapteur = 0;

    vector<Capteur> listeCapteur;
    
    Stockage::getCapteurs(listeCapteur);
    
    vector<string> listeDate = capteur.getDates();
    
    assert(listeDate.size()!=0);

    for(int i = 0; i< (int)listeCapteur.size(); i++){
        if(listeCapteur[i].estFonctionnel() && capteur.calculerDistance(listeCapteur[i])<limiteDistance && capteur!=listeCapteur[i]){
            for(int j = 0; j<(int)listeDate.size(); j++){
                if(abs(capteur.getMesureO3(listeDate[j])-listeCapteur[i].getMesureO3(listeDate[j]))>limiteEcartMesure[0]){
                    compteurErreur03++;
                }
                if(abs(capteur.getMesureSo2(listeDate[j])-listeCapteur[i].getMesureSo2(listeDate[j]))>limiteEcartMesure[1]){
                    compteurErreurso2++;
                }
                if(abs(capteur.getMesureNo2(listeDate[j])-listeCapteur[i].getMesureNo2(listeDate[j]))>limiteEcartMesure[2]){
                    compteurErreurno2++;
                }
                if(abs(capteur.getMesurePm10(listeDate[j])-listeCapteur[i].getMesurePm10(listeDate[j]))>limiteEcartMesure[3]){
                    compteurErreurpm10++;
                }
                compteurMesure+=4;
            }  
            compteurCapteur++;
        }
    }
    
    double tauxErreur = (double)(compteurErreur03+compteurErreurno2+compteurErreurpm10+compteurErreurso2)/(double)compteurMesure;
    
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

