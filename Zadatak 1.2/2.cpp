#include <iostream>

using namespace std;

void unesi_niz(int* niz,int n){
    cout <<"Unesite elemente niza:"<<endl;
    for(int i = 0;i<n;i++){
        cin >> niz[i];
    }
}

void sortiraj_niz(int* niz,int n,int redosled){
    if(redosled)
    for(int i = 0;i<n-1;i++)
        for(int j = i+1;j<n;j++){
            if(niz[i]<niz[j]){
                int temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    else
    for(int i = 0;i<n-1;i++)
        for(int j = i+1;j<n;j++){
            if(niz[i]>niz[j]){
                int temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
}

void stampaj_niz(int* niz, int n){
    for(int i=0;i<n;i++){
        printf("A[%d] = %d\n",i,niz[i]);
    }
    cout<<endl;
}


int main(){

    int n;
    cout << "Unesite duzinu niza"<<endl;
    cin >> n;
    int a[n];

    unesi_niz(a,n);
    stampaj_niz(a,n);
    sortiraj_niz(a,n,0);
    stampaj_niz(a,n);


    return 0;
}