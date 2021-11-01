#ifndef TELEVIZOR_DEF
#define TELEVIZOR_DEF

enum stanjeTel{
    Iskljucen,
    Ukljucen,
    Pokvaren
};

class Televizor{
    private:
        stanjeTel stanje;
        int zvuk;
        int kanal;
    public:
        Televizor(){
            stanje = Iskljucen;
            zvuk = 0;
            kanal = 1;
        }
    bool ukljuci(){
        if(stanje == Iskljucen){
            stanje = Ukljucen;
            return true;
        }
        else{
            return false;
        }

    }
    bool iskljuci(){
        if(stanje == Ukljucen){
            stanje == Iskljucen;
            zvuk = 0;
            kanal = 1;
            return true;
        }
        else{
            return false;
        }
    }
    bool popravi(){
        if(stanje == Pokvaren){
            stanje == Iskljucen;
            zvuk = 0;
            kanal = 1;
            return true;
        }
        else{
            return false;
        }        
    }
    bool pokvari(){
        if(stanje == Ukljucen || stanje== Iskljucen){
            stanje == Pokvaren;
            zvuk = 0;
            kanal = 1;
            return true;
        }
        else{
            return false;
        }
    }
    bool pojacajZvuk(){
        if( stanje == Ukljucen && zvuk < 20){
            return zvuk++;
        }
        else{
            return false;
        }
    }
    bool smanjiZvuk(){
        if( stanje == Ukljucen && zvuk>0){
            zvuk--;
            return true;
        }
        else{
            return false;
        }
    }
    bool sledeciKanal(){
        if( stanje == Ukljucen && kanal < 5){
            return kanal++;
        }
        else{
            return false;
        }
    }
    bool prethodniKanal(){
        if(stanje == Ukljucen && kanal >1){
            return kanal--;
        }
        else{
            return false;
        }
    }

    stanjeTel getStanje() const{
        return stanje;
    }
    int getZvuk() const {return zvuk;}
    int getKanal() const { return kanal;}

};
#endif