#ifndef DEF_TEST
#define DEF_TEST

#include "../dinstring.hpp"
#include <iostream>

using namespace std;

class Test{
    protected:
        DinString naziv;
        int osvojeniPoeni;
    public:
        virtual int getPoeni() const {return osvojeniPoeni;}
        virtual bool polozio() const {return true;}
        Test(): naziv(), osvojeniPoeni(){}
        Test(const DinString& naziv,int osvojeniPoeni): naziv(naziv), osvojeniPoeni(osvojeniPoeni){}
        Test(const char* naziv, int osvojeniPoeni): naziv(naziv), osvojeniPoeni(osvojeniPoeni){}
        void ispis(){
            cout << "\tNaziv: " << naziv << endl;
            cout << "\t\tBroj poena: " << osvojeniPoeni << endl;
        } 
};


#endif
