#ifndef DEF_UCIONICA
#define DEF_UCIONICA

#include "../list.hpp"
#include "osoba.hpp"

class Ucionica{
    private:
        List<Osoba> osobe;
        DinString naziv;
        int kapacitet;

    public:
        Ucionica(const DinString& naziv, int kapacitet): naziv(naziv),kapacitet(kapacitet) {}

        bool addOsoba(Osoba& o){
            if(osobe.size() < kapacitet){
                return osobe.add(osobe.size() + 1,o);
            }
            return false;
        }
        void ispis() const {
            if(osobe.size() == 0) {
                cout << endl << "Ucionica je prazna." << endl;
            } else {
                Osoba o;
                cout << endl << "U ucionici su:" << endl;

                for (int i = 1; i <= osobe.size(); i++){
                    osobe.read(i, o);
                    o.ispis();
                }
            }
        }
};

#endif
