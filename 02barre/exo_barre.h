#ifndef EXO_BARRE_H
#define EXO_BARRE_H
#include <iostream>
#include <string>

using namespace std;

class exo_barre
{
public:
    exo_barre(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage);
    void AfficherCaracteristiques();

protected:

    int longueur;
    double densite;
    string nomAlliage;
    string reference;

};

#endif // EXO_BARRE_H
