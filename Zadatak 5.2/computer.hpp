#ifndef DEF_COMPUTER
#define DEF_COMPUTER

#include <iostream>
#include "../dinstring.hpp"

class Computer {
    private:
        double hddGB;
        double ramGB;
        DinString gCard;
        DinString os;
    public:
        Computer(): hddGB(), ramGB(), gCard(), os(){}
        Computer(double hddGB, double ramGB, const char* gCard, const char* os): hddGB(hddGB), ramGB(ramGB), gCard(gCard), os(os){}
        Computer(const Computer& k): hddGB(k.hddGB), ramGB(k.ramGB), gCard(k.gCard), os(k.os){}

        friend ostream& operator<<(ostream& out, const Computer& k){
            out<<"----------Computer--------------"<<endl;
            out<<"Ram: "<< k.ramGB<<endl;
            out<<"HDD: "<< k.hddGB<<endl;
            out<<"gCard: "<< k.gCard<<endl;
            out<<"OS: "<< k.os<<endl;
            return out;
        }
};
#endif
