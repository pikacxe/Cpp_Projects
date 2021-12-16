#ifndef DEF_DIJAMANT
#define DEF_DIJAMANT

#include <iostream>
using namespace std;

class Dijamant{
    private:
        double vrednost;
        double broj_karata;
    public:
        Dijamant(): vrednost(), broj_karata(){}
        Dijamant(double vrednost1, double brojKarata): vrednost(vrednost1), broj_karata(brojKarata){}
        Dijamant(const Dijamant& d): vrednost(d.vrednost), broj_karata(d.broj_karata){}

        friend ostream& operator<<(ostream& out, const Dijamant& d){
            out << "-------------Dijamant-------------"<< endl;
            out << "Vrednost: "<< d.vrednost << endl;
            out << "Broj karata: " << d.broj_karata << endl; 
            return out;
        }

};

#endif
