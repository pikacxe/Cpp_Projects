#ifndef DEF_ODECA
#define DEF_ODECA

#include "proizvod.hpp"
#include <iostream>

using namespace std;

enum Velicina {XS, S, M, L, XL};
enum Tip {MAJICA, PANTALONE};

class Odeca: public Proizvod{
    protected:
        Velicina velicina;
        Tip tip;
        static int velikaOdeca;
    public:
        Odeca(const DinString& naziv, int cena, const Velicina velicina, const Tip tip): Proizvod(naziv,cena), velicina(velicina), tip(tip){
            if(velicina == L || velicina == XL){
                velikaOdeca++;
            }
        }
        Odeca(const char* naziv, int cena, const Velicina velicina, const Tip tip): Proizvod(naziv,cena), velicina(velicina), tip(tip){
            if(velicina == L || velicina == XL){
                velikaOdeca++;
            }
        }
        void izracunajPopust(){
            if(tip == MAJICA && velicina == XS ){
                cena -= cena * 0.60;
            }
            else if( tip == MAJICA){
                cena -= cena * 0.50;
            }
            else{
                cena -= cena * 0.33;
            }
        }
        void ispisi(){
            cout << "---------Odeca-------" << endl; 
            cout << "Naziv:" << naziv << endl;
            cout << "Cena: " << cena << endl;
            cout << "Tip: " << tip << endl;
            cout << "Velicina: " << velicina << endl;
            cout << "---------------------" << endl;
        }

};

int Odeca:: velikaOdeca = 0;

#endif
