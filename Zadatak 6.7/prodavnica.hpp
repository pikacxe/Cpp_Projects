#ifndef DEF_PRODAVNICA
#define DEF_PRODAVNICA

#include "proizvod.hpp"
#include "../list.hpp"
#include "../dinstring.hpp"

class Prodavnica{
    protected:
        DinString naziv;
        List<Proizvod*> list;
    public:
        Prodavnica(const DinString& naziv): naziv(naziv), list(){}
        Prodavnica(const char* naziv): naziv(naziv), list(){}
        void dodaj(Proizvod* p){
            for(int i = 1; i <= list.size(); i++){
                Proizvod *temp;
                list.read(i,temp);
                if(p->getNaziv() == temp->getNaziv()){
                    return;
                }
            }
            list.add(list.size()+1,p);
        }
        void obrisiProizvod(const DinString& naziv){
            for(int i = 1; i <= list.size()+1; i++){
                Proizvod* temp;
                list.read(i,temp);
                if(naziv == temp->getNaziv()){
                    list.remove(i);
                }
            }
        }
        void obrisiProizvod(int index){
            list.remove(index);
        }
        void izracunajPopuste(){
            for(int i = 1; i <= list.size()+1; i++){
                Proizvod* temp;
                list.read(i,temp);
                list.remove(i);
                temp ->izracunajPopust();
                list.add(i,temp);
            }
        }
        void ispisi(){
            cout << "-------Prodavnica: " << naziv <<"---------" << endl;
            for(int i = 1; i <= list.size()+1; i++){
                Proizvod* temp;
                list.read(i,temp);
                temp -> ispisi();
            }
            cout << "---------------------------------------------" << endl;
        }
        double avgCene() const {
            double avg = 0;
            for(int i = 1; i <= list.size(); i++){
                Proizvod* tmp;
                list.read(i,tmp);
                avg += tmp -> getCena();
            }
            return avg / (list.size() + 1);
        }

        DinString getNaziv() const {return naziv;}
};

#endif
