#ifndef PERSONNE_H
#define PERSONNE_H

class RDV {};

class personne {
    public:
        personne(string nom, string prenom, string NumTel, string AdresseMail);
        ~personne();

        personne & modifierPersonne();

        void ajouterRDV(RDV* rdv);
        void enleverRDV(RDV* rdv);

        void affichePersonne();

    private:
        string q_Nom;
        string q_Prenom;
        string q_NumTel;
        string q_AdresseMail;
        personne * q_suiv;
        vector<RDV *> q_ListeRDV;
};

#endif // PERSONNE_H
