#ifndef CONTACT_H
#define CONTACT_H


class contact
{
    public:
        contact(int id, string nom, string prenom, char sexe);
        virtual ~contact();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }
        string Getprenom() { return prenom; }
        void Setprenom(string val) { prenom = val; }
        char Getsexe() { return sexe; }
        void Setsexe(char val) { sexe = val; }

    protected:

    private:
        int id;
        string nom;
        string prenom;
        char sexe;
};

#endif // CONTACT_H
