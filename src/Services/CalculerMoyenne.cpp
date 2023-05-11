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


//------------------------------------------------------ Include personnel
#include "CalculerMoyenne.h"
// #include "../Util/Stockage.h"
// #include "../Modeles/Appareils/Capteur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

int CalculerMoyenne::calculerMoyenne(double latitude, double longitude, int rayon, string t1, string t2) {
    double o3Moyen = 30.0;
    double so2Moyen = 40.0;
    double no2Moyen = 30.0;
    double pm10Moyen = 7.0;
    int compteurCapteur = 0;

    

    int index = calculerIndiceAtmo(o3Moyen, so2Moyen, no2Moyen, pm10Moyen);
    return index;
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
    return std::max({indexO3, indexSO2, indexNO2, indexPM10});
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
