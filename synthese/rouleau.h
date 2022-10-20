#ifndef ROULEAU_H
#define ROULEAU_H
#include <iostream>

using namespace std;

class Rouleau
{
private :
    string reference;
    int diametre;
    int rangee;
    int colonne;

public :
    Rouleau(){};
    Rouleau(const string _reference, const int _diametre);
    void AffecterAlveole(const int _rangee, const int _colonne);
    void ObtenirLocalisation(int &_rangee, int &_colonne) const;
    bool operator <(Rouleau _autreRouleau) const;
    int operator -(Rouleau _autreRouleau)const ;
    void Visualiser()const;
};

#endif // ROULEAU_H
