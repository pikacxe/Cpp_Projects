#ifndef DEF_VALJAK
#define DEF_VALJAK

#include "krug.hpp"
#include "pravougaonik.hpp"

class Valjak{
    private:
        Krug baza;
        Pravougaonik omotac;
    public:
        Valjak(): baza(), omotac(){}
        Valjak(double r, double h): baza(r), omotac(2 * r * PI, h){}
        Valjak(const Valjak& v): baza(v.baza), omotac(v.omotac){}

        double getR() const { return baza.getR();}
        double getH() const { return omotac.getB();}
        double getP() const { return baza.getP() * 2 + omotac.getP();}
        double getV() const { return baza.getP() * omotac.getP();}

};
#endif
