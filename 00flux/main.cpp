#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string nomDuFichier;

    ifstream leFichier("medailles.txt");
    if (!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        cout << "+" << setfill('-') << setw(25) << "+" <<setw(5) << "+" << setfill(' ') << endl;
        do
        {
            //récupération des valeurs
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
            if (leFichier.good())//Si les valeurs ont bien été lues
            {
                cout << "|" << setw(25) << left << pays << "|";
                cout << setw (5) << right << nbOr << "|";
                cout << setw(5)<< right<< nbArgent<< "|";
                cout << setw(5)<< right<< nbBronze<< '|' << endl;             }
        } while (!leFichier.eof());
        cout << "+" << setfill('-') << setw(25) << "+" << setfill(' ') << endl; // A compléter, affichage de la dernière ligne du tableau.
    }
    return 0;
}
