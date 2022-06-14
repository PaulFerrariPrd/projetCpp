#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include "adresse.h"

 using namespace std;

class contact
{
    public:
        contact(int id, string nom, string prenom, char sexe, adresse adresseC);
        virtual ~contact();

        int Getid() { return id; }
        void Setid(int val) { id = val; }

        string Getnom() { return nom; }
        void Setnom(string val); // { nom = val; }

        string Getprenom() { return prenom; }
        void Setprenom(string val);// { prenom = val; }

        char Getsexe() { return sexe; }
        void Setsexe(char); //{ sexe = val; }

        void Setadresse (adresse val){adresseC = val;}

        void Setinfoadresse (int num, string rue, string ville, int cp)
        {
            adresseC.Setcp(cp);
            adresseC.Setnum(num);
            adresseC.Setrue(rue);
            adresseC.Setville(ville);
        }

    protected:

    private:
        int id;
        string nom;
        string prenom;
        char sexe;
        adresse adresseC;
};

#endif // CONTACT_H
