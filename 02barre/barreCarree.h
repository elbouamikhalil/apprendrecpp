#ifndef BARRECARREE_H
#define BARRECARREE_H
#include <iostream>
#include <string>

#include "exo_barre.h"

using namespace std;


class BarreCarree : public exo_barre
{
public:
    BarreCarree(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int coter);
    ~BarreCarree();

    void AfficherCaracteristiques();
    double CalculerSections();
    double CalculerMasse();

private:
    int coter;
};

#endif // BARRECARREE_H
