#ifndef MAGASIN_H
#define MAGASIN_H

#include "alveoleslibres.h"
#include "stock.h"
#include "rouleau.h"
#include "chariot.h"

#define NB_RANGEES 2
#define NB_COLONNES 5

class Magasin
{

private :
    Alveoleslibres lesAlveolesLibre;
    Stock leStock;
    Chariot leChariot;

public:
    Magasin();
    void EntrerRouleau();
    void SortirRouleaux();
    void Visualiser();
};

#endif // MAGASIN_H
