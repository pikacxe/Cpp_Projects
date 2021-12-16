#ifndef DEF_VIDEO_KAMERA
#define DEF_VIDEO_KAMERA

#include "kamera.hpp"

class Video_Kamera: public Kamera{
    protected:
        static int videoCounter;
    public:
        Video_Kamera(): Kamera(){}
        Video_Kamera(int megaPikseli, int freeSpace): Kamera(megaPikseli,freeSpace){}

        int getCounter() const {return videoCounter;}
        bool snimaj(int sekunde){
            if(freeSpace - sekunde*megaPikseli >= 0){
                freeSpace -= sekunde*megaPikseli;
                videoCounter++;
                return true;
            }
            return false;
        }

};

int Video_Kamera::videoCounter = 0;

#endif
