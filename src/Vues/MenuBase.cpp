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
#include "Menus.h"

//------------------------------------------------------ Include personnel
#include "MenuBase.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type MenuBase::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

MenuBase* MenuBase::getNextMenu(int choix)const
{
    if (choix=='q')
        return nullptr;
    if (choix==0)
        return parent;
    return sousMenus.at(choix-1);
}

int MenuBase::doAction()
{
    int choix=action();
    if(choix!=-1)
        return choix;
    bool mauvaisChoix=false;
    effacerConsole();
    afficherTitre();
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
        cin >> caractere;
        if (caractere=='q')
        {
            choix=caractere;
            mauvaisChoix=false;
        }
        else if((parent!=nullptr && caractere=='0') || (caractere>'0' && caractere<=('0'+(int)sousMenus.size())))
        {
            choix=caractere-'0';
            mauvaisChoix=false;
        }
    }while(mauvaisChoix);

    return choix;
}

//------------------------------------------------- Surcharge d'opérateurs

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


MenuBase::MenuBase ( std::string unTitre,MenuBase* unParent, int (*uneAction)() ) : titre(unTitre),parent(unParent), action(uneAction)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <MenuBase>" << endl;
#endif
    if(unParent!=nullptr)
    {
        unParent->sousMenus.push_back(this);
    }
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
