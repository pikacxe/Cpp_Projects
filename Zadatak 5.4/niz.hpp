#ifndef DEF_NIZ
#define DEF_NIZ

#include <iostream>

using namespace std;

template <class T,int D>
class Niz{
    private:
        T elements[D];
        int length;
    public:
        Niz(){ length = 0;}
        ~Niz(){}

        int getLength() const {return length;}

        T operator[](int i) const { return elements[i];}
        T& operator[](int i) { return elements[i];}

        Niz<T,D>& operator=(const Niz<T,D>& niz){
            for(length = 0;length<niz.length; length++){
                elements[length] = niz.elements[length];
            }
            return *this;
        }

        friend ostream& operator<<(ostream& out, const Niz<T,D>& niz){
            for(int i = 0; i< niz.length-1;i++){
                out<<niz.elements[i]<< ", ";
            }
            out<< niz.elements[niz.length-1];
            out<<endl;
            return out;
        }
        bool insertNiz(const T& t){
            if(length < D){
              return  elements[length++] = t;
            }
            return false;
        }
        friend bool operator==(const Niz<T,D>& niz1, const Niz<T,D>& niz2){
            if(niz1.length != niz2.length){
                return false;
            }
            for(int i = 0; i<niz1.length;i++){
                if(niz1.elements[i] != niz2.elements[i]){
                    return false;
                }
            }
            return true;
        }   
        friend bool operator!=(const Niz<T,D>& niz1, const Niz<T,D>& niz2){
            if(niz1.length != niz2.length){
                return true;
            }
            for(int i = 0; i<niz1.length;i++){
                if(niz1.elements[i] != niz2.elements[i]){
                    return true;
                }
            }
            return false;
        }   
};

#endif
