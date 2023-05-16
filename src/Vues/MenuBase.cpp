/*************************************************************************
                           MenuBase  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <MenuBase> (fichier MenuBase.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "MenuBase.h"
#include "Affichage.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type MenuBase::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

int MenuBase::doAction()
{
    int choix=action();
    if(choix!=-1)
    {
        return choix;
    }
    bool mauvaisChoix=false;
    Affichage::effacerConsole();
    Affichage::afficherTitre();
    cout << *this << endl;
    cout << endl;
    do
    {
        if(mauvaisChoix)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Veuillez faire un choix possible" << endl;
        }
        cout << "Quel est votre choix ?"<< endl;
        char caractere;
        mauvaisChoix=true;
        if(!cin >> caractere)
        {
            continue;
        }
        if (caractere=='q')
        {
            choix=caractere;
            mauvaisChoix=false;
        }
        else if((parent!=nullptr && choix=='0') || (choix>'0' && choix<=('0'+sousMenus.size())))
        {
            choix=caractere-'0';
            mauvaisChoix=false;
        }
    }while(mauvaisChoix);
    return choix;
}

//------------------------------------------------- Surcharge d'opérateurs
MenuBase & MenuBase::operator = ( const MenuBase & unMenuBase )
// Algorithme :
//
{
} //----- Fin de operator =

ostream& operator<<(ostream& out, const MenuBase& menu)
{
    out << menu.titre << '\n';
    for(unsigned int i=0;i<menu.sousMenus.size();++i)
    {
        out << i+1 << ") " << menu.sousMenus.at(i)->titre << '\n';
    }
    if(menu.parent!=nullptr)
    {
        out << "0) retour\n";
    }
    out << "q) quitter";
    return out;
}

//-------------------------------------------- Constructeurs - destructeur
MenuBase::MenuBase ( const MenuBase & unMenuBase )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <MenuBase>" << endl;
#endif
} //----- Fin de MenuBase (constructeur de copie)


MenuBase::MenuBase ( std::string unTitre,MenuBase* unParent ) : titre(unTitre),parent(unParent)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <MenuBase>" << endl;
#endif
} //----- Fin de MenuBase


MenuBase::~MenuBase ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <MenuBase>" << endl;
#endif
} //----- Fin de ~MenuBase


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
