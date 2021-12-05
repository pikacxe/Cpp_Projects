#ifndef DEF_ARTIKAL
#define DEF_ARTIKAL

#include <iostream>
#include "../dinstring.hpp"

using namespace std;

class Artikal{
    private:
        DinString naziv;
        double cena;
        static int brInstanci;
    public:
        Artikal(): naziv(), cena(){
            brInstanci++;
        }
        Artikal(const char* naziv, const double cena): naziv(naziv), cena(cena){
            brInstanci++;
        }
        Artikal(const DinString& naziv, const double cena): naziv(naziv), cena(cena){
            brInstanci++;
        }
        Artikal(const Artikal& a): Artikal(a.naziv,a.cena){
            brInstanci++;
        }
    friend ostream& operator<< (ostream& out, const Artikal& a){
        out<< "Artikal: " << a.naziv << endl;
        out<< "Cena: " << a.cena << endl;
        out<< "Broj artikala: " << a.brInstanci << endl;
        return out;
    }
};

int Artikal::brInstanci = 0;

#endif