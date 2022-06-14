#ifndef PUBLIQUE_H
#define PUBLIQUE_H

#include "contact.h"
#include "date.h"
#include "adresse.h"



class publique : public contact
{
    public:
        publique(adresse adressePerso, date dob,int id, string nom, string prenom, char sexe);
        virtual ~publique();

        //date Getdob() { return dob; }
        void Setdate (date d){dob = d;}
        void Setdateinfo (int d,int m,int y)
        {
            dob.Setd(d);
            dob.Setm(m);
            dob.Sety(y);
        }

        //adresse GetadressePerso() { return adressePerso; }
        //void SetadressePerso(adresse val) { adressePerso = val; }


    protected:

    private:
        date dob;
        //adresse adressePerso;
};

#endif // PUBLIQUE_H
