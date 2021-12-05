#ifndef DEF_APPLICATION
#define DEF_APPLICATION

#include <iostream>
#include "../dinstring.hpp"

class Application{
    private:
        DinString language;
        double sizeMB;
        DinString author;
        static int appCount;
    public:
        Application(): language(), sizeMB(), author(){
            appCount++;
        }
        Application(const char* language, double sizeMB): language(language), sizeMB(sizeMB){
            author = "Kompanija 1";
            appCount++;
        }
        Application(const Application& app): language(app.language), sizeMB(app.sizeMB), author(app.author){
            appCount++;
        }

        ~Application(){
            appCount--;
        }
        friend ostream& operator<< (ostream& out, const Application app){
            out<< "-----------Application--------------"<<endl;
            out<< "Language: " << app.language << endl;
            out<< "Size (MB): " << app.sizeMB <<endl;
            out<< "Author: " << app.author <<endl;
            return out;
        }

        virtual int getCount() const { return appCount; }


};

int Application::appCount = 0;

#endif
