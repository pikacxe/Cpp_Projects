#ifndef DEF_PREDMET
#define DEF_PREDMET

#include "../dinstring.hpp"
#include "../list.hpp"
#include "Test.hpp"
#include <iostream>

using namespace std;

class Predmet{
    protected:
        DinString naziv;
        List<Test*> testovi;
    public:
        Predmet(): naziv(), testovi(){}
        Predmet(const DinString& naziv): naziv(naziv), testovi(){}
        Predmet(const char* naziv): naziv(naziv), testovi(){}
        Predmet(const Predmet& p): naziv(p.naziv), testovi(p.testovi){}
        void dodajTest(Test* t) {
            testovi.add(testovi.size()+1,t);
        }
        bool polozio(){
            Test* tmp;
            int sum = 0;
            for(int i = 1; i <= testovi.size(); i++){
                testovi.read(i,tmp);
                if(tmp -> polozio()){
                    sum += tmp -> getPoeni();
                }
            }
            return sum > 55 ? true : false;
        }
        int getUkupniPoeni() const {
            Test* tmp;
            int sum = 0;
            for(int i = 1; i <= testovi.size(); i++){
                testovi.read(i,tmp);
                sum += tmp -> getPoeni();
            } 
            return sum;
        }
        DinString getNaziv() const { return naziv;}
        void ispis(){
            cout << "Predmet: " << naziv << endl;
            cout << "Testovi: " << endl;
            Test* tmp;
            int sum = 0;
            for(int i = 1; i <= testovi.size(); i++){
                testovi.read(i,tmp);
                cout << "\tTest[" << i << "]" << endl;
                cout << "\t";
                tmp -> ispis();
            } 
        }
};

#endif
