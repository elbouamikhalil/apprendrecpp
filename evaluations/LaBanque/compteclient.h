#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include "comptebancaire.h"
#include "compteepargne.h"


using namespace std;
class CompteClient
{

public:
    CompteClient(const string _nom, const int _numero);
    ~CompteClient();
    void OuvrirCompteEpargne();
    void GererCompteBancaire();
    void GererCompteEpargne();

private:

    string nom;
    int numero;




};


#endif // COMPTECLIENT_H
