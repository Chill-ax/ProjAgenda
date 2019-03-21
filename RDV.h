#ifndef RDV_H
#define RDV_H
#include <vector>
#include <string>

using namespace std;

class personne {};

class RDV {
    public:

        RDV(string nom, int Jour, int Mois, int Annee, int HeureDebut,int HeureFin, vector<personne*> listePersonne);
        ~RDV();

        personne & modifierRDV();

        void ajouterPersonne(personne* personne);
        void enleverPersonne(personne* personne);

        void afficheRDV();

    private:
        vector<personne *> q_ListePersonne;
        string q_nom;
        int q_HeureDebut;
        int q_HeuteFin;
        int q_Jour;
        int q_Mois;
        int q_Annee;
        RDV * q_Suiv;
};


#endif // RDV_H
