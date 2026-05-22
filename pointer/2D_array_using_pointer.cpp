#include<iostream>
using namespace std;

int main(){
    int n , m ; 
    cin>> n >> m;

    //2D array using pointer
    int **ptr = new int*[n]; 

    //rows ke liye memory allocate karna
    for(int i=0; i<n; i++){
        ptr[i] = new int[m];
    }

    //value assign karna
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>ptr[i][j];
        }
    }
    cout << endl;

    //print karna
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    //memory free karna
    for(int i=0; i<n; i++){
        delete[] ptr[i];
    }
    delete[] ptr;
}