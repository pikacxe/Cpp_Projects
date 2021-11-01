#include <iostream>


using namespace std;

int main(){
    int n,x,sum=0;
    cout << "Unesite koliko brojeva unosite:" << endl;
    cin >> n;
    for (int i = 1;i<=n;i++)
    {
        cout << "Unesite "<<i<<". broj:"<<endl;
        cin >> x;
        sum +=x;
    }
    cout << "\nZbir unetih brojeva je: "<<sum<<endl;
    return 0;
}