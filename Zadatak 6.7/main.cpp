#include "prodavnica.hpp"
#include "proizvod.hpp"
#include "voce.hpp"
#include "odeca.hpp"
#include "grad.hpp"


int main(){
    Voce v1("Banana",200,"Zemlja1", 5);
    Voce v2("Jabuka",100,"Zemlja1", 10);
    Voce v3("Visnja",400,"Zemlja1", 3);
    Voce v4("Kruska",500,"Zemlja1", 1);
    Voce v5("Sljiva",600,"Zemlja1", 2);

    Odeca o1("Majica1", 200, M, MAJICA);
    Odeca o2("Majica2", 100, XS, MAJICA);
    Odeca o3("Majica3", 500, L, MAJICA);
    Odeca o4("Pantalone1", 1000, L, PANTALONE);
    Odeca o5("Pantalone2", 2000, XL, PANTALONE);
    Odeca o6("Pantalone3", 2500, S, PANTALONE);

    Prodavnica p1("Prodavnica1");
    Prodavnica p2("Prodavnica2");
    Prodavnica p3("Prodavnica3");
    
    p1.dodaj(&v1);
    p1.dodaj(&v2);
    p1.dodaj(&o1);
    p1.dodaj(&o3);

    p2.dodaj(&o6);
    p2.dodaj(&o4);
    p2.dodaj(&o5);
    p2.dodaj(&o3);

    p3.dodaj(&v5);
    p3.dodaj(&v2);
    p3.dodaj(&v3);
    p3.dodaj(&v4);

    p1.ispisi();
    cout << endl << endl;
    p2.ispisi();
    cout << endl << endl;
    p3.ispisi();
    cout << endl << endl;

    Grad g("Grad1");
   
    g.dodajProdavnicu(&p1);
    g.dodajProdavnicu(&p2);
    g.dodajProdavnicu(&p3);

    g.ispisiNajjetinijuProdavnicu();

    return 0;
}