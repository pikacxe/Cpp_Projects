#include <iostream>


using namespace std;


void unesi_matricu(int** mat,int n){
    cout << "Unesite matricu:"<<endl;
    for( int i= 0;i<n;i++)
        for(int j= 0;j<n;j++){
            cin >> mat[i][j];
        }
}

void stampaj_matricu(int** mat,int n){
    for( int i= 0;i<n;i++){
        for(int j= 0;j<n;j++){
            cout << mat[i][j] << " ";
        }
        cout <<endl;
    }
}

int suma_el(int** mat,int n,int uslov){
    int sum = 0;
    if(uslov == 1){
      for( int i= 0;i<n;i++)
        for(int j= 0;j<n;j++)
            if(i == j){
                sum += mat[i][j];
            }
    }
    else if(uslov == 2){    
      for( int i= 0;i<n;i++)
        for(int j= 0;j<n;j++)
            if(i>j){
               sum += mat[i][j]; 
            }
    }
    else if(uslov == 3){
      for( int i= 0;i<n;i++)
        for(int j= 0;j<n;j++)
            if(i < j){
                sum += mat[i][j];
            }
    }
    return sum;
}

int main(){
    int n;
    cout << "Unesite dimenziju matrice:"<<endl;
    cin >> n;
    int** mat = new int * [n];
    for(int i = 0;i<n;i++){
        mat[i] = new int[n];
    }
    unesi_matricu(mat,n);
    stampaj_matricu(mat,n);
    int rez = suma_el(mat,n,3);

    cout << rez<<endl;
    return 0;
}