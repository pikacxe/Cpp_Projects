#include "Novogodisnja_Rasveta.hpp"
#include "Lampion.hpp"
#include "Fenjer.hpp"

int main(){

    Lampion l1(STIROPOR,true,100);
    Lampion l2(METAL,true, 300);
    Lampion l3(PLASTIKE,false,150);
    Lampion l4(STIROPOR,true,110);
    Lampion l5(METAL,false, 320);
    Lampion l6(PLASTIKE,false,250);


    
    Novogodisnja_Rasveta ng;
    ng.dodaj(&l1);
    ng.dodaj(&l2);
    ng.dodaj(&l3);
    ng.dodaj(&l4);
    ng.dodaj(&l5);
    ng.dodaj(&l6);

    ng.sortiraj();
    ng.sprovediAkciju(0.1);
    ng.sortiraj();

    return 0;
}