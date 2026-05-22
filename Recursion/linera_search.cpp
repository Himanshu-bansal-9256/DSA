#include<iostream>
using namespace std;

// binary search using recursion
bool binarySearch(int arr[], int start, int end, int key){
    if(start > end)
        return 0;
    int mid = start + (end - start) / 2;
    if(arr[mid] == key)
        return 1;
    if(arr[mid] > key)
        return binarySearch(arr, start, mid - 1, key);
    return binarySearch(arr, mid + 1, end, key);
}

int main(){
    int arr[] = {3,8,11,15,26,22};
    int key;
    cin>>key;
    cout<<binarySearch(arr, 0 , 5, key);
}