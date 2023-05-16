#include "MenuBase.h"
#include "Affichage.h"
#include <iostream>

using namespace std;

// Implémentation des menus

MenuBase principal("Menu principal");

MenuBase menuConnection("Se connecter",&principal);

MenuBase menuInscription("S'inscrire",&principal);

MenuBase menuUtilisateur("",&menuConnection);

void routine()
{
    MenuBase *menuActuel=&principal;
    while(1)
    {
        Affichage::effacerConsole();
        Affichage::afficherTitre();
        int choix=menuActuel->doAction();
        menuActuel=menuActuel->getNextMenu(choix); 
    }
}