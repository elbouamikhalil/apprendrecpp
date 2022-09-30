#include "exo_barre.h"
#include <iostream>

using namespace std;

exo_barre::exo_barre(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage):
    longueur(_longueur),
    densite(_densite),
    nomAlliage(_nomAlliage),
    reference(_reference)
{

}

void exo_barre::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reference =" << reference << endl;
    cout << "Nom de l'Alliage =" << nomAlliage << endl;
    cout << "Densité =" << densite << "Kg/m3" << endl;
    cout << "Longueur =" << longueur/1000 << "m" << endl;
    cout << endl;
}
