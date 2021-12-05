#ifndef DEF_PRAVOUGAONIK    
#define DEF_PRAVOUGAONIK

#include "figura.hpp"

class Pravougaonik : public Figura{
    protected:
        double a;
        double b;
    public:
        Pravougaonik(): a(0),b(0){}
        Pravougaonik(double aa,double bb): a(aa), b(bb){}
        Pravougaonik(const Pravougaonik& p): a(p.a),b(p.b){}

        double getA() const {return a;}
        double getB() const {return b;}

        virtual double getO() const {
            return 2*a+2*b;
        }
        virtual double getP() const {
            return a*b;
        }
};
#endif
