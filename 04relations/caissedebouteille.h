#ifndef CAISSEDEBOUTEILLE_H
#define CAISSEDEBOUTEILLE_H
#include "contenant.h"


class CaisseDeBouteille : public Contenant
{
public:
    CaisseDeBouteille(const int _nbBouteille,
                       const int _contenance,
                       const int _largeur,
                       const int _hauteur,
                       const int _profondeur);

    ~CaisseDeBouteille();
    int CalculerVolume();

private:
    int nbBouteille;
    int contenance;
};

#endif // CAISSEDEBOUTEILLE_H
