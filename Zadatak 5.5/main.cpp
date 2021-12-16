#include "trezor.hpp"
#include "dijamant.hpp"



int main(){
    Dijamant d(), d1(100,5), d2(d1);
    Trezor<Dijamant,10> t;

    t.ubaciSadrzaj(d1);
    t.ubaciSadrzaj(d1);
    t.ubaciSadrzaj(d1);
    t.ubaciSadrzaj(d1);
    cout << t.getBrojPopunjenihSefova() << endl;
    t.izbaciSadrzaj(1);
    cout << t.getBrojPopunjenihSefova() << endl;



    return 0;
}
