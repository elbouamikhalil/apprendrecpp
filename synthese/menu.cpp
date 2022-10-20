#include "menu.h"
#include <iostream>

Menu::Menu(const string &_nom):nom(_nom)
  ,options(nullptr) ,nbOptions(0),longueurMax(0){
    ifstream fichierMenu(nom);
    if (fichierMenu.fail()) {
        string message = " file not found !!";
        cout << message << endl;

    } else {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        fichierMenu.seekg(0,ios::beg);

        int longueur;
        string item;
        options = new string[nbOptions];
        for (int i = 0; i < nbOptions; i++) {
            getline(fichierMenu, item);
            longueur = static_cast<int>(item.length());
            if (longueur > longueurMax) {
                longueurMax = longueur;
            }
            if (longueur > 0){
                options[i] = item;
            } else {
                nbOptions--;
                i--;
            }
        }
    }
}

Menu::~Menu()
{
    if (options != nullptr) {
        delete [] options;
    }
}

int Menu::Afficher()
{
    int choix;

    if (nbOptions == 0){
        choix = -1;
    } else {
        cout << setfill('-');
        cout << "+-" << setw(4) << "-+-" << setw(longueurMax+2) << "-+" << endl;
        cout << setfill(' ');
        for (int i = 0; i < nbOptions; i++) {
            cout << "| " << i+1 << " | " << setw(longueurMax) << options[i] << " |" << endl;
        }
        cout << setfill('-');
        cout << "+-" << setw(4) << "-+-" << setw(longueurMax+2) << "-+" << endl;
        cout << setfill('-');

        do{
            cout << "Votre choix : entre 1 et " << nbOptions << endl;
            if(!(cin>>choix)){
                cin. clear();
                cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
                choix = -1;
            }
        } while(choix > nbOptions);
    }
    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}
