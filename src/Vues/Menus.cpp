#include "MenuBase.h"
#include "Menus.h"
#include "../Services/GestionActeurs.h"
#include "../Modeles/Acteurs/Acteur.h"
#include "../Modeles/Acteurs/UtilisateurPrive.h"
#include "../Modeles/Acteurs/Fournisseur.h"
#include "../Modeles/Acteurs/Agence.h"
#include <string>
#include <iostream>

using namespace std;

// Fonctions appelant les services
int doNothing();
int se_connecter();
int s_inscrire();
int classerCapteur();
int calculerMoyZone();
int calculerMoyPos();
int analyserImpactPurif();
int analyserCapteur();
int analyserUtilisateur();

static bool estConnecte;
// Implémentation des menus

MenuBase principal("Menu principal",nullptr,doNothing);

MenuBase menuConnection("Se connecter",&principal,se_connecter);

MenuBase menuInscription("S'inscrire",&principal,s_inscrire);

MenuBase menuUtilisateur("Menu utilisateur",&menuConnection,doNothing);

MenuBase menuAgence("Menu agence gouvernementale",&menuConnection,doNothing);

MenuBase menuFournisseur("Menu Fournisseur",&menuConnection,doNothing);

// Fonctionnalités utilisateur
MenuBase menuClasserCapteurUser("Classer les capteurs par similarité",&menuUtilisateur,classerCapteur);

MenuBase menuCalculerMoyZoneUser("Calculer la moyenne de la qualité de l'air dans une zone",&menuUtilisateur,calculerMoyZone);

MenuBase menuCalculerMoyPosUser("Calculer la moyenne de la qualité de l'air à une position",&menuUtilisateur,calculerMoyPos);

// Fonctionnalités agence
MenuBase menuDonneesAirAgence("Consulter les données sur la qualité de l'air", &menuAgence,doNothing);

MenuBase menuClasserCapteurAgency("Classer les capteurs par similarité",&menuDonneesAirAgence,classerCapteur);

MenuBase menuCalculerMoyZoneAgency("Calculer la moyenne de la qualité de l'air dans une zone",&menuDonneesAirAgence,calculerMoyZone);

MenuBase menuCalculerMoyPosAgency("Calculer la moyenne de la qualité de l'air à une position",&menuDonneesAirAgence,calculerMoyPos);

MenuBase menuImpactPurifAgence("Analyser l'impact des purificateurs sur l'air",&menuAgence,analyserImpactPurif);

MenuBase menuAnalyseCapteur("Analyser les données d'un capteur",&menuAgence,analyserCapteur);

MenuBase menuAnalyseUtilisateur("Analyser les données d'un utilisateur",&menuAgence,analyserUtilisateur);

// Fonctionnalités fournisseur
MenuBase menuDonneesAirFournisseur("Consulter les données sur la qualité de l'air",&menuFournisseur,doNothing);

MenuBase menuClasserCapteurProvider("Classer les capteurs par similarité",&menuDonneesAirFournisseur,classerCapteur);

MenuBase menuCalculerMoyZoneProvider("Calculer la moyenne de la qualité de l'air dans une zone",&menuDonneesAirFournisseur,calculerMoyZone);

MenuBase menuCalculerMoyPosProvider("Calculer la moyenne de la qualité de l'air à une position",&menuDonneesAirFournisseur,calculerMoyPos);

MenuBase menuImpactPurifFournisseur("Analyser l'impact des purificateurs surl l'air",&menuFournisseur,analyserImpactPurif);


// Fonctions publiques

void afficherTitre()
{
    cout << "###########################################################\n";
    cout << "#    ___    _     _       __      __       __             #\n";
    cout << "#   /   |  (_)___| |     / /___ _/ /______/ /_  ___  _____#\n";
    cout << "#  / /| | / / ___/ | /| / / __ `/ __/ ___/ __ \\/ _ \\/ ___/#\n";
    cout << "# / ___ |/ / /   | |/ |/ / /_/ / /_/ /__/ / / /  __/ /    #\n";
    cout << "#/_/  |_/_/_/    |__/|__/\\__,_/\\__/\\___/_/ /_/\\___/_/     #\n";
    cout << "###########################################################\n" << endl;
}

void effacerConsole()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int doNothing()
{
    return -1;
}

int se_connecter()
{
    if(estConnecte)
    {
        estConnecte=false;
        return 0;
    }
    cout << "Connection " << endl;
    string identifiant, mot_de_passe;
    cout << "Entrez votre identifiant: ";
    cin >> identifiant;
    cout << "Entrez votre mot de passe: ";
    cin >> mot_de_passe;
    

    // Valider les informations d'identification
    GestionActeurs ga;
    Acteur* act=ga.authentifier(identifiant,mot_de_passe);
    if(act==nullptr)
    {
        cout << "Mauvais identifiant et/ou mot de passe.\n Tapez sur ENTRER pour continuer...";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        string buffer;
        getline(cin,buffer);
        return 0;
    }

    // Accédez au menu spécifique à votre rôle
    if(dynamic_cast<UtilisateurPrive*>(act)!=nullptr)
    {
        estConnecte=true;
        return 1;
    }
    if(dynamic_cast<Agence*>(act)!=nullptr)
    {
        estConnecte=true;
        return 2;
    }
    if(dynamic_cast<Fournisseur*>(act)!=nullptr)
    {
        estConnecte=true;
        return 3;
    }
    return 0;
    
}

int s_inscrire()
{
    int role;
    string identifiant, mot_de_passe;
    cout << "Sélectionnez votre rôle (0: Utilisateur privé, 1: Membre du gouvernement, 2: Fournisseur de purificateur d'air): ";
    cin >> role;

    cout << "Entrez votre identifiant: ";
    cin >> identifiant;
    cout << "Entrez votre mot de passe: ";
    cin >> mot_de_passe;
    return 0;
}

int classerCapteur()
{
    return 0;
}
int calculerMoyZone()
{
    return 0;
}
int calculerMoyPos()
{
    return 0;
}
int analyserImpactPurif()
{
    return 0;
}
int analyserCapteur()
{
    return 0;
}
int analyserUtilisateur()
{
    return 0;
}

void routine()
{
    MenuBase *menuActuel=&principal;
    while(menuActuel!=nullptr)
    {
        effacerConsole();
        afficherTitre();
        int choix=menuActuel->doAction();
        menuActuel=menuActuel->getNextMenu(choix); 
    }
}