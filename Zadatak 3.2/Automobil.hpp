#ifndef DEF_AUTOMOBIL
#define DEF_AUTOMOBIL
#include "menjac.hpp"
#include "Skoljka.hpp"

class Automobil{
    private:
        Menjac menjac;
        Skoljka skoljka;
    public:
        Automobil(): menjac(),skoljka(){}
        Automobil(Menjac m, Skoljka s): menjac(m), skoljka(s){}
        Automobil(const Automobil& a): menjac(a.menjac), skoljka(a.skoljka){}

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