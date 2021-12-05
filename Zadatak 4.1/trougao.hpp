#ifndef DEF_TROUGAO
#define DEF_TROUGAO

#include <cmath>
#include <iostream>

using namespace std;

class Trougao{
    private:
        double a;
        double b;
        double c;
    public:
        Trougao(): a(), b(), c(){}
        Trougao(double aa, double bb, double cc) : a(aa), b(bb), c(cc) {}
        Trougao(const Trougao& t) : a(t.a), b(t.b), c(t.c){}

        double getA() const { return a;}
        double getB() const { return b;}
        double getC() const { return c;}

        void setA(double aa) { a = aa;}
        void setB(double bb) { b = bb;}
        void setC(double cc) { c = cc;}

        double getO() { return a + b + c; }
        double getP() { 
            double s = getO() / 2;
            return sqrt(s*(s-a)*(s-b)*(s-c));
        }

};
#endif
