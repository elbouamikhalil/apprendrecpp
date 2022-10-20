#ifndef STOCK_H
#define STOCK_H

#include "rouleau.h"
#include "set"
typedef multiset<Rouleau>::iterator POSITION_STOCK;
class Stock: public multiset <Rouleau>
{
public:
    void Visualiser();
    void AjouterRouleau(const Rouleau _nouveau);
    int RechercherSerie(POSITION_STOCK &_positionDebut);
    bool SortirRouleau(const POSITION_STOCK &_positionRouleau);
};

#endif // STOCK_H
