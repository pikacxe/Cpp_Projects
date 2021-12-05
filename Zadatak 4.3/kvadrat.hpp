#ifndef DEF_KVADRAT
#define DEF_KVADRAT

#include "pravougaonik.hpp"

class Kvadrat : public Pravougaonik{
    protected:
        double a;

    public:
        Kvadrat(): Pravougaonik(){}
        Kvadrat(double aa): Pravougaonik(aa,aa){}
        Kvadrat(const Kvadrat& k) : Pravougaonik(k.a,k.a){}

        double getA() const {return a;}
        
        double getO() const {return 4*a;}
        double getp() const {return a*a;}



};

#endif
