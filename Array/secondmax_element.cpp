#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[5]={8,7,11,4,2};
//     int largest = INT_MIN;
//     for(int i = 0;i<5;i++){
//         if(arr[i]>largest)
//         largest = arr[i];
//     }
//     int secondMax = INT_MIN;
//     for(int i = 0 ; i<5;i++){
//         if(arr[i]<largest && arr[i]>secondMax){
//             secondMax = arr[i];
//         }
//     }
//     cout<<secondMax;
//     return 0;
// }

// second method 

int main(){
    int n ;
     cin>>n;
        int arr[n];
        for(int i = 0 ; i<n;i++){
           cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[n-2];
        return 0;
}