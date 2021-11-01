#include <iostream>


using namespace std;

int main(){

    int max= 0,x;
    cout << "Unesite broj:"<<endl;
    cin >> x;
    while( x != 0){
        if(x > max && x>0){
            max = x;
        }
        cout << "Unesite broj:"<<endl;
        cin >> x;
    }
    cout << "Najveci uneti broj je: " << max <<endl;
    return 0;
}