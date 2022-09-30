#include <iostream>
#include "comptebancaire.h"
#include "menu.h"


using namespace std;

int main()
{
    try {
        float montant;
        int choix;
         Menu leMenu ("/home/USERS/ELEVES/SNIR2021/melbouami/Documents/compteBancaire.txt");
         CompteBancaire compte(5);

         do {
             choix = leMenu.Afficher();
             switch (choix)
             {
             case OPTION_1:
             cout<<"consultation du solde"<<endl;
             cout<<compte.ConsulterSolde()<<endl;
             leMenu.AttendreAppuiTouche();
                     break;


             case OPTION_2:
                 cout<<"effectuer un depot"<<endl;
                 cin >> montant;
                 compte.deposer(montant);
                 cout<<"vous avez deposé"<<montant;
                 leMenu.AttendreAppuiTouche();
                    break;

             case OPTION_2:
                 cout<<"effectuer un retrait"<<endl;
                 cin >> montant;
                 compte.retirer(montant);
                 cout<<"vous avez retiré"<<montant;
                 leMenu.AttendreAppuiTouche();
                 break;





