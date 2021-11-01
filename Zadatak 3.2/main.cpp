#include <iostream>
#include "Automobil.hpp"

using namespace std;

void ispisMenjac(const Menjac& m){
    cout << "Menjac:"<< endl;
    cout << "\tBrzina = "<<m.brojBrzina<< endl;
    cout << "\tTip = " << (m.tip == AUTOMATIK ? "Automatik" : "Manuelni") << endl;
}

void ispisSkoljka(const Skoljka& s){
    cout << "Skoljka:"<<endl;
    cout << "\tBoja = ";
    switch (s.boja)
    {
    case PLAVA:
        cout << "Plava" << endl;
        break;
    case ZELENA:
        cout << "Zelena" << endl;
        break;
    case CRVENA:
        cout << "Crvena" << endl;
        break;
    }
}
void ispisAutomobil(const Automobil& a){
    cout << "Automobil" << endl;
    cout << "**************************" << endl;
    ispisMenjac(a.menjac);
    ispisSkoljka(a.skoljka);
    cout << endl;

}

int main(){
    Menjac m,m1(MANUELNI,6), m2(m1);
    Skoljka s,s1(CRVENA), s2(s1);
    Automobil a,a1(m1,s1), a2(a1);

    ispisAutomobil(a1);
    return 0;
}