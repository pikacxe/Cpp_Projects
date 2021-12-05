#ifndef DEF_KRUG
#define DEF_KRUG

#include "figura.hpp"

class Krug : public Figura{
    protected:
        double r;
    public:
        Krug(): r(1) {}
        Krug(double rr): r(rr){}
        Krug(const Krug& k): r(k.r){}

    double getO() const {return PI * 2 * r;}
    double getP() const {return r * r * PI;}

};

#endif 
