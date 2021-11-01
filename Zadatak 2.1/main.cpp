#include <iostream>
#include "Rerna.hpp"

using namespace std;

void ispisiRernu(const Rerna& r){
    cout << "\n\nTrenutno stanje rerne je: ";
    switch (r.getTrenutnoStanje())
    {
    case Ukljucena:
        cout<<"Ukljucena";
        break;
    case Iskjlucena:
        cout<<"Iskljucena";
        break;
    case Pokvarena:
        cout<<"Pokvarena";
        break;
    }
    cout<<" sa temperaturom od: "<<r.getTemp()<<"C\n"<<endl;
}

int meni(){
    int opcija;
    while(true){ 
        cout << "Unesite zeljenu opciju:\n 0 - Exit\n 1 - Ukljuci rernu\n 2 - Iskljuci rernu\n 3 - Pojacaj temperaturu\n 4 - Smanji temeraturu\n 5 - Popravi\n 6 - Trenutno stanje"<<endl;
        cin >> opcija;
        if (opcija <0 && opcija > 6){
            cout << "Odabrana nemoguca opcija. Probajte ponovo!"<<endl;  
        }
        else{
            return opcija;
        }
    }
}

int main(){
    Rerna r;
    int opcija;
    bool t;
    do{ 
        opcija = meni();
        switch (opcija)
        {
        case 1:
            t = r.ukljuci();
            if(t){
                cout<<"\n\n Rerna je uspesno ukljucena!\n"<<endl;
            }
            else{
                cout<<"\n\n Rernu nije moguce ukljuciti!\n"<<endl;
            }
            break;
        case 2:
            t = r.iskljuci();
            if(t){
                cout<<"\n\n Rerna je uspesno iskljucena!\n"<<endl;
            }
            else{
                cout<<"\n\n Rernu nije moguce iskljuciti!\n"<<endl;
            }
            break;
        case 3:
                t = r.pojacajTemp();
                if(t){
                    cout <<"\n\nPojacana temperatura\n\n";  
                }
                else{
                    cout << "\n\nNije moguce pojacati temperaturu!\n\n";
                }
            break;
        case 4:
                t = r.smanjiTemp();
                if(t){ 
                    cout <<"\n\nSmanjena temperatura\n\n";  
                }
                else{
                    cout << "\n\nNije moguce smanjiti temperaturu!\n\n";
                }
            break;
        case 5:
                t = r.popravi();
                if(t){
                    cout <<"\n\n Rerna uspesno popravljena!\n"<<endl;
                }
                else{ 
                    cout <<"\n\n Sa rernom je sve uredu!\n"<<endl;
                }
        case 6:
            ispisiRernu(r);
            break;
        default:
            cout <<"Bye"<<endl;
            break;
        }
    }
    while(opcija !=0);
    return 0;
}