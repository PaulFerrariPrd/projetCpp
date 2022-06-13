#ifndef DATE_H
#define DATE_H


class date
{
    public:
        date(int d, int m, int y);
        virtual ~date();

        int Gety() { return y; }
        void Sety(int val) { y = val; }
        int Getm() { return m; }
        void Setm(int val) { m = val; }
        int Getd() { return d; }
        void Setd(int val) { d = val; }

    protected:

    private:
        int y;
        int m;
        int d;
};

#endif // DATE_H
