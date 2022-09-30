#include "barreRectangle.h"
#include <cmath>
#include <iostream>

using namespace std;

BarreRectangle::BarreRectangle(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _largeur):
    exo_barre(_reference,_longueur,_densite,_nomAlliage),
    largeur(_largeur)
{
     cout << "Constructeur de la classe Barre Rectangle" << endl << endl;
}
void BarreRectangle::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reference =" << reference << endl;
    cout << "Nom de l'Alliage =" << nomAlliage << endl;
    cout << "Densité =" << densite << "Kg/m3" << endl;
    cout << "Longueur =" << longueur/1000 << "m" << endl;
    cout << "Largeur de la barre = " << largeur << "mm" << endl;
    cout << "Sections du rectangle = " << BarreRectangle::CalculerSections() << "mm2" << endl;
    cout << "Masse du rectangle = " << BarreRectangle::CalculerMasse() << "Kg" << endl;
    cout << endl;
}
double BarreRectangle::CalculerSections()
{
    return longueur * largeur;
}
double BarreRectangle::CalculerMasse()
{
    return (longueur/1000) * (BarreRectangle::CalculerSections()/1000000) * densite;
}

