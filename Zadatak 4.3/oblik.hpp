#ifndef DEF_OBLIK
#define DEF_OBLIK


#include "pravougaonik.hpp"
#include "elipsa.hpp"
#include "figura.hpp"

class Oblik : public Figura{
    private:
        Pravougaonik p;
        Elipsa e;
    public:
        Oblik(): p(), e(){}
        Oblik(double a, double b): p(a,b), e(a/2,b/2){}
        Oblik(const Oblik& o): p(o.p), e(o.e){}

        double getO() const { return p.getO() + e.getO();}
        double getP() const { return p.getP() - e.getP();}
};

#endif
