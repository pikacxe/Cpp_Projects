#include <iostream>
#include "monitor.hpp"

using namespace std;

void printInfo(const Monitor& m){
    cout<< " ******* MONITOR ******* "<<endl;
    cout<< "Stanje monitora: ";
    switch (m.state)
    {
    case sON: cout<<"ON"<<endl; break;
    case sOFF: cout<<"OFF"<<endl; break;
    case sOUT: cout<<"OUT"<<endl; break;
    case sTEST: cout<<"TEST"<<endl; break;
    case sSTANDBY: cout<<"STAND BY"<<endl; break;
    } 
    cout<< "Stanje ekrana: ";
    switch (m.getScreenState())
    {
    case ssON: cout<<"ON"<<endl; break;
    case ssOFF: cout<<"OFF"<<endl; break;
    }
    cout<< "Brightness: "<< m.getBrightness() <<endl;
}



int main(){
    Screen s1(), s2(ssON,10), s3(s2);
    Monitor m1(),m2(s2,sOFF), m3(m2);

    printInfo(m3);
    return 0;
}