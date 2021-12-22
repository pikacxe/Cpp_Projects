#ifndef DEF_GRAD
#define DEF_GRAD

#include "prodavnica.hpp"

class Grad{
    protected:
        DinString naziv;
        List<Prodavnica*> list;
    public:
        Grad(const DinString& naziv): naziv(naziv), list(){}
        Grad(const char* naziv): naziv(naziv), list(){}
        void dodajProdavnicu(Prodavnica* p ){
            list.add(list.size()+1,p);
        }
        void ispisiNajjetinijuProdavnicu(){
            double min = INT64_MAX;
            int best_index = 0;
            Prodavnica* best;   
            for(int i = 1; i <= list.size(); i++){
                Prodavnica* tmp;
                list.read(i,tmp);
                double local = tmp->avgCene();
                if(min > local){
                    min = local;
                    best_index = i;
                }
            }
            list.read(best_index,best);
            cout << "Najjeftinija prodavnica je:" << best->getNaziv() << endl;
        }
};

#endif
