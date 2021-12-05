#include <iostream>
#include "osoba.hpp"
#include "student.hpp"
#include "phd_student.hpp"

void predstavljanje1(Osoba o){
    o.predstaviSe();
}
void predstavljanje2(const Osoba& o){
    o.predstaviSe();
}

int main(){
    Osoba o("Marko", "Markovic");
    Student s("Milan", "Stojkovic",3);
    PHD_Student ps("Aleska","Djuric",54,10.0);
    o.predstaviSe();
    s.predstaviSe();
    ps.predstaviSe();

    cout<<endl<<endl;

    cout<<"-----------------1-------------------"<<endl;
    predstavljanje1(o);
    predstavljanje1(s);
    predstavljanje1(ps);
    cout<<"-----------------2-------------------"<<endl;
    predstavljanje2(o);
    predstavljanje2(s);
    predstavljanje2(ps);
    return 0;
}