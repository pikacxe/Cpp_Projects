#include <iostream>

using namespace std;

float cena_karata(int br_karata,float cena_karte){
    if(cena_karte == 0){
        cena_karte = 50;
    }

    return br_karata*cena_karte;
}

int main(){

    int cena,broj;
    cout << "Unesite cenu karte i broj karata: \nCena:";
    cin >> cena;
    cout << "\nBroj: ";
    cin >> broj;

    printf("\nPotrebno je %.2f dinara.\n",cena_karata(broj,cena));

    return 0;
}