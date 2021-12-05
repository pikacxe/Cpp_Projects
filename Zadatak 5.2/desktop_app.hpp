#ifndef DEF_DESKTOP_APP
#define DEF_DESKTOP_APP

#include "application.hpp"
#include "computer.hpp"

class Desktop_App : public Application{
    private:
        Computer minSysReq;
        Computer optimumSysReq;
        static int desktopCount;
    public:
        Desktop_App(): Application("Java",100), minSysReq(), optimumSysReq(){
            desktopCount++;
        }
        Desktop_App(const Computer& minSysReq, const Computer& optimumSysReq, const char* language, double sizeMB): Application(language,sizeMB), minSysReq(minSysReq), optimumSysReq(optimumSysReq){
            desktopCount++;
        }
        Desktop_App(const Desktop_App& d_app): Application(d_app), minSysReq(d_app.minSysReq), optimumSysReq(d_app.optimumSysReq){
            desktopCount++;
        }
        ~Desktop_App(){
            desktopCount--;
        }
        friend ostream& operator<<(ostream& out, const Desktop_App& d_app){
            out << Application(d_app) << endl;
            out << "Minimum system requirements" << endl;
            out << d_app.minSysReq << endl;
            out << "Optimal system requirements" << endl;
            out << d_app.optimumSysReq << endl;

            return out;
        }
        int getCount() const { return desktopCount; }
};

int Desktop_App:: desktopCount = 0;

#endif
