#ifndef DEF_PROFESOR
#define DEF_PROFESOR

#include "osoba.hpp"

class Profesor: public Osoba{
    protected:
        DinString predmet;
    public:
        Profesor(): Osoba(), predmet(){}
        Profesor(const DinString& ime, const DinString& prezime, const DinString& predmet): Osoba(ime,prezime), predmet(predmet){}
        Profesor(const char* ime, const char* prezime, const char* predmet): Osoba(ime,prezime), predmet(predmet){}


        void ispis(){
            Osoba::ispis();
            cout << "Predajem " << predmet << endl;
        }

};

#endif
