#include<iostream>
#include<string>
#include "Util/Stockage.h"
#include "Services/VerifierFiabilite.h"
#include "Modeles/Acteurs/Acteur.h"
#include "Vues/Menus.h"
#include "Tests/TestCalculerMoyenne.h"
#include "Tests/TestObserverImpact.h"

using namespace std;

int main() {

    Stockage::initialiser();
    //TestCalculerMoyenne tester;
    //tester.runTests();
    
    routine();

    /*
    vector<Capteur> capteurs;
    Stockage::getCapteurs(capteurs);
    VerifierFiabilite vf;
    for(int i = 0; i<(int)capteurs.size(); i++){
       cout << vf.calculerTauxErreur(capteurs[i])<<endl; 
    }
    //cout << vf.calculerTauxErreur(Stockage::getCapteurById("Sensor70"))<<endl; 
    //cout << vf.calculerTauxErreur(Stockage::getCapteurById("Sensor36"))<<endl; 
    */
    return 0;
}
