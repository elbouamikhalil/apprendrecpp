#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class CompteBancaire
{

public:
     float solde;
    CompteBancaire(const float _solde);
    ~CompteBancaire();
    void deposer(const float _montant);
    bool retirer (const float _montant);
    float ConsulterSolde;
};

#endif // COMPTEBANCAIRE_H
