#include "MenuBase.h"
#include "Menus.h"
#include <iostream>

using namespace std;

// Fonctions appelant les services
int doNothing();
int se_connecter();
int s_inscrire();

// Implémentation des menus

MenuBase principal("Menu principal",nullptr,doNothing);

MenuBase menuConnection("Se connecter",&principal,se_connecter);

MenuBase menuInscription("S'inscrire",&principal,s_inscrire);

MenuBase menuUtilisateur("Menu utilisateur",&menuConnection,doNothing);

MenuBase menuAgence("Menu agence gouvernementale",&menuConnection,doNothing);

MenuBase menuFournisseur("Menu Fournisseur",&menuConnection,doNothing);

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
    string identifiant, mot_de_passe;
    cout << "Entrez votre identifiant: ";
    cin >> identifiant;
    cout << "Entrez votre mot de passe: ";
    cin >> mot_de_passe;
    return 0;
    // TODO: Valider les informations d'identification

    // Si les informations d'identification sont valides
    // TODO: Accédez au menu spécifique à votre rôle
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