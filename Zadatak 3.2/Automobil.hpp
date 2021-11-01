#ifndef DEF_AUTOMOBIL
#define DEF_AUTOMOBIL
#include "menjac.hpp"
#include "Skoljka.hpp"

enum Stanje {UGASEN, U_VOZNJI, POKVAREN};


class Automobil{
    private:
        Menjac menjac;
        Skoljka skoljka;
        Stanje stanje;
        int trBrzina;
    public:
        Automobil(): menjac(),skoljka(){
            stanje = UGASEN;
            trBrzina = 0;
        }
        Automobil(Menjac m, Skoljka s): menjac(m), skoljka(s){
            stanje = UGASEN;
            trBrzina = 0;
        }
        Automobil(const Automobil& a): menjac(a.menjac), skoljka(a.skoljka){
            stanje = a.stanje;
            trBrzina = a.trBrzina;
        }

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
        Stanje getStanje() const { return stanje;}
        int getTrBrzina() const { return trBrzina;}

        bool upali(){
            return stanje == UGASEN ? stanje = U_VOZNJI : false;
        }
        bool ugasi(){
            if(stanje = U_VOZNJI){
                stanje = UGASEN;
                trBrzina = 0;
                return true;
            }
            return false;
        }
        bool pokvari(){
            if(stanje == U_VOZNJI || stanje == UGASEN){
                stanje = POKVAREN;
                trBrzina = 0;
                return true;
            }
            return false;
        }
        bool popravi(){
            if( stanje  == POKVAREN){
                stanje = UGASEN;
                return trBrzina = 0;
            }
            return false;
        }
        bool povecajBrzinu(){
            return trBrzina < 6 ? trBrzina++ : false;
        }
        bool smanjiBrzinu(){
            return trBrzina > 1 ? trBrzina-- : false;
        }


        friend void ispisAutomobil(const Automobil&);

};
#endif