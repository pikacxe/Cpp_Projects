#ifndef DEF_STUDENT
#define DEF_STUDENT

#include "osoba.hpp"

class Student : public Osoba{
    protected:
        int brIndeksa;
    public:
        Student(): Osoba(), brIndeksa() {}
        Student(const char* ime, const char* prezime, int brIndeksa) : Osoba(ime,prezime), brIndeksa(brIndeksa) {}
        Student(const DinString& ime, const DinString& prezime, int brIndeksa): Osoba(ime,prezime), brIndeksa(brIndeksa) {}
        Student(const Student& s): Osoba((Osoba)s), brIndeksa(s.brIndeksa){}
        void ispis() const{
            Osoba:: ispis();
            cout << "Broj indeksa: " << brIndeksa << endl;
        }
};
#endif
