#include<bits/stdc++.h>
using namespace std;
int main(){
    // third smallest element in an array
    int arr[5]={8,7,11,4,2};
    int smallest = INT_MIN;
    for(int i = 0;i<5;i++){
        if(arr[i]>smallest)
        smallest = arr[i];
    }
    int secondsmallest = INT_MIN;
    for(int i = 0 ; i<5;i++){
        if(arr[i]<smallest && arr[i]>secondsmallest){
            secondsmallest = arr[i];
        }
    }
    int thirdsmallest = INT_MIN;
    for(int i = 0 ; i<5;i++){
         if(arr[i]<secondsmallest && arr[i]>thirdsmallest){
            thirdsmallest = arr[i];
        }
    }
    cout<<thirdsmallest;
    return 0;
}

