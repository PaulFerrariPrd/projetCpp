#include "publique.h"


publique::publique(adresse adressePerso, date dob ,int id, string nom, string prenom, char sexe)
    :contact(id,nom,prenom,sexe,adressePerso)
{
    this->Setdate(dob);
}

publique::~publique()
{
    cout << "destruction du contact publique"<<endl;
}
