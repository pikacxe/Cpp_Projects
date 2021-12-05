#ifndef DEF_KRUG
#define DEF_KRUG

#define PI 3.14

class Krug{
    protected:
        double r;
    public:
        Krug(): r() {}
        Krug(double rr): r(rr){}
        Krug(const Krug& k): r(k.r){}

    double getO() const {return PI * 2 * r;}
    double getP() const {return r * r * PI;}
    double getR() const {return r;}

};

#endif 
