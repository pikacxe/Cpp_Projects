#ifndef DEF_SKOLJKA
#define DEF_SKOLJKA

enum BojaSkoljke { PLAVA, CRVENA, ZELENA};

class Skoljka{
    private:
        BojaSkoljke boja;
    public:
        Skoljka(){
            boja = PLAVA;
        }
        Skoljka(BojaSkoljke b){
            boja = b;
        }
        Skoljka(const Skoljka& s){
            boja = s.boja;
        }
        void setBoja(BojaSkoljke b){
            boja = b;
        }
        BojaSkoljke getBoja() const { return boja;}

        friend void ispisSkoljka(const Skoljka&);
};


#endif