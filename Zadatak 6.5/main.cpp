#include "Test.hpp"
#include "Kolokvijum.hpp"
#include "Predmet.hpp"
#include "Student.hpp"


int main(){
    Test t("Test1",10);
    Test t1("Test2",40);
    Test t2("Test3",50);
    Test t3("Test4",60);
    Test t4("Test5",100);

    Kolokvijum k("Kolokvijum1");
    Kolokvijum k1("Kolokvijum2");
    Kolokvijum k2("Kolokvijum3");
    Kolokvijum k3("Kolokvijum4");
    Kolokvijum k4("Kolokvijum5");

    Predmet p("Matematika");
    Predmet p1("Programiranje");
    Predmet p2("Mehanika");
    Predmet p3("Engleski");

    p.dodajTest(&k);
    p.dodajTest(&k1);
    p.dodajTest(&k3);

    p1.dodajTest(&t);
    p1.dodajTest(&t1);
    p1.dodajTest(&t3);
    
    p2.dodajTest(&k2);
    p2.dodajTest(&k1);
    p2.dodajTest(&k4);

    p3.dodajTest(&t);
    p3.dodajTest(&t2);
    p3.dodajTest(&t4);
    
    Student s(p1,p);
    Student s1(p2,p3);
    Student s2(p3,p);
    Student s3(p1,p2);

    s.ispis();
    cout << endl << endl;
    s1.ispis();
    cout << endl << endl;
    s2.ispis();
    cout << endl << endl;
    s3.ispis();
    cout << endl << endl;

    return 0;
}