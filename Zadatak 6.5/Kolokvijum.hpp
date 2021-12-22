#ifndef DEF_KOLOKVIJUM
#define DEF_KOLOKVIJUM

#include "Test.hpp"

class Kolokvijum: public Test{
    public:
        Kolokvijum(): Test("",0){}
        Kolokvijum(const char* naziv): Test(naziv,int(rand() % 25 +1)){}
        int getPoeni() const {return osvojeniPoeni;}
        bool polozio() const {return osvojeniPoeni > 12 ? true:false;}
};

#endif
