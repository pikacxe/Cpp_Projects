#include <cstdlib>
#ifndef DEF_KOCKA
#define DEF_KOCKA

class Kocka{

    private:
        int value;
        int maxValue;
        int minValue;
    public:
        Kocka(){
            value = 1;
            maxValue = 6;
            minValue = 1;
        }
        Kocka(int value1,int maxValue1,int minValue1){
            value = value1;
            maxValue = maxValue1;
            minValue = minValue1;
        }
        Kocka(const Kocka &k1){
            value = k1.value;
            maxValue = k1.maxValue;
            minValue = k1.minValue;
        }
    void baci(){
        value = rand()%(maxValue-minValue+1) + minValue;
    }
    int getVrednost() const{ return value;}
};
#endif