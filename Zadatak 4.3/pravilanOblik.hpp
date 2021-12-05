#ifndef DEF_PRAVILAN_OBLIK
#define DEF_PRAVILAN_OBLIK

#include "figura.hpp"
#include "kvadrat.hpp"
#include "krug.hpp"


class PravilanOblik: public Figura{
    private:
        Kvadrat kv;
        Krug kr;
    public:
        PravilanOblik(): kv(), kr(){}
        PravilanOblik(double a): kv(a), kr(a){}
        PravilanOblik(const PravilanOblik& po): kv(po.kv), kr(po.kr){}

        double getO() const { return kv.getO() + kr.getO();}
        double getP() const { return kv.getP() - kr.getP();}

};

#endif
