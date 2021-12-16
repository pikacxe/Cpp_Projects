#ifndef DEF_TELEFON_GEN2
#define DEF_TELEFON_GEN2

#include "telefon.hpp"
#include "kamera.hpp"

class Telefon_Gen2: public Telefon{
    protected:
        Kamera k;
    public:
        Telefon_Gen2(): k(){}
        Telefon_Gen2(int megaPikseli, int freeSpace): k(megaPikseli,freeSpace){}
        Telefon_Gen2(const Telefon_Gen2& t_gen2): k(t_gen2.k){}

        bool slikajSliku(){ return k.slikaj();}

};

#endif
