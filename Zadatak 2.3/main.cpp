#include <iostream>
#include "Televizor.hpp"

using namespace std;

void ispis(const Televizor& t){
    cout << "\n\nTelevizor je: ";
    switch (t.getStanje())
    {
    case Ukljucen:
        cout<<"ukljucen";
        break;
    case Iskljucen:
        cout<<"iskljucen";
        break;
    case Pokvaren:
        cout<<"pokvaren";
        break;
    }
    cout<<" kanal: "<< t.getKanal() <<", zvuk: "<< t.getZvuk() <<endl;
    
}

int meni(){
    int opcija;
    while(true){ 
        cout << "Unesite zeljenu opciju:\n 0 - Exit\n 1 - Ukljuci televizor\n 2 - Iskljuci televizor\n 3 - Pojacaj zvuk\n 4 - Smanji zvuk\n 5 - Sledeci kanal\n 6 - Prethodni kanal\n 7 - Popravi\n 8 - Pokvari\n 9 - Trenutno stanje"<<endl;
        cin >> opcija;
        if (opcija <0 && opcija > 9){
            cout << "Odabrana nemoguca opcija. Probajte ponovo!"<<endl;  
        }
        else{
            return opcija;
        }
    }
}

int main(){
    Televizor x;
    int opcija;
    bool t;
    do{ 
        opcija = meni();
        switch (opcija)
        {
        case 1:
            t = x.ukljuci();
            if(t){
                cout<<"\n\n Televizor je uspesno ukljucen!\n"<<endl;
            }
            else{
                cout<<"\n\n Televizor nije moguce ukljuciti!\n"<<endl;
            }
            break;
        case 2:
            t = x.iskljuci();
            if(t){
                cout<<"\n\n Televizor je uspesno iskljucen!\n"<<endl;
            }
            else{
                cout<<"\n\n Televizor nije moguce iskljuciti!\n"<<endl;
            }
            break;
        case 3:
                t = x.pojacajZvuk();
                if(t){
                    cout <<"\n\nPojacan zvuk\n\n";  
                }
                else{
                    cout << "\n\nNije moguce pojacati zvuk!\n\n";
                }
            break;
        case 4:
                t = x.smanjiZvuk();
                if(t){ 
                    cout <<"\n\nSmanjen zvuk\n\n";  
                }
                else{
                    cout << "\n\nNije moguce smanjiti zvuk!\n\n";
                }
            break;
        case 5:
                t = x.sledeciKanal();
                if(t){ 
                    cout <<"\n\nSledeci kanal\n\n";  
                }
                else{
                    cout << "\n\nNije moguce povecati kanal!\n\n";
                }
            break;
        case 6:
                t = x.prethodniKanal();
                if(t){ 
                    cout <<"\n\nPrethodni kanal\n\n";  
                }
                else{
                    cout << "\n\nNije moguce smanjiti kanal!\n\n";
                }
            break;
        case 7:
                t = x.popravi();
                if(t){
                    cout <<"\n\n Televizor uspesno popravljen!\n"<<endl;
                }
                else{ 
                    cout <<"\n\n Sa televizorom je sve uredu!\n"<<endl;
                }
                break;
        case 8:
                t = x.pokvari();
                if(t){
                    cout <<"\n\n Televizor uspesno pokvaren!\n"<<endl;
                }
                else{ 
                    cout <<"\n\n Televizor je vec pokvaren!\n"<<endl;
                }
                break;
        case 9:
            ispis(x);
            break;
        default:
            cout <<"Bye"<<endl;
            break;
        }
    }
    while(opcija !=0);
    return 0;
}