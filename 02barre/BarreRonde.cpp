#include "BarreRonde.h"
#include <cmath>
#include <iostream>

using namespace std;


barreRonde::barreRonde(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _diametre):
    exo_barre(_reference,_longueur,_densite,_nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la classe Barre Ronde" << endl << endl;
}
void barreRonde::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reference =" << reference << endl;
    cout << "Nom de l'Alliage =" << nomAlliage << endl;
    cout << "Densité =" << densite << "Kg/m3" << endl;
    cout << "Longueur =" << longueur/1000 << "m" << endl;
    cout << "Diamètre de la barre = " << diametre << "mm" << endl;
    cout << "Sections du rond = " << barreRonde::CalculerSections() << "mm2" << endl;
    cout << "Masse du rond = " << barreRonde::CalculerMasse() << "Kg" << endl;
    cout << endl;
}
double barreRonde::CalculerSections()
{
    return((M_1_PI * diametre * diametre)/4);
}
double barreRonde::CalculerMasse()
{
    return CalculerSections() * longueur * densite;
}
