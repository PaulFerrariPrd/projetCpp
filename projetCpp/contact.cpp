#include "contact.h"
#include <cctype>

contact::contact(int id, string nom, string prenom, char sexe, adresse adresseC)
{
    this->Setadresse(adresseC);
    //this->Setinfoadresse();
    this->Setid(id);
    this->Setnom(nom);
    this->Setprenom(prenom);
    this->Setsexe(sexe);

}


contact::~contact()
{
    cout << "destruction du contact"<<endl;
}

void contact::Setsexe(char val)
{
    switch (val)
    {
    case 'f':
        this->sexe = 'F';
        break;
    case 'm':
        this->sexe = 'M';
        break;
    default :
        this->sexe = '?';
        break;

    }
}

void contact::Setnom(string val)
{
    for (int i=0; i< val.length(); i++  )
    {
        if (val[i]<='A' && val[i]>='Z')
        {
           std::toupper(static_cast<char>(val[i]));
        }
        this->nom = val;
    }
}

void contact::Setprenom(string val)
{
    if (val[0]<='A' && val[0]>='Z')
        {
           std::toupper(static_cast<char>(val[0]));
        }
        this->prenom = val;
}

