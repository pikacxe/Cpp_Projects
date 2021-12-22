#ifndef DEF_VOCE
#define DEF_VOCE

#include "proizvod.hpp"
#include <iostream>

using namespace std;

class Voce : public Proizvod{
    protected:
        DinString zemljaPorekla;
        int rokTrajanja;
    public:
        Voce(const DinString& naziv, int cena, const DinString& zemljaPorekla, int rokTrajanja): Proizvod(naziv,cena), zemljaPorekla(zemljaPorekla), rokTrajanja(rokTrajanja){}
        Voce(const char* naziv, int cena, const char* zemljaPorekla, int rokTrajanja): Proizvod(naziv,cena), zemljaPorekla(zemljaPorekla), rokTrajanja(rokTrajanja){}
        void izracunajPopust() {
            if(rokTrajanja > 5){
                cena -= cena * 0.33;
            }
            else if(rokTrajanja == 0){
                cena = 0;
            }
            else if(rokTrajanja < 5 && rokTrajanja > 1){
                cena -= cena * 0.66;
            }
        }
        void ispisi(){
            cout << "---------Voce-------" << endl; 
            cout << "Naziv:" << naziv << endl;
            cout << "Cena: " << cena << endl;
            cout << "Zemlja porekla: " << zemljaPorekla << endl;
            cout << "Rok trajanja: " << rokTrajanja << endl;
            cout << "--------------------" << endl;
        }
};

#endif
