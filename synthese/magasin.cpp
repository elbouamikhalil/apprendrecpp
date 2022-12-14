#include "magasin.h"



Magasin::Magasin():
    lesAlveolesLibre(NB_RANGEES,NB_COLONNES)
{

}

void Magasin::EntrerRouleau()
{
    string reference;
    int diametre;
    int laRangee;
    int laColonne;

    if(lesAlveolesLibre.Reserver(laRangee,laColonne)){
        cout << "Indiquez les caractéristiques du rouleau à ajouter" <<endl;
        cout << "Référence du rouleau: ";
        cin >> reference;
        cout << "Diamètre du rouleau: ";
        cin >> diametre;
        Rouleau nouveau(reference,diametre);
        nouveau.AffecterAlveole(laRangee, laColonne);
        leStock.AjouterRouleau(nouveau);
        leChariot.DeplacerChariot(VERS_MAGASIN, laRangee, laColonne);
    }else {
        cout << "Il n'y a plus de place dans le magasin" << endl;
    }
}

void Magasin::SortirRouleaux()
{
    Stock::iterator posDebut;
    int laRangee;
    int laColonne;
    Rouleau courant;

    int nbRouleau = leStock.RechercherSerie(posDebut);
    if(nbRouleau>0){
       for(int indice =0; indice <nbRouleau; indice++){
           courant = *posDebut;
           courant.ObtenirLocalisation(laRangee,laColonne);
           lesAlveolesLibre.Liberer(laRangee,laColonne);
           leStock.SortirRouleau(posDebut++);
           leChariot.DeplacerChariot(VERS_ENCEINTE, laRangee, laColonne);
       }
    }else {
        cout << "Il n'y a plus aucun rouleau dans le magasin" << endl;
    }
}


void Magasin::Visualiser()
{
    cout <<"Rouleaux dans le magins: "<< endl;
    if(!leStock.empty()){
        leStock.Visualiser();
    }else {
        cout << "Stock vide" << endl;
    }
    cout <<"Numéros d'alvéoles disponibles: "<<endl;
    if(!lesAlveolesLibre.empty()){
        lesAlveolesLibre.Visualiser();
    } else {
        cout << "Le magasin est complet" << endl;
    }
}
