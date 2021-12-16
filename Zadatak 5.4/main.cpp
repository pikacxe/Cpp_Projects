#include "niz.hpp"

int main(){
    Niz<int,10> niz;
    niz.insertNiz(1);
    niz.insertNiz(2);
    niz.insertNiz(3);
    niz.insertNiz(4);

    cout<<niz;

    return 0;
}