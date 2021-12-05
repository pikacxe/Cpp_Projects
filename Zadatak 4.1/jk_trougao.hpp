#ifndef DEF_JK_TROUGAO
#define DEF_JK_TROUGAO

#include "trougao.hpp"

class JK_Trougao : public Trougao{
    public:
        JK_Trougao() : Trougao() {}
        JK_Trougao(double a, double b) : Trougao(a,b,b){}
        JK_Trougao(const JK_Trougao& t) : Trougao(t) {}
};


#endif
