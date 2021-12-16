#ifndef DEF_TELEFON_GEN3
#define DEF_TELEFON_GEN3

#include "telefon_gen2.hpp"
#include "video_kamera.hpp"

class Telefon_Gen3: public Telefon{
    protected:
        Video_Kamera vk;
    public:
        Telefon_Gen3(): vk(){}
        Telefon_Gen3(int megaPikseli, int freeSpace): vk(megaPikseli,freeSpace){}
        Telefon_Gen3(const Telefon_Gen3& t_gen3): vk(t_gen3.vk){}

        bool snimiVideo(int sec){ return vk.snimaj(sec);}

};

#endif
