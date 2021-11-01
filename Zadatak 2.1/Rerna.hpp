#ifndef RERNA_DEF
#define RERNA_DEF

enum StanjeRerne{
    Iskjlucena,
    Ukljucena,
    Pokvarena
};

class Rerna{
    private:
        StanjeRerne trenutnoStanje;
        int temperatura;
    public:
        Rerna(){
            trenutnoStanje = Ukljucena;
            temperatura = 0;
        }
        Rerna(StanjeRerne t, int temp){
            trenutnoStanje = t;
            temperatura = temp;
        }
        Rerna(const Rerna &r1){
            trenutnoStanje = r1.trenutnoStanje;
            temperatura = r1.temperatura;
        }
        bool ukljuci(){
            switch (trenutnoStanje)
            {
            case Iskjlucena:
                trenutnoStanje = Ukljucena;
                pojacajTemp();
                return true;
                break;
            case Ukljucena:
            case Pokvarena:
                return false;
                break;
            }
        }
        bool iskljuci(){
            switch (trenutnoStanje)
            {
            case Ukljucena:
                temperatura = 0;
                return trenutnoStanje = Iskjlucena;
                break;
            case Iskjlucena:
            case Pokvarena:
                return false;
                break;
            }
        }
        bool pokvari(){
            switch (trenutnoStanje)
            {
            case Ukljucena: case Iskjlucena:
                temperatura = 0;
                return trenutnoStanje = Pokvarena;
                break;            
            default:
                return false;
                break;
            }
        }
        bool popravi(){
            if(trenutnoStanje == Pokvarena){
                trenutnoStanje = Ukljucena;
                pojacajTemp();
                return true;
            }
            return false;
        }

        bool pojacajTemp(){
            if( temperatura+20<=220 && trenutnoStanje == Ukljucena){
                return temperatura+=20;
            }
            return false;
        }
        bool smanjiTemp(){
            if( temperatura-20>=0 && trenutnoStanje == Iskjlucena){
                return temperatura-=20;
            }
            return false;
        }
        StanjeRerne getTrenutnoStanje() const{
            return trenutnoStanje;
        }
        int getTemp() const{
            return temperatura;
        }
};
#endif