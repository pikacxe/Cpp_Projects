#ifndef DEF_OSOBA
#define DEF_OSOBA

#include <iostream>
#include "../dinstring.hpp"


class Osoba {
    protected:
        DinString ime;
        DinString prezime;
    public:
        Osoba() : ime(), prezime(){}
        Osoba(const char* ime, const char* prezime) : ime(ime), prezime(prezime) {}
        Osoba(const DinString& ime, const DinString& prezime): ime(ime), prezime(prezime) {}
        Osoba(const Osoba& o){
            ime = o.ime;
            prezime = o.prezime;
        }
        virtual void ispis() const {
            cout << ime << " " << prezime << endl;
        }
};

#endif
