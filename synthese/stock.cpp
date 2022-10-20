#include "stock.h"



void Stock::Visualiser()
{
    POSITION_STOCK it;
    int nb = 0;
    for (it = begin(); it != end(); it++){
        it ->Visualiser();
        nb++;
    }
    if(nb == 0 ){
        cout<<"le magasin est vide"<<endl;
    }
}

void Stock::AjouterRouleau(const Rouleau _nouveau)
{
    insert(_nouveau);
}

int Stock::RechercherSerie(POSITION_STOCK &_positionDebut)
{
    int nbRouleau = (int) size();
   POSITION_STOCK positionPremier = begin();
   _positionDebut = positionPremier;
   if(nbRouleau > 6){
       nbRouleau = 6;
       POSITION_STOCK positionDernier = begin();
       for(int indice = 1; indice <6 ; indice++){
           positionDernier++;
       }
       int valeurRetenue = *positionDernier - *positionPremier;
       while(positionDernier !=end()){
           if(valeurRetenue > (*positionDernier - *positionPremier)){
               _positionDebut = positionPremier;
               valeurRetenue = *positionDernier - *positionPremier;
           }
           positionDernier++;
           positionPremier++;
       }
   }
   return nbRouleau;
}

bool Stock::SortirRouleau(const POSITION_STOCK &_positionRouleau)
{
    bool rouleauSuppr = false;
    if(_positionRouleau !=end()){
        rouleauSuppr = true;
        erase(_positionRouleau);
    }
    return rouleauSuppr;
}
