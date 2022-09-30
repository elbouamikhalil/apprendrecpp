#include "barreCarree.h"
#include <iostream>

using namespace std;

BarreCarree::BarreCarree(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int coter):
    exo_barre(_reference,_longueur,_densite,_nomAlliage),
    coter(coter)
{
    cout << "Constructeur de la classe Barre Carrée" << endl << endl;
}
void BarreCarree::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reference =" << reference << endl;
    cout << "Nom de l'Alliage =" << nomAlliage << endl;
    cout << "Densité =" << densite << "Kg/m3" << endl;
    cout << "Longueur =" << longueur/1000 << "m" << endl;
    cout << "Longueur du coter = " << coter << "mm" << endl;
    cout << "Sections du carre = " << BarreCarree::CalculerSections() << "mm2" << endl;
    cout << "Masse du carre = " << BarreCarree::CalculerMasse() << "Kg" << endl;
    cout << endl;
}
double BarreCarree::CalculerSections()
{
    return longueur * longueur;
}
double BarreCarree::CalculerMasse()
{
    return (longueur/1000) * (BarreCarree::CalculerSections()/1000000) * densite;
}
