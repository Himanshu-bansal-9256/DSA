#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;
    while(left <= mid && right <= end){
        if(arr[left] < arr[right]){
            temp[index] = arr[left];
            left++;
            index++;
        }
        else{
            temp[index] = arr[right];
            right++;
            index++;
        }
    }
    while(left <= mid){
        temp[index] = arr[left];
        left++;
        index++;
    }
    while(right <= end){
        temp[index] = arr[right];
        right++;
        index++;
    }
    index = 0;
    while(start <= end){
        arr[start] = temp[index];
        start++;
        index++;
    }
}
void mergesort(int arr[], int start, int end){
    if(start == end)
        return;
    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid); // left half
    mergesort(arr, mid + 1, end); // right half

    merge(arr, start, mid, end);
}
int main(){
    int arr[] = {6,4,1,2,7,2,9,8,3,5};
    mergesort(arr, 0, 9);
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
}