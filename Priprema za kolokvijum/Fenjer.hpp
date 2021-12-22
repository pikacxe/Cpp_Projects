#ifndef DEF_FENJER
#define DEF_FENJER

#include <iostream>
using namespace std;

enum Materijal{
    STIROPOR, PLASTIKE, METAL
};

class Fenjer {
    protected:
        Materijal materijal;
        bool ispravan;
    public:
        Fenjer(){
            materijal = STIROPOR;
            ispravan = false;
        }
        Fenjer(Materijal m, bool i): materijal(m), ispravan(i){}
        Materijal getMat() const { return materijal;}
        bool getIspravan() const { return ispravan;}
        virtual bool popravi() = 0;
        virtual void ispis() const {
            cout << "-----------Fenjer---------" << endl;
            cout << "Materijal: ";
            switch (materijal)
            {
                case STIROPOR: cout << "Stiropor" << endl; break;
                case METAL: cout << "Metal" << endl; break;
                case PLASTIKE: cout << "Plastika" << endl; break;
                default:
                    break;
            }
            cout << "Ispravan: " << ispravan << endl;
        }
};
#endif

