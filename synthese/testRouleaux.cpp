//#include "alveoleslibres.h"
//#include "menu.h"
//#include "rouleau.h"
//#include <iostream>

//using namespace std;


//int main()
//{
//    int diff=0, rangee=0, colonne=0;
//    Rouleau r1("A-320", 200);
//    Rouleau r2("B-747", 150);
//    r1.AffecterAlveole(4,5);
//    r2.AffecterAlveole(2,3);
//    r1.Visualiser();
//    r2.Visualiser();
//    cout<<endl;
//    r1.ObtenirLocalisation(rangee,colonne);
//    cout <<"r1 est en " << rangee << " - " << colonne <<endl;
//    r2.ObtenirLocalisation(rangee,colonne);
//    cout <<"r2 est en " << rangee << " - " << colonne <<endl;
//    if(r1<r2){
//        cout <<"r1 est supérieur ou égal a r2"<<endl;
//    }else{
//        cout <<"r2 est supérieur ou égal a r1"<<endl;
//    }
//    cout<<endl;
//    if(r1<r2){
//        diff=r1-r2;
//        cout<<"La différence entre les diamètres est de : "<< diff <<endl;
//    }else{
//        diff=r2-r1;
//        cout<<"La différence entre les diamètres est de : "<< diff <<endl;
//    }
//    return 0;
//}











// /* TEST ALVEOLE LIBRES
//int main()
//{
//    Alveoleslibres alveole(2,5);
//    int choix;
//    int val;
//    int val2;
//        try{
//            Menu leMenu("../synthese/menu.txt");
//            do
//            {
//                choix = leMenu.Afficher();
//                switch (choix)
//                {
//                case OPTION_1:
//                    system("clear");
//                    cout << "Selectionner la valeur de la rangee ";
//                    scanf("%d",&val);
//                    cout << "Selectionner la valeur de la colonne ";
//                    scanf("%d",&val2);
//                    alveole.Reserver(val,val2);
//                    Menu::AttendreAppuiTouche();
//                    break;
//                case OPTION_2:
//                    system("clear");
//                    cout << "Selectionner la valeur de la rangee: ";
//                    scanf("%d",&val);
//                    cout << "Selectionner la valeur de la colonne: ";
//                    scanf("%d",&val2);
//                    alveole.Liberer(val,val2);
//                    Menu::AttendreAppuiTouche();
//                    break;
//                case OPTION_3:
//                    system("clear");
//                    alveole.Visualiser();
//                    break;
//                }

//            } while(choix != QUITTER);
//        }
//        catch(std::runtime_error &e){
//            cout << e.what() << endl;
//            exit(EXIT_FAILURE);
//        }
//    return 0;
//}

//*/
