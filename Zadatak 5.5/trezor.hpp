#ifndef DEF_TREZOR
#define DEF_TREZOR

#include <iostream>

using namespace std;

template <class T, int N>
class Trezor{
    private:
        T sefovi[N];
        bool popunjeni[N];
    public:
        Trezor(){
            for (int i = 0; i< N;i++){ 
                sefovi[i] = T();
                popunjeni[i] = false;
            }
        }
        int getBrojPopunjenihSefova() const {
            int brPopunjenih = 0;
            for(int i = 0; i < N;i++)
                if(popunjeni[i] == true) 
                    brPopunjenih++;
            return brPopunjenih;
        }
        int ubaciSadrzaj(const T& predmet){
            for(int i = 0;i < N;i++){
                if(popunjeni[i] == false){
                    sefovi[i] = predmet;
                    popunjeni[i] = true;
                    return i;
                }
            }
            return -1;
        }
        bool izbaciSadrzaj(int sef){
            if(popunjeni[sef]){
                popunjeni[sef] = false;
                sefovi[sef] = T();
                return true;
            }
            return false;
        }


};


#endif
