#ifndef DEF_TELEFON
#define DEF_TELEFON

#include "../dinstring.hpp"

using namespace std;

class Telefon {
    protected:
        DinString broj;
    public:
        Telefon(): broj(){}
        Telefon(const char* broj): broj(broj){}
        Telefon(const DinString& broj): broj(broj){}
        Telefon(const Telefon& t): broj(t.broj){}

        bool pozovi(const DinString& broj1) {
            return broj == broj1;
        }
};

#endif
