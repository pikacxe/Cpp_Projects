#include <iostream>
#include "machine.hpp"

using namespace std;

void printInfo(const Machine& m){
    cout << "Trenutno stanje masine je:";
    switch (m.getCurrentState())
    {
    case sC:
            cout<<"sC";
        break;
    case sD:
            cout<<"sD";
        break;
    case sB:
            cout<<"sB";
        break;
    case sA:
            cout<<"sA";
        break;
    
    default:
        break;
    }
}

int meni(){
    return 0;
}

int main(){
    return 0;
}