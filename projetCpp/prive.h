#ifndef PRIVE_H
#define PRIVE_H

#include <contact.h>


class prive : public contact
{
    public:
        prive(string nomEntreprise, adresse adresseEntreprise, srting email);
        virtual ~prive();

        string GetnomEntreprise() { return nomEntreprise; }
        void SetnomEntreprise(string val) { nomEntreprise = val; }
        adresse GetadresseEntreprise() { return adresseEntreprise; }
        void SetadresseEntreprise(adresse val) { adresseEntreprise = val; }
        srting Getemail() { return email; }
        void Setemail(srting val) { email = val; }

    protected:

    private:
        string nomEntreprise;
        adresse adresseEntreprise;
        srting email;
};

#endif // PRIVE_H
