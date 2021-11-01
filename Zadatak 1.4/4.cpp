#include <iostream>


using namespace std;

void proveri(int n){
    if(n % 100 == 0){
        if( n  % 400 ==0){
            cout << "Uneta godina je prestupna!"<<endl;
        }
        else{
            cout << "Uneta godina nije prestunpna!"<<endl;
        }
    }
    else if(n % 4 == 0){
        cout << "Uneta godina je prestupna!"<<endl;
    }
    else{
        cout << "Uneta godina nije prestunpna!"<<endl;
    }
}

int main(){

    int n;
    cout << "Unesite godinu:"<<endl;
    cin >> n;
    proveri(n);


    return 0;
}
