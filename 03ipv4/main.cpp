/* #include <iostream>
#include "ipv4.h"
using namespace std;

void AfficherTableau(const unsigned char *tab);

int main()
{
    unsigned char adresse[4]= {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    unsigned char premiereAdresse[4];
    unsigned char derniereAdresse[4];

    IPv4 uneAdresse(adresse, 24);

    cout << "Adresse IPv4 ";
    AfficherTableau(adresse);
    uneAdresse.ObtenirMasque(masque);
    cout <<"Masque: ";
    AfficherTableau(masque);
    uneAdresse.ObtenirAddresseReseau(reseau);
    cout <<"Reseau: ";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout <<"Broadcast: ";
    AfficherTableau(diffusion);
    uneAdresse.ObtenirPremiereAdresse(premiereAdresse);
    cout <<"Premiere adresse: ";
    AfficherTableau(premiereAdresse);
    uneAdresse.ObtenirDerniereAdresse(derniereAdresse);
    cout <<"Derniere adresse: ";
    AfficherTableau(derniereAdresse);
    cout <<"Nombre de machine: ";
    cout << uneAdresse.ObtenirNombreMachine() << endl;
    return 0;
}

void AfficherTableau(const unsigned char *tab){
    for(int indice=0; indice <4; indice++ ){
        cout <<static_cast<int> (tab[indice]);
        if(indice <3)
            cout<< ".";
    }
    cout << endl;
}
*/
#include <iostream>
#include "ipv4_coplien.h"

using namespace std;
void AfficherTableau(const unsigned char *tab);
int main()
{
    unsigned char adresse[4]= {192,168,1,1};
    unsigned char reseau[4];
    IPv4 * uneAdresse = new IPv4(adresse, 24); // instanciation de la classe IPv4
    IPv4 adresseCopie = *uneAdresse; // l'instance est recopiée dans une autre
    cout << "Adresse réseau avant : ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);

    delete uneAdresse; // destruction de la première instance

    cout << "Adresse réseau après destruction : ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);
    return 0;
}

void AfficherTableau(const unsigned char *tab){
    for(int indice=0; indice <4; indice++ ){
        cout <<static_cast<int> (tab[indice]);
        if(indice <3)
            cout<< ".";
    }
    cout << endl;
}
