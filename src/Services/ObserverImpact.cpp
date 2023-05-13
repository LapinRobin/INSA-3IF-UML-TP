/*************************************************************************
                           ObserverImpact  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <ObserverImpact> (fichier ObserverImpact.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>


//------------------------------------------------------ Include personnel
#include "ObserverImpact.h"
#include "../Modeles/Appareils/Capteur.h"



//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

float ObserverImpact::observerImpact(const vector<Capteur>& sensors, const string& start, const string& stop, const Appareil& p) {
    float compteurAvant = 0.0;
    float compteurApres = 0.0;
    float rayonAction = 1000.0;

    float o3MoyenAvant = 0.0, so2MoyenAvant = 0.0, no2MoyenAvant = 0.0, pm10MoyenAvant = 0.0;
    float o3MoyenApres = 0.0, so2MoyenApres = 0.0, no2MoyenApres = 0.0, pm10MoyenApres = 0.0;

    for (Capteur c : sensors) {
        vector<string> dates = c.getDates();
        for (string date : dates) {
            if (date < start) {
                o3MoyenAvant += c.getMesureO3(date);
                so2MoyenAvant += c.getMesureSo2(date);
                no2MoyenAvant += c.getMesureNo2(date);
                pm10MoyenAvant += c.getMesurePm10(date);
                compteurAvant++;
            }
            if (date > start && date < stop) {
                o3MoyenApres += c.getMesureO3(date);
                so2MoyenApres += c.getMesureSo2(date);
                no2MoyenApres += c.getMesureNo2(date);
                pm10MoyenApres += c.getMesurePm10(date);
                compteurApres++;
            }
        }

        if (compteurAvant != 0) {
            o3MoyenAvant /= compteurAvant;
            so2MoyenAvant /= compteurAvant;
            no2MoyenAvant /= compteurAvant;
            pm10MoyenAvant /= compteurAvant;

            o3MoyenApres /= compteurApres;
            so2MoyenApres /= compteurApres;
            no2MoyenApres /= compteurApres;
            pm10MoyenApres /= compteurApres;

            float o3Ratio = o3MoyenApres / o3MoyenAvant;
            float so2Ratio = so2MoyenApres / so2MoyenAvant;
            float no2Ratio = no2MoyenApres / no2MoyenAvant;
            float pm10Ratio = pm10MoyenApres / pm10MoyenAvant;

            float ratio = (o3Ratio + so2Ratio + no2Ratio + pm10Ratio) / 4.0;

            if (ratio < 0.75 && c.calculerDistance(p) < rayonAction) {
                rayonAction = c.calculerDistance(p);
            }
        }
    }
    return rayonAction;
}








//-------------------------------------------- Constructeurs - destructeur

ObserverImpact::ObserverImpact ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ObserverImpact>" << endl;
#endif
} //----- Fin de ObserverImpact


ObserverImpact::~ObserverImpact ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ObserverImpact>" << endl;
#endif
} //----- Fin de ~ObserverImpact


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
