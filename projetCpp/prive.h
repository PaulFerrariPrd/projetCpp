#ifndef PRIVE_H
#define PRIVE_H

#include "contact.h"
#include "adresse.h"



class prive : public contact
{
    public:
        prive(string nomEntreprise,adresse adresseEntreprise, string email,int id, string nom, string prenom, char sexe);
        virtual ~prive();

        string GetnomEntreprise() { return nomEntreprise; }
        void SetnomEntreprise(string val); //{ nomEntreprise = val; }

        //adresse GetadresseEntreprise() { return adresseEntreprise; }
        //void SetadresseEntreprise(adresse val) { adresseEntreprise = val;}

        string Getemail() { return email; }
        void Setemail(string val); // { email = val; }

        void affiche();

    protected:

    private:
        string nomEntreprise;
        //adresse adresseEntreprise;
        string email;
};

#endif // PRIVE_H
