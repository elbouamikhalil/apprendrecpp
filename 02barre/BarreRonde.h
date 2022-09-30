#ifndef BARRERONDE_H
#define BARRERONDE_H
#include <iostream>
#include <string>

#include "exo_barre.h"

using namespace std;

class barreRonde : public exo_barre
{
public:
    barreRonde(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _diametre);

    void AfficherCaracteristiques();
    double CalculerSections();
    double CalculerMasse();

private:

    int diametre;
};

#endif // BARRERONDE_H
