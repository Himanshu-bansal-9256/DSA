#include<iostream>
using namespace std;

// if i start from the first element of the array and i will increase the index by 1 in each recursive call
int minelement(int arr[], int index , int n ){
    if(index==n-1)
    return arr[index];
    return min(arr[index], minelement(arr, index+1, n));
}

int main(){
    int arr[] = {1,2,3,0,5,-1,7,8,9,10};
    cout<<minelement(arr, 0 , 10)<<endl;
}