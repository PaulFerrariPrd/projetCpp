#ifndef RECHERCHE_H
#define RECHERCHE_H
#include <map>
#include "contact.h"



class recherche
{
    public:
        recherche(int r);
        virtual ~recherche();

        int Getr() { return r; }
        void Setr(int val) { r = val; }

        void searchSql ();

        void operator<<(recherche);



    protected:

    private:
        int r;
        map<int, contact> mapdb;

};

#endif // RECHERCHE_H
