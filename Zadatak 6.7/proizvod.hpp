#ifndef DEF_PROIZVOD
#define DEF_PROIZVOD

#include "../dinstring.hpp"

class Proizvod{
    protected:
        int cena;
        DinString naziv;
    public:
        Proizvod(const DinString& naziv, int cena): naziv(naziv), cena(cena){}
        Proizvod(const char* naziv, int cena): naziv(naziv), cena(cena){}
        virtual void izracunajPopust() {}
        virtual void ispisi() {}
        DinString getNaziv() const { return naziv;}
        int getCena() const {return cena;}
};

#endif
