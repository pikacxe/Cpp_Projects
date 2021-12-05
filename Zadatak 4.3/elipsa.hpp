#ifndef DEF_ELIPSA
#define DEF_ELIPSA

#include "figura.hpp"

class Elipsa : public Figura{
    protected:
        double x;
        double y;
    public:
        Elipsa() : x(1),y(1){}
        Elipsa(double xx,double yy): x(xx), y(yy){}
        Elipsa(const Elipsa& e): x(e.x), y(e.y){}

        double getO() const { return PI*(3*( x + y) - sqrt((3 * x + y) * (x + 3 * y)));}
        double getP() const {return PI * x * y;}
};

#endif
