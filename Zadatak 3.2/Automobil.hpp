#ifndef DEF_AUTOMOBIL
#define DEF_AUTOMOBIL
#include "menjac.hpp"
#include "Skoljka.hpp"

class Automobil: public Menjac ,public Skoljka{
    private:
        Menjac menjac;
        Skoljka skoljka;
    public:
        Automobil(): Menjac(),Skoljka(){}
        Automobil(Menjac m, Skoljka s): Menjac(m), Skoljka(s){}
        Automobil(const Automobil& a): Menjac(a.menjac), Skoljka(a.skoljka){}

        bool setBrojBrzina(int br){
           return menjac.setBrojBrzina(br);
        }
        void setBoja(BojaSkoljke b){
            skoljka.setBoja(b);
        }
        void setTipMenjaca(TipMenjaca tm){
            menjac.setTip(tm);
        }
        int getBrojBrzina() const { return menjac.getBrBrzina();}
        TipMenjaca getTipMenjaca() const { return menjac.getTip();}
        BojaSkoljke getBoja() const {return skoljka.getBoja();}

};
#endif