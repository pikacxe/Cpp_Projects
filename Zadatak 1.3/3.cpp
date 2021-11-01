#include <iostream>
#include <cmath>


using namespace std;

float f(int n){
    float rez = 0;
    for(int i = 1;i<=n;i++){
        rez += sqrt(i);
    }
    return rez;
}

float zaoukruzi(float n){
    n *=100;
    n = int(n);
    return n = n/100;
}

int main(){

    int n;
    cout << "Unesite broj n:"<<endl;
    cin >> n;
    float rez = zaoukruzi(f(n));
    cout << rez<<endl;



    return 0;
}