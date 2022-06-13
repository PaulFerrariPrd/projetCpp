#include "date.h"

date::date(int d, int m, int y)
{
    this->Setd(d);
    this->Setm(m);
    this->Sety(y);
}

date::~date()
{
    //dtor
}
