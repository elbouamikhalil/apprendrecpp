#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class Alveoleslibres : public vector <unsigned int>
{
public:
    Alveoleslibres(const int _nbRangees=10, const int _nbColonnes=20);
    bool Reserver(int &_rangee, int &_colonne);
    bool Liberer(const int _rangee, const int colonne);
    void Visualiser();




private :
    int nbRangees;
    int nbColonnes;
};

#endif // ALVEOLESLIBRES_H
