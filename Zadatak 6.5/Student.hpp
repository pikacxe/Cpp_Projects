#ifndef DEF_STUDENT
#define DEF_STUDENT

#include "Predmet.hpp"

class Student{
    protected:
        Predmet p1;
        Predmet p2;
    public:
        Student(const Predmet& p1, const Predmet& p2): p1(p1), p2(p2){}
        void ispis(){
            cout << "-----------Predmet 1 ---------" << endl;
            p1.ispis();
            cout << "-----------Predmet 2 ---------" << endl;
            p2.ispis();
            if( p1.getUkupniPoeni() > p2.getUkupniPoeni()){
                cout << "Student je osvojio vise poena iz predmet:" << p1.getNaziv() << endl;
            }
            else {
                cout << "Student je osvojio vise poena iz predmet:" << p2.getNaziv() << endl;
            }
        }
};

#endif
