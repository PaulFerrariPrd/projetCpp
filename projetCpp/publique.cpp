#include "publique.h"


publique::publique(adresse adressePerso, string dob ,int id, string nom, string prenom, char sexe)
    :contact(id,nom,prenom,sexe,adressePerso)
{
    this->Setdate(dob);
}

publique::~publique()
{
    cout << "destruction du contact publique"<<endl;
}

void publique::affiche()
{
    string genre;
    if(this->Getsexe()=='M')
            {
                genre = "Mr.";
            }
            else
            {
                genre = "Mme.";
            }
    cout << "Particulier :"<< Getid()<< endl;
    cout << genre<<Getnom() <<Getprenom()<<endl;
    cout << Getadresse().Getrue()<<endl;
    cout << Getadresse().Getcp()<< Getadresse().Getville()<<endl;
    cout << "née le : "<< Getdob()<<endl;
}
