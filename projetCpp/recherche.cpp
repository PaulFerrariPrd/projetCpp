#include "recherche.h"
#include <stdio.h>
#include "./sqlite-amalgamation-3270200/sqlite3.h"
#include "contact.h"
#include "prive.h"
#include "publique.h"
#include "adresse.h"
using namespace std;

recherche::recherche(int r)
{
    this->Setr(r);
}

recherche::~recherche()
{
    //dtor
}

void recherche::searchSql()
{
    sqlite3 *db;        // connection Base
    int rc;             // code retour
    char *errmsg;       // pointeur vers err

    string genre;
    int i =0;

    sqlite3_stmt *stmt;
    int nbCols=0;

    rc = sqlite3_open("dbContacts.db", &db);
    if (rc != SQLITE_OK)
    {
        printf("ERREUR Open : %s\n", sqlite3_errmsg(db));
        return ;
    }

    sqlite3_prepare_v2(db,"select all from CONTACTS",-1,&stmt, NULL);


        while ( (rc = sqlite3_step(stmt)) == SQLITE_ROW)
        {
            int s0 = sqlite3_column_int(stmt, 0);//ID
            std::string s1(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)));//NOM
            std::string s2(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2)));//PRENOM
            std::string s3(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3)));//SEXE
            cout << "sexe:"<< s3[0]<<endl;
            std::string s4(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4)));//ENTREPRISE
            std::string s5(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 5)));//RUE
            std::string s6(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 6)));//COMPLEMENT
            std::string s7(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 7)));//CP
            std::string s8(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 8)));//VILLE
            std::string s9(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 9)));//MAIL
            std::string s10(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 10)));//DATE

            if (sqlite3_column_text(stmt, 3)==NULL)
            {
                adresse adr(0,s5,s8,s7);
                this->mapdb[i]=publique(adr,s10,s0,s1,s2,s3[0]);

                i++;
            }
            else
            {
                adresse adr(0,"a","b",s7);
                this->mapdb[i] = prive(s4,adr,s9,s0,s1,s2,s3[0]);
                i++;
            }
        }


    }
void recherche::operator<<(recherche affiche)
{

    for(map<int, contact>::iterator itC = mapdb.begin(); itC != mapdb.end(); itC++)
    {

        itC->second.affiche();
    }


}




