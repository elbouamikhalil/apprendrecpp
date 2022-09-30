#include "caissedebouteille.h"

using namespace std;
CaisseDeBouteille::CaisseDeBouteille(const int _nbBouteille,
                                       const int _contenance,
                                       const int _largeur,
                                       const int _hauteur,
                                       const int _profondeur):
    Contenant(_largeur, _hauteur, _profondeur),
    nbBouteille(_nbBouteille),
    contenance(_contenance)
{
    cout << "constructeur de caisseDeBouteille" << endl;
}

CaisseDeBouteille::~CaisseDeBouteille()
{
    cout << "destructeur de caisseDeBouteille" << endl;
}


int CaisseDeBouteille::CalculerVolume()
{
    return contenance * nbBouteille;
}

