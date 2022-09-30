#include <iostream>
#include "caissedebouteille.h"
#include "contenant.h"
#include "carton.h"

using namespace std;

int main()
{
    CaisseDeBouteille uneCaisse(50,40,30,6,33);
    Carton leCarton(50,40,30,500);

    cout << "Volume de la caisse" << uneCaisse.CalculerVolume() << " cl" << endl;

    Contenant * ptrContenant = static_cast<Contenant *> (&uneCaisse);
    cout << "Volume brute de la caisse " << ptrContenant->CalculerVolume() << endl;

    cout << "autre solution"<< uneCaisse.Contenant::CalculerVolume() << endl;

    return 0;
}
