#ifndef _IPV4_H
#define _IPV4_H

#include <math.h>

class IPv4
{
private:
    unsigned char * adresse;
    unsigned char * masque ;
    int NbButA1(unsigned char val);
    void CalculerMasque(unsigned char _cidr);
public:

    IPv4(const unsigned char * _adresse, const unsigned char _cidr);
    IPv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~IPv4(); // destructeur
    // Ajout pour la forme canonique en plus du destructeur
    IPv4(); // constructeur par défaut
    IPv4(const IPv4& _ipv4); // constructeur de copie
    IPv4 &operator= (const IPv4& _ipv4); // opérateur d'affectation

    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
    void ObtenirPremiereAdresse(unsigned char *_premiereAdresse);
    void ObtenirDerniereAdresse(unsigned char *_derniereAdresse);
    unsigned int ObtenirNombreMachine();
};
#endif
