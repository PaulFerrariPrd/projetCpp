#include "adresse.h"

adresse::adresse(int num, string rue, string ville, int cp)
{
    this->Setnum(num);
    this->Setrue(rue);
    this->Setcp(cp);
    this->Setville(ville);
}

adresse::~adresse()
{
    cout << "destruction de l'adresse "<<endl;
}
