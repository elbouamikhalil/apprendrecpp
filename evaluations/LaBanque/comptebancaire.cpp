#include "comptebancaire.h"



CompteBancaire::CompteBancaire(const float _solde):
    solde (_solde)
{

}
CompteBancaire::~CompteBancaire()
{

}

void CompteBancaire::deposer(const float _montant)
{
if (_montant > 0){
    solde = solde + _montant;
}
else {
cout <<"impossible d'ajouter ce montant"<< endl;
    }
}
bool CompteBancaire::retirer(const float _montant)
{
bool x = true;
if(solde < _montant){
    x=false;
}
else {
x=true;
solde = solde - _montant;
}
return x;
}
float CompteBancaire::ConsulterSolde()       //JE COMPRENDS PAS POURQUOI J'AI UNE ERREUR SUR CETTE LIGNE
{
    return solde;


};


