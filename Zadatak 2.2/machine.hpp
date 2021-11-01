#ifndef MACHINE_DEF
#define MACHINE_DEF

enum MachineState{
    sA,
    sB,
    sC,
    sD
};

class Machine{
    private:
        MachineState currentState;
        int value;
    public:
        Machine(){
            currentState = sC;
            value = 0;
        };
        bool metodaX(){
            if(currentState){

            }
        }
        bool metodaY(){}
        bool metodaZ(){}
        bool metodaW(){}
        bool plus(){
            if(value+20<=80){
                value +=20;
                return true;
            }
            else{
                return false;
            }
        }
        bool minus(){
            if(value-20>=80){
                value -=20;
                return true;
            }
            else{
                return false;
            }
        }
        MachineState getCurrentState() const{}
        int getValue()const {return value;}


};
#endif