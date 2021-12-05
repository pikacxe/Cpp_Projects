#ifndef DEF_JS_TROUGAO
#define DEF_JS_TROUGAO

#include "trougao.hpp"

class JS_Trougao : public Trougao{
    public:
        JS_Trougao() : Trougao() {}
        JS_Trougao(double a) : Trougao(a,a,a){}
        JS_Trougao(const JK_Trougao& t) : Trougao(t) {}
};


#endif
