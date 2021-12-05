#ifndef DEF_PHD_STUDENT
#define DEF_PHD_STUDENT

#include "student.hpp"

class PHD_Student : public Student {
    private:
        double prosecnaOcena;
    public:
        PHD_Student(): Student(), prosecnaOcena(){}
        PHD_Student(const char* ime, const char* prezime, int brIndeksa, double prosecnaOcena): Student(ime,prezime,brIndeksa), prosecnaOcena(prosecnaOcena){}
        PHD_Student(const DinString& ime, const DinString& prezime, int brIndeksa, double prosecnaOcean): Student(ime,prezime,brIndeksa), prosecnaOcena(prosecnaOcena){}
        PHD_Student(const PHD_Student& p): Student((Student)p), prosecnaOcena(p.prosecnaOcena){}

        void predstaviSe() const{
            Student:: predstaviSe();
            cout << "Prosecna ocena: " << prosecnaOcena << endl;
        }
};
#endif
