#ifndef LSC_RDV_H
#define LSC_RDV_H

class RDV {};

class LSC_RDV {
    public:
        void ajouterRDV();
        void supprimerRDV();

        void lister();

    private:
        RDV * q_tete
};

#endif // LSC_RDV_H
