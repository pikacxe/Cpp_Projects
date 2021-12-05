#include <iostream>

#include "pravilanOblik.hpp"
#include "oblik.hpp"

using namespace std;

int main(){

    Oblik o(10,5);
    PravilanOblik po(10);

    cout << "Oblik obim: " << o.getO() <<endl;
    cout << "Oblik povrsina: " << o.getP() <<endl;

    cout << "Pravilan oblik obim: " << po.getO() <<endl;
    cout << "Pravilan oblik povrsina: " << po.getP() <<endl;

    return  0;
}