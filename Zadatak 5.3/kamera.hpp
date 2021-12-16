#ifndef DEF_KAMERA
#define DEF_KAMERA

class Kamera{
    protected:
        int megaPikseli;
        int freeSpace;
        static int photoCounter;
    public:
        Kamera(): megaPikseli(), freeSpace() {}
        Kamera(int megaPikseli, int freeSpace): megaPikseli(megaPikseli), freeSpace(freeSpace){}
        Kamera(const Kamera& k): megaPikseli(k.megaPikseli), freeSpace(k.freeSpace){}
        int getCounter() const {return photoCounter;}
        bool slikaj() {
            if ( freeSpace - megaPikseli >= 0){
                freeSpace -= megaPikseli;
                photoCounter++;
                return true;  
            }
            return false;
        }
};

int Kamera::photoCounter = 0;

#endif
