#include<iostream>
#include<string>

using namespace std;

// Les rôles
enum Role { UTILISATEUR_PRIVE, GOUVERNEMENT, FOURNISSEUR };

// Les options de menu
enum OptionMenu { SE_CONNECTER, S_INSCRIRE, QUITTER, INVALIDE };

// Fonction pour gérer la connexion
void se_connecter() {
    string identifiant, mot_de_passe;
    cout << "Entrez votre identifiant: ";
    cin >> identifiant;
    cout << "Entrez votre mot de passe: ";
    cin >> mot_de_passe;

    // TODO: Valider les informations d'identification

    // Si les informations d'identification sont valides
    // TODO: Accédez au menu spécifique à votre rôle
}

// Fonction pour gérer l'inscription
void s_inscrire() {
    int role;
    string identifiant, mot_de_passe;
    cout << "Sélectionnez votre rôle (0: Utilisateur privé, 1: Membre du gouvernement, 2: Fournisseur de purificateur d'air): ";
    cin >> role;

    cout << "Entrez votre identifiant: ";
    cin >> identifiant;
    cout << "Entrez votre mot de passe: ";
    cin >> mot_de_passe;

    // TODO: Inscrire l'utilisateur avec les détails fournis
}

// Fonction pour gérer le menu principal
OptionMenu gererMenuPrincipal() {
    int option;
    cout << "Bienvenue sur AirWatcher!\n";
    cout << "1. Se connecter\n";
    cout << "2. S'inscrire\n";
    cout << "3. Quitter\n";
    cout << "Entrez votre option: ";
    cin >> option;

    switch(option) {
        case 1: return SE_CONNECTER;
        case 2: return S_INSCRIRE;
        case 3: return QUITTER;
        default: return INVALIDE;
    }
}

// Fonction pour gérer le menu spécifique à chaque rôle
void gererMenuRole(Role role) {
    // TODO: Implémenter les options de menu spécifiques à chaque rôle
}

int main() {
    while(true) {
        OptionMenu option = gererMenuPrincipal();

        switch(option) {
            case SE_CONNECTER:
                se_connecter();
                break;
            case S_INSCRIRE:
                s_inscrire();
                break;
            case QUITTER:
                exit(0);
            default:
                cout << "Option non valide. Veuillez réessayer.\n";
        }
    }

    return 0;
}
