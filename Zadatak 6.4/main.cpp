#include <iostream>
#include "evidencijalekova.hpp"

using namespace std;


int main() {
    Lek lek(123456,"Bromazepan", 300, 200);
    Lek lek1(123457,"Neki lek", 300, 200);
    Lek lek2(123458,"Neki lek 2", 300, 200);
    Lek lek3(123459,"Neki lek 3", 300, 200);
    Lek lek4(123460,"Neki lek 4", 300, 200);
    Lek lek5(123461,"Neki lek 5", 300, 200);
    
    Evidencija e("Apoteka Jankovic","22.11.2021.");
    e.unesiLek(lek);
    e.unesiLek(lek1);
    e.unesiLek(lek2);
    e.unesiLek(lek3);
    e.unesiLek(lek4);
    e.unesiLek(lek5);

    cout << e << endl;
    return 0;

}