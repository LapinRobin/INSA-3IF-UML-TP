/*************************************************************************
                           CalculerMoyenne  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <CalculerMoyenne> (fichier CalculerMoyenne.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>
#include <ctime>
#include <string>


//------------------------------------------------------ Include personnel
#include "CalculerMoyenne.h"
#include "../Util/Stockage.h"
#include "../Modeles/Appareils/Capteur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

int CalculerMoyenne::calculerMoyenne(double latitude, double longitude, int rayon, string t1, string t2) {
    double o3Moyen = 0.0;
    double so2Moyen = 0.0;
    double no2Moyen = 0.0;
    double pm10Moyen = 0.0;
    int compteurCapteur = 0;

    vector<Capteur> capteurs;
    Stockage::getCapteurs(capteurs);

    // Check if there are any sensors in the specified zone
    bool sensorsFound = false;
    for (Capteur c : capteurs) {
        if (c.calculerDistance(latitude, longitude) <= rayon) {
            sensorsFound = true;
            break;
        }
    }
    if (!sensorsFound) {
        // Return a default value or an error code to indicate that no data is available for the specified location and time range
        return -1;
    }

    // Check if the time range is valid
    if (t2 < t1) {
        // Return a default value or an error code to indicate that the time range is invalid
        return -2;
    }

    for (Capteur c : capteurs) {
        // if Capteur dans le rayon
        if (c.estFonctionnel() && c.calculerDistance(latitude, longitude) <= rayon) {
            for (string date : c.getDates()) {
                // si date dans l'intervale
                if (date >= t1 && date <= t2) {
                    // add the measures to the total
                    o3Moyen += c.getMesureO3(date);
                    so2Moyen += c.getMesureSo2(date);
                    no2Moyen += c.getMesureNo2(date);
                    pm10Moyen += c.getMesurePm10(date);
                    compteurCapteur++;
                }
            }
        }
    }

    // Check if there is any data available for the specified time range
    if (compteurCapteur == 0) {
        // Return a default value or an error code to indicate that no data is available for the specified location and time range
        return -3;
    }

    // calculate the average
    o3Moyen /= compteurCapteur;
    so2Moyen /= compteurCapteur;
    no2Moyen /= compteurCapteur;
    pm10Moyen /= compteurCapteur;
    return calculerIndiceAtmo(o3Moyen, so2Moyen, no2Moyen, pm10Moyen);
}

int CalculerMoyenne::calculerIndiceAtmo(double O3, double SO2, double NO2, double PM10) {
    int indexO3, indexSO2, indexNO2, indexPM10;

    // Index for O3
    if (O3 >= 240) indexO3 = 10;
    else if (O3 >= 210) indexO3 = 9;
    else if (O3 >= 180) indexO3 = 8;
    else if (O3 >= 150) indexO3 = 7;
    else if (O3 >= 130) indexO3 = 6;
    else if (O3 >= 105) indexO3 = 5;
    else if (O3 >= 80) indexO3 = 4;
    else if (O3 >= 55) indexO3 = 3;
    else if (O3 >= 30) indexO3 = 2;
    else indexO3 = 1;

    // Index for SO2
    if (SO2 >= 500) indexSO2 = 10;
    else if (SO2 >= 400) indexSO2 = 9;
    else if (SO2 >= 300) indexSO2 = 8;
    else if (SO2 >= 250) indexSO2 = 7;
    else if (SO2 >= 200) indexSO2 = 6;
    else if (SO2 >= 160) indexSO2 = 5;
    else if (SO2 >= 120) indexSO2 = 4;
    else if (SO2 >= 80) indexSO2 = 3;
    else if (SO2 >= 40) indexSO2 = 2;
    else indexSO2 = 1;

    // Index for NO2
    if (NO2 >= 400) indexNO2 = 10;
    else if (NO2 >= 275) indexNO2 = 9;
    else if (NO2 >= 200) indexNO2 = 8;
    else if (NO2 >= 165) indexNO2 = 7;
    else if (NO2 >= 135) indexNO2 = 6;
    else if (NO2 >= 110) indexNO2 = 5;
    else if (NO2 >= 85) indexNO2 = 4;
    else if (NO2 >= 55) indexNO2 = 3;
    else if (NO2 >= 30) indexNO2 = 2;
    else indexNO2 = 1;

    // Index for PM10
    if (PM10 >= 80) indexPM10 = 10;
    else if (PM10 >= 65) indexPM10 = 9;
    else if (PM10 >= 50) indexPM10 = 8;
    else if (PM10 >= 42) indexPM10 = 7;
    else if (PM10 >= 35) indexPM10 = 6;
    else if (PM10 >= 28) indexPM10 = 5;
    else if (PM10 >= 21) indexPM10 = 4;
    else if (PM10 >= 14) indexPM10 = 3;
    else if (PM10 >= 7) indexPM10 = 2;
    else indexPM10 = 1;

    // Return the highest index
    return max(max(indexO3, indexSO2), max(indexNO2, indexPM10));
}




//-------------------------------------------- Constructeurs - destructeur

CalculerMoyenne::CalculerMoyenne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CalculerMoyenne>" << endl;
#endif
} //----- Fin de CalculerMoyenne


CalculerMoyenne::~CalculerMoyenne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CalculerMoyenne>" << endl;
#endif
} //----- Fin de ~CalculerMoyenne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
