#ifndef PUBLIQUE_H
#define PUBLIQUE_H

#include <contact.h>


class publique : public contact
{
    public:
        publique(adresse adressePerso, date dob);
        virtual ~publique();

        date Getdob() { return dob; }
        void Setdob(date val) { dob = val; }
        adresse GetadressePerso() { return adressePerso; }
        void SetadressePerso(adresse val) { adressePerso = val; }

    protected:

    private:
        date dob;
        adresse adressePerso;
};

#endif // PUBLIQUE_H
