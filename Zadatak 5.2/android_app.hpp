#ifndef DEF_ANDROID_APP
#define DEF_ANDORID_APP

#include "application.hpp"

class Android_App : public Application{
    private:
        double minVersion;
        double targetVersion;
        static int androidCount;
    public:
        Android_App(): Application("Java",5), minVersion(12), targetVersion(20){
            androidCount++;
        }
        Android_App(double minVersion,double targetVersion, double sizeMB):Application("Java",sizeMB), minVersion(minVersion), targetVersion(targetVersion){
            androidCount++;
        }
        Android_App(const Android_App& a_app): Application(a_app), minVersion(a_app.minVersion), targetVersion(a_app.targetVersion){
            androidCount++;
        }
        ~Android_App(){
            androidCount--;
        }
        friend ostream& operator<<(ostream& out, const Android_App& a_app){
            out << (Application)a_app << endl;
            out << "Min version: " << a_app.minVersion << endl;
            out << "Target version: " << a_app.targetVersion << endl;

            return out;
        }

        int getCount() const { return androidCount; }
};

int Android_App:: androidCount = 0;

#endif
