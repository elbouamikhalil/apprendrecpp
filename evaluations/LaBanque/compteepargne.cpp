#include "compteepargne.h"
#include <iostream>

CompteEpargne::CompteEpargne(const float _tauxInterets):
CompteBancaire(100),
tauxInterets(_tauxInterets)
{

}
CompteEpargne::CompteEpargne(const float _solde,
                             const float _tauxInterets):
    CompteBancaire(_solde),
    tauxInterets(_tauxInterets)
{

}


void CompteEpargne::CalculerInterets()
{
    solde = solde+(solde*0.04);
}



