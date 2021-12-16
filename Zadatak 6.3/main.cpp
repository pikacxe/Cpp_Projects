#include <iostream>
#include "osoba.hpp"
#include "student.hpp"
#include "ucionica.hpp"
#include "profesor.hpp"

int main(){
    Osoba o("Marko", "Markovic");
    Student s("Milan", "Stojkovic",3);
    Profesor p("Aleska","Djuric","Matematika");
    Ucionica u("Ucionica1", 5);

    u.addOsoba(o);
    u.addOsoba(s);
    u.addOsoba(p);

    u.ispis();
 
    return 0;
}