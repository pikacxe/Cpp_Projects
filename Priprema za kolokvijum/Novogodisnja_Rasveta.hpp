#ifndef DEF_RASVETA
#define DEF_RASVETA

#include "../list.hpp"
#include "Lampion.hpp"
#include <iostream>
using namespace std;

class Novogodisnja_Rasveta {
    protected:
        int kapacitet;
        List<Lampion*> list;
    public:
        Novogodisnja_Rasveta(): list(), kapacitet(5){} 
        bool dodaj(Lampion* l){
            if(list.size() < kapacitet){
                if(!l->getIspravan()) l->popravi();
                if(l->getMat() == STIROPOR) return list.add(1,l);
                return list.add(list.size()+1, l);
            }
            cout << "Kapacitet je popunjen!" << endl;
            return false;
        }
        void sortiraj(){
            int temp;
            cout << "Unesite vrstu sortiranja ( 0 - opadajuce, 1 - rastuce): " << endl;
            cin >> temp;
            if(list.empty()){
                cout << "Lista je prazna!" << endl;
                return;
            }
            else if(!(temp == 1 || temp == 0)) {
                cout << "Nevalidna vrednost vrste sortiranja!" << endl;
                return;
            }
            Lampion *l1,*l2;
            if(temp == 0){
                for(int j = 1; j< list.size(); j++){
                    list.read(j,l1);
                    for(int i = j+1; i <= list.size(); i++){
                        list.read(i,l2);
                        if(l1->getCena() < l2->getCena()){
                            list.remove(i);
                            list.add(j,&(*l2));
                        }
                    }
                }
            }
            else {
                for(int j = 1; j< list.size(); j++){
                    list.read(j,l1);
                    for(int i = j+1; i <= list.size(); i++){
                        list.read(i,l2);
                        if(l1->getCena() > l2->getCena()){
                            list.remove(i);
                            list.add(j,&(*l2));
                        }
                    }
                }
            }
            for(int i = 1; i< list.size()+1; i++){
                Lampion* tmp;
                list.read(i,tmp);
                tmp->ispis();
            }
            
        }
        void sprovediAkciju(double a){
            for(int i = 1; i <= list.size(); i++)
            {
                Lampion* temp;
                list.read(i,temp);
                list.remove(i);
                temp->setCena(temp->getCena() - (a * temp->getCena()));
                list.add(i,temp);
            }
        }

};

#endif
