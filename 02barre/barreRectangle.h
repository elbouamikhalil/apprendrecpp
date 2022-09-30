#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include <iostream>
#include <string>

#include "exo_barre.h"

using namespace std;


class BarreRectangle : public exo_barre
{
public:
    BarreRectangle(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _largeur);
    ~BarreRectangle();

    void AfficherCaracteristiques();
    double CalculerSections();
    double CalculerMasse();

private:

    int largeur;
};

#endif // BARRERECTANGLE_H
