#ifndef ADRESSE_H
#define ADRESSE_H
#include <iostream>

 using namespace std;

class adresse
{
    public:
        adresse(int num =0, string rue="a", string ville="b", string cp="10");
        virtual ~adresse();

        int Getnum() { return num; }
        void Setnum(int val) { num = val; }
        string Getrue() { return rue; }
        void Setrue(string val) { rue = val; }
        string Getville() { return ville; }
        void Setville(string val) { ville = val; }
        string Getcp() { return cp; }
        void Setcp(string val) { cp = val; }

    protected:

    private:
        int num;
        string rue;
        string ville;
        string cp;
};

#endif // ADRESSE_H
