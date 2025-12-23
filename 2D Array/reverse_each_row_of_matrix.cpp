#include <bits/stdc++.h>
using namespace std;

void reverse_matrix(int arr[][4], int row , int col){

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 0 ; i < row ; i++){
        int start = 0 ;
        int end = col -1;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int arr[4][4] = {3,4,7,6,1,2,3,4,5,6,7,8,1,2,5,4};
    // using function
    reverse_matrix(arr , 4 , 4);
}