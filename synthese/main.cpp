#include "alveoleslibres.h"
#include "magasin.h"
#include "menu.h"
#include "rouleau.h"
#include "stock.h"
#include <iostream>

using namespace std;

int main()
{
    Magasin leMagasin;
    int choix;

        try{
            Menu leMenu("../synthese/magasin.txt");
            do
            {
                choix = leMenu.Afficher();
                switch (choix)
                {
                case OPTION_1:
                    system("clear");
                    leMagasin.EntrerRouleau();
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_2:
                    system("clear");
                    leMagasin.SortirRouleaux();
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_3:
                    system("clear");
                    cout << endl << "Affichage des rouleaux" << endl;
                    leMagasin.Visualiser();
                    Menu::AttendreAppuiTouche();
                    break;
                }

            } while(choix != QUITTER);
        }
        catch(std::runtime_error &e){
            cout << e.what() << endl;
            exit(EXIT_FAILURE);
        }
    return 0;
}




