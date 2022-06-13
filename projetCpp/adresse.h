#ifndef ADRESSE_H
#define ADRESSE_H


class adresse
{
    public:
        adresse(int num, string rue, string ville, int cp);
        virtual ~adresse();

        int Getnum() { return num; }
        void Setnum(int val) { num = val; }
        string Getrue() { return rue; }
        void Setrue(string val) { rue = val; }
        string Getville() { return ville; }
        void Setville(string val) { ville = val; }
        int Getcp() { return cp; }
        void Setcp(int val) { cp = val; }

    protected:

    private:
        int num;
        string rue;
        string ville;
        int cp;
};

#endif // ADRESSE_H
