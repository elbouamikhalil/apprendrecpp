#include <iostream>
#include "exo_barre.h"
#include "barreCarree.h"
#include "barreRectangle.h"
#include "BarreRonde.h"

using namespace std;

int main()
{
    cout << "Lego" << endl;
    exo_barre b1("000001",5,5000,"acier");
    exo_barre b2("000002",6,6000,"cuivre");


    b1.AfficherCaracteristiques();
    b2.AfficherCaracteristiques();


    barreRonde br1("000003",12,10000,"acier",20);
    br1.AfficherCaracteristiques();

    cout << endl;
}
