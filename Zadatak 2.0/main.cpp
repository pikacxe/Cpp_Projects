#include <iostream>
#include "kocka.hpp"

using namespace std;

int meni(){
    int opcija = -1;
    while(opcija == -1){ 
        cout << "Unesite zeljenu opciju:\n 0 - Exit\n 1 - Vrednost kocke\n 2 - Baci kocku"<<endl;
        cin >> opcija;
        if(opcija>=0 && opcija <= 2){
            break;
        }
        else{
        cout << "Odabrana nemoguca opcija. Probajte ponovo!"<<endl;  
        opcija = -1;      
        }
    }
    return opcija;
}



int main(){
    Kocka k;
    int opcija = 0;
    do{ 
        opcija = meni();
        switch (opcija)
        {
        case 1:
                cout <<"\n\nTrenutna vrednost kocke je: "<< k.getVrednost()<<"\n"<<endl;
            break;
        case 2:
                cout <<"\n\nKocka je bacena!\n"<<endl;
            break;
        default:
            cout <<"Bye"<<endl;
            break;
        }
    }
    while(opcija !=0);
    return 0;
}