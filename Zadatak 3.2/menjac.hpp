#ifndef DEF_MENJAC
#define DEF_MENJAC

enum TipMenjaca {AUTOMATIK, MANUELNI};

class Menjac{
    private:
        TipMenjaca tip;
        int brojBrzina;
    public:
        Menjac(){
            tip = AUTOMATIK;
            brojBrzina = 5;
        }
        Menjac(TipMenjaca ttip, int brBrzina){
            tip = ttip;
            brojBrzina = brBrzina;
        }
        Menjac(const Menjac& m){
            tip = m.tip;
            brojBrzina = m.brojBrzina;
        }
        TipMenjaca getTip() const { return tip;}
        int getBrBrzina() const {return brojBrzina;}

        bool setBrojBrzina(int a){
            if (a == 6 || a == 5){
                brojBrzina = a;
                return true;
            }
            else{
                return false;
            }
        }

        void setTip(TipMenjaca tm){
            tip = tm;
        }

        friend void ispisMenjac(const Menjac&);
        
};
#endif