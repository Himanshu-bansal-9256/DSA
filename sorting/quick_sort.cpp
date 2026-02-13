#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int start , int end){
    int pos = start;
    for(int i = start ; i < end ; i++){
        if(arr[i] <= arr[end]){
            swap(arr[i] , arr[pos]);
            pos++;
        }
    }
    swap(arr[pos] , arr[end]);
    return pos -1 ;
}
void quick_sort(int arr[] , int start , int end){
    if(start >= end)
    return;

    int pivot = partition(arr , start , end);

    // left half
    quick_sort(arr , start , pivot - 1);
    // right half
    quick_sort(arr , pivot + 1 , end);
}

int main(){
    int arr[] = {6,4,1,2,7,2,9,8,3,5};
    quick_sort(arr , 0 , 9);
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
}