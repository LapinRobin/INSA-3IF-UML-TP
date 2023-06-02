#include<iostream>
#include<string>
#include "Util/Stockage.h"
#include "Services/VerifierFiabilite.h"
#include "Modeles/Acteurs/Acteur.h"
#include "Vues/Menus.h"
#include "Tests/TestCalculerMoyenne.h"
#include "Tests/TestObserverImpact.h"
#include "Tests/TestVerifierFiabilite.h"

using namespace std;

int main() {

    // Pour faire les tests, il faut faire make test
    // Pour l'application, il faut faire make

    Stockage::initialiser();
    #ifdef TEST
        TestCalculerMoyenne tester1;
        tester1.runTests();
        TestObserverImpact tester2;
        tester2.runTests();
        TestVerifierFiabilite tester3;
        tester3.runTests();
    #else
        routine();
    #endif

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
