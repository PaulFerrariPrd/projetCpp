#ifndef PUBLIQUE_H
#define PUBLIQUE_H

#include "contact.h"
#include "date.h"
#include "adresse.h"



class publique : public contact
{
    public:
        publique(adresse adressePerso, string dob,int id, string nom, string prenom, char sexe);
        virtual ~publique();

        string Getdob() { return dob; }
        void Setdate (string d){dob = d;}

        void affiche();

    protected:

    private:
        string dob;
        //adresse adressePerso;
};

#endif // PUBLIQUE_H
