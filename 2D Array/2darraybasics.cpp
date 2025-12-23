#include <bits/stdc++.h>
using namespace std;

void print_col(int arr[][4], int row , int col){

    // column wise print
    for(int j = 0 ; j<col; j++){
        for(int i = 0 ; i< row ; i++){
            cout<<arr[i][j]<<" ";
        }
    }
}
int main(){
    // create a 2D array
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    // print all  the elements of 2D array
    // for(int row = 0 ; row<3 ; row++){
    //     for(int col = 0 ; col<4 ; col++){
    //        cout<<arr[row][col]<<" ";
    //     }
    // }

    // print all the values in array col wise , function call
    print_col(arr,3,4);
}