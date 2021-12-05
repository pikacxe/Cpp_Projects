#include <iostream>

#include "valjak.hpp"

using namespace std;

int main(){
    Valjak v(3,5);

    cout << v.getP() << endl;
    cout << v.getV() << endl;

    return 0;
}
