#ifndef DEF_LAMPION
#define DEF_LAMPION

#include "Fenjer.hpp"


class Lampion: public Fenjer {
    protected:
        double cena;
        static int instanceLampiona;
    public:
        Lampion(): Fenjer(), cena() {
            instanceLampiona++;
        }
        Lampion(Materijal m, bool i, double cena): Fenjer(m,i), cena(cena){
            instanceLampiona++;
        }
        int getInstacne() const {return instanceLampiona;}
        double getCena() const {return cena;}
        void setCena(double a) { cena = a;}
        bool popravi(){
            if(!ispravan){
                return ispravan = true;
            }
            return false;
        }
        void ispis(){
            Fenjer::ispis();
            cout << "Cena: " << cena <<endl;
        }
};

int Lampion::instanceLampiona = 0;

#endif
