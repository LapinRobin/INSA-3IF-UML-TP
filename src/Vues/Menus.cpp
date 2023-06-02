#include "MenuBase.h"
#include "Menus.h"
#include "../Services/GestionActeurs.h"
#include "../Services/VerifierFiabilite.h"
#include "../Services/ObserverImpact.h"
#include "../Util/Stockage.h"
#include "../Modeles/Acteurs/Acteur.h"
#include "../Modeles/Acteurs/UtilisateurPrive.h"
#include "../Modeles/Acteurs/Fournisseur.h"
#include "../Modeles/Acteurs/Agence.h"
#include "../Services/CalculerMoyenne.h"
#include "../Services/ObserverImpact.h"
#include "../Util/Stockage.h"
#include <string>
#include <iostream>

using namespace std;

// Fonctions appelant les services
int doNothing();
int se_connecter();
int s_inscrire();
int classerCapteur();
int calculerMoy();
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

MenuBase menuCalculerMoy("Calculer la moyenne de la qualité de l'air",&menuUtilisateur,calculerMoy);

MenuBase menuObserverImpact("Observer l'impact des purificateurs sur l'air",&menuUtilisateur,analyserImpactPurif);

// Fonctionnalités agence
MenuBase menuDonneesAirAgence("Consulter les données sur la qualité de l'air", &menuAgence,doNothing);

MenuBase menuClasserCapteurAgency("Classer les capteurs par similarité",&menuDonneesAirAgence,classerCapteur);

MenuBase menuCalculerMoyAgence("Calculer la moyenne de la qualité de l'air",&menuDonneesAirAgence,calculerMoy);

MenuBase menuImpactPurifAgence("Analyser l'impact des purificateurs sur l'air",&menuAgence,analyserImpactPurif);

MenuBase menuAnalyseCapteur("Analyser les données d'un capteur",&menuAgence,analyserCapteur);

MenuBase menuAnalyseUtilisateur("Analyser les données d'un utilisateur",&menuAgence,analyserUtilisateur);

// Fonctionnalités fournisseur
MenuBase menuDonneesAirFournisseur("Consulter les données sur la qualité de l'air",&menuFournisseur,doNothing);

MenuBase menuClasserCapteurProvider("Classer les capteurs par similarité",&menuDonneesAirFournisseur,classerCapteur);

MenuBase menuCalculerMoyFournisseur("Calculer la moyenne de la qualité de l'air",&menuDonneesAirFournisseur,calculerMoy);

MenuBase menuImpactPurifFournisseur("Analyser l'impact des purificateurs surl l'air",&menuFournisseur,analyserImpactPurif);


// Fonctions publiques

void afficherTitre()
{
    cout << "\n";
    cout << "    ___    _     _       __      __       __             \n";
    cout << "   /   |  (_)___| |     / /___ _/ /______/ /_  ___  _____\n";
    cout << "  / /| | / / ___/ | /| / / __ `/ __/ ___/ __ \\/ _ \\/ ___/\n";
    cout << " / ___ |/ / /   | |/ |/ / /_/ / /_/ /__/ / / /  __/ /    \n";
    cout << "/_/  |_/_/_/    |__/|__/\\__,_/\\__/\\___/_/ /_/\\___/_/     \n";
    cout << endl;
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
    cout << "Connexion " << endl;
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
    //TODO
    return 0;
}

int calculerMoy() 
{
    double latitude;
    double longitude;
    int rayon;
    string t1, t2;
    
    std::cout << "Veuillez entrer la latitude du centre  : ";
    std::cin >> latitude;

    std::cout << "Veuillez entrer la longitude du centre : ";
    std::cin >> longitude;

    std::cout << "Veuillez entrer le rayon (en km) : ";
    std::cin >> rayon;

    std::cout << "Veuillez entrer la date de début (format YYYY-MM-DD): ";
    std::cin >> t1;

    std::cout << "Veuillez entrer la date de fin (format YYYY-MM-DD): ";
    std::cin >> t2;
    

    CalculerMoyenne cm;
    int result = cm.calculerMoyenne(latitude, longitude, rayon, t1, t2);
    
    if (result == -1) {
        std::cout << "Pas de capteur dans la zone" << std::endl;
    } else if (result == -2) {
        std::cout << "Durée invalide" << std::endl;
    } else if (result == -3) {
        std::cout << "Pas de données dans la zone" << std::endl;
    } else {
        std::cout << "L'indice ATMO moyen est de " << result << std::endl;
    }
    cout << "Tapez sur ENTRER pour continuer...";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string buffer;
    getline(cin,buffer);

    return 0;
}


int analyserImpactPurif()
{

    string idFournisseur;
    cout << "Entrez l'ID du fournisseur du purificateur que vous voulez analyser :" << endl;
    cin >> idFournisseur;
    vector<Purificateur> listePurificateurs;
    Stockage::getPurificateursFromFournisseur(idFournisseur, listePurificateurs);
    for(const Purificateur & p : listePurificateurs)
        cout << p << endl;
    string idPurificateur;
    cout << "Entrez l'ID du purificateur que vous voulez analyser :" << endl;
    cin >> idPurificateur;
    const Purificateur* purificateur = nullptr;
    for(const Purificateur & p : listePurificateurs)
        if(p.getId() == idPurificateur)
            purificateur = &p;
    
    if(purificateur != nullptr)
    {
        ObserverImpact oi;
        vector<Capteur> capteurs;
        Stockage::getCapteurs(capteurs);
        float indiceConfiance;
        float rayon = oi.observerImpact(capteurs, *purificateur);
        if(rayon != -1)
        {
            cout << "Le rayon d'action de ce purificateur est de : " << rayon << "km." << endl;  
        }
        else
            cout << "Pas de données pour calculer." << endl;
    }
    else
        cout << "Ce purificateur n'existe pas chez ce fournisseur. Avez-vous fait une erreur ?" << endl;

    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string buffer;
    getline(cin,buffer); 

    return 0;
}


int analyserCapteur()
{
    string idCapteur;
    cout << "Entrez l'ID du capteur que vous voulez analyser :" << endl;
    cin >> idCapteur;
    try{
        Capteur capteur = Stockage::getCapteurById(idCapteur);
        VerifierFiabilite vf;
        double taux = vf.calculerTauxErreur(capteur);
        cout << "Le taux d'erreur de ce capteur, en se basant sur une zone de 50km de rayon, est de : " << taux << endl;
        double tauxLimite = 0.2;
        if(taux < tauxLimite )
            cout << "Ce capteur fonctionne normalement, sans dépasser le taux limite de " << tauxLimite << endl;
        else
        {
            cout << "Ce capteur ne fonctionne pas normalement, il dépasse le taux limite de " << tauxLimite << endl;
            cout << "Voulez-vous marquer ce capteur comme défaillant ? (oui/non)" << endl;
            string reponse;
            cin >> reponse;
            if(reponse == "oui")
                cout << "Capteur marqué, vous pourrez le rétablir après réparation grâce à la fonction prévue à cet effet." << endl;
        }
    }
    catch(const out_of_range& e){
        cout << "Ce capteur n'est pas présent dans la base de données"<<endl;
    }
       
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string buffer;
    getline(cin,buffer);    
    return 0;
}
int analyserUtilisateur()
{
    //TODO
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