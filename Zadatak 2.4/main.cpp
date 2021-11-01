#include <iostream>
#include "header.hpp"

using namespace std;

int main(){
    XnaY k;
    k.setX_Y(2,3);
    XnaY m = XnaY(k);
    cout<<"Vrednost je:"<< m.getXnaY()<<endl;
    return 0;
}