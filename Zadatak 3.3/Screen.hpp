#ifndef DEF_SCREEN
#define DEF_SCREEN

enum ScreenState{ ssON, ssOFF};

class Screen{
    private:
        ScreenState state;
        int brightness;
    public:
        Screen(){
            state = ssOFF;
            brightness = 0;
        }
        Screen(ScreenState s, int b){
            state = s;
            brightness = b;
        }
        Screen(const Screen& s){
            state = s.state;
            brightness = s.brightness;
        }
        bool incB(){
            return (brightness <18 && state == ssON) ? brightness++ : false;
        }
        bool decB(){
            return (brightness > 2 && state == ssON) ? brightness-- : false;
        }

        ScreenState getState() const {return state;}
        int getBrightness() const { return brightness;}
        void setState(ScreenState s){
            state = s;
        }

};

#endif