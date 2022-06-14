#include "prive.h"
#include <cctype>

#include<algorithm>

prive::prive(string nomEntreprise, adresse adresseEntreprise, string email, int id, string nom, string prenom, char sexe)
    :contact(id,nom,prenom,sexe,adresseEntreprise)
{
    this->Setemail(email);
    this->SetnomEntreprise(nomEntreprise);
}


prive::~prive()
{
    cout << "destruction du contact privé"<< endl;
}

void prive::SetnomEntreprise(string val)

{
    if(50< val.length())
    {
        cout << "erreur nom trop long"<< endl;
        this->nomEntreprise = "xxxxxxx";
    }
    else
    {
        for (int i=0; i< val.length(); i++  )
        {
            if (val[i]<='A' && val[i]>='Z')
            {
                std::toupper(static_cast<char>(val[i]));
            }
            this->nomEntreprise = val;
        }
    }

}
void prive::Setemail(string val)
{
    if(val.find_first_of("@")==NULL)
}


