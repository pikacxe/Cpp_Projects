#ifndef DEF_MONITOR
#define DEF_MONITOR
#include "Screen.hpp"

enum MonitorState { sTEST, sON, sOFF, sSTANDBY, sOUT};

class Monitor{
    private:
        MonitorState state;
        Screen screen;


};

#endif