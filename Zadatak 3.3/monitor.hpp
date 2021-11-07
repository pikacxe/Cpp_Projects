#ifndef DEF_MONITOR
#define DEF_MONITOR
#include "Screen.hpp"

enum MonitorState { sTEST, sON, sOFF, sSTANDBY, sOUT};

class Monitor{
    private:
        MonitorState state;
        Screen screen;
    public:
        Monitor() : screen(){
            state = sOFF;
        }
        Monitor(Screen s, MonitorState st) : screen(s){
            state = st;
        }
        Monitor(const Monitor& m) : screen(m.screen){
            state = m.state;
        }
        bool turnON(){
            switch (state)
            {
            case sTEST: case sOFF: case sSTANDBY:
                screen.setState(ssON);
                return true;
                break;
            
            default: return false;
                break;
            }
        }
        bool turnOFF(){            
            switch (state)
            {
            case sTEST: case sON: case sSTANDBY:
                screen.setState(ssOFF);
                return true;
                break;
            
            default: return false;
                break;
            }

        }
        bool turnOUT(){ 
             switch (state)
            {
            case sTEST: case sON: case sSTANDBY:
                screen.setState(ssOFF);
                return true;
                break;
            
            default: return false;
                break;
            }
        }
        bool turnTest(){
            return state == sON ? state = sTEST : false;
        }
        bool turnStandBy(){
            if(state == sON){
                screen.setState(ssOFF);
                return state = sSTANDBY;
            }
            return false;
        }
        bool repair(){
            return state == sOUT ? state = sOFF : false;
        }

        bool incB(){
            if( state == sON || state == sTEST){
                return screen.incB();
            }
            return false;
        }
        bool decB(){
            if( state == sON || state == sTEST){
                return screen.incB();
            }
            return false;
        }
        
        MonitorState getMonitorState() const { return state; }
        ScreenState getScreenState() const { return screen.getState(); }
        int getBrightness() const { return screen.getBrightness(); }
       
       
       
        friend void printInfo(const Monitor&);


};

#endif