#ifndef HEADER_DEF
#define HEADER_DEF
#include <cmath>

class XnaY{
    private:
        int x;
        int y;
    public:
        XnaY(){
            x = 1;
            y = 1;
        }
        XnaY(int X,int Y){
            x = X;
            y = Y;
        }
        XnaY(XnaY const &XnaY){
            x = XnaY.x;
            y = XnaY.y;
        }
    double getXnaY() const{ return pow(x,y); }


    void setY(int Y){y = Y;}
    void setX(int X){x = X;}
    void setX_Y(int X,int Y){x = X;y = Y;}
    int getX() const {return x;}
    int getY() const {return y;}
};
#endif