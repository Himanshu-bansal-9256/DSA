#include <bits/stdc++.h>
using namespace std;

int main(){
    // create a 2D array
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int x = 1;
    // print all  the elements of 2D array
    for(int row = 0 ; row<3 ; row++){
        for(int col = 0 ; col<4 ; col++){
           if(arr[row][col]==x){
            cout<<"yes"<<endl;
            return 0;
           }
        }
    }
    cout<<"no"<<endl;
}