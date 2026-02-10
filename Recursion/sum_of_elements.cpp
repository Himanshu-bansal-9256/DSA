#include<iostream>
using namespace std;

// if i start from the first element of the array and i will increase the index by 1 in each recursive call
int sum(int arr[], int index , int n ){
    if(index==n)
    return 0;
    int total = 0;
    total +=arr[index] + sum(arr, index+1, n);
    return total;
}

// if i start from the last element of the array and i will decrease the index by 1 in each recursive call
int sum(int arr[], int index){
    if(index==-1)
    return 0;
    int total = 0;
    total +=arr[index] + sum(arr, index-1);
    return total;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<sum(arr, 0 , 10)<<endl;
    cout<<sum(arr, 9)<<endl;
}