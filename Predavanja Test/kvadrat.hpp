#ifndef KVADRAT_DEF
#define KVADRAT_DEF

class Kvadrat{
    private:
         double a;
    public:
         Kvadrat() {a=1;}
    double getA() const { return a;}
    void setA(double aa) { a = aa;}
    double getO() const {return 4*a;}
    double getP() const {return a*a;}
};
#endif