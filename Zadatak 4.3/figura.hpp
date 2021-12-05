#ifndef DEF_FIGURA
#define DEF_FIGURA

#include <cmath>
#define PI 3.14

class Figura{

    public:
        virtual double getO() const = 0;
        virtual double getP() const = 0;
};
#endif
