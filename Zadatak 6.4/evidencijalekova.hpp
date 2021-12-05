#ifndef DEF_EVIDENCIJA
#define DEF_EVIDENCIJA

#include "../list.hpp"
#include "lek.hpp"


class Evidencija {
    private:
        DinString nazivApoteke;
        DinString datum;
        List<Lek> lekovi;
    public:
        Evidencija(): nazivApoteke(), datum(), lekovi() {}
        Evidencija(const char naziv[], const char datum1[]): nazivApoteke(naziv), datum(datum1), lekovi() {}
        bool unesiLek(long jkl, const char naziv[], double jedinicnaCena, int kolicina){
            Lek l(jkl,naziv,jedinicnaCena,kolicina);
            return lekovi.add(lekovi.size()+1, l);
        }

        bool unesiLek(const Lek& l){
            return lekovi.add(1,l);
        }

        bool obisiLek(int i){
            return lekovi.remove(i);
        }

        void sortLekovi(){
            Lek l1,l2;
            for (int i = 1; i < lekovi.size();i++)
                for (int j = i+1; j<lekovi.size();j++){
                    lekovi.read(i,l1);
                    lekovi.read(j,l2);
                    if(l1.getVrednost() > l2.getVrednost()){
                        lekovi.remove(i);
                        lekovi.add(i,l2);
                        lekovi.remove(j);
                        lekovi.add(j,l1);
                    }
                }
        }

        friend ostream& operator<<(ostream& out,const Evidencija& e){
            out << e.nazivApoteke << endl;
            out << e.datum << endl;
            if ( e.lekovi.size() == 0){
                out << "Trenutno nema lekova u evidenciji!" << endl;
            }
            else
                out << e.lekovi << endl;
            return out;
        }


};
#endif
