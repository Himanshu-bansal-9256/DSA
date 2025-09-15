#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n ; cin>>n;
    // int arr[n] ;
    // for(int i = 0 ; i < n ; i++){
    //     cin>>arr[i] ;
    // }
    // int key ;
    // cin>>key ;
    // int s = 0 , e = n-1 ;
    // while(s<=e){
    //     int mid = (s+e)/2;
    //     if(arr[mid]==key){
    //         cout<<mid<<endl;
    //         return 0 ;
    //     }
    //     else if(arr[mid]<key){
    //         s= mid+1 ;
    //     }
    //     else{
    //         e = mid-1 ;
    //     }
    // }
    // cout<<-1<<endl;
    // return 0 ;


    //An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1
    int n ; cin>>n;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
    int key ;
    cin>>key ;
    int s = 0 , e = n-1 ;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            cout<<mid<<endl;
            return 0 ;
        }
        else if(arr[mid]<key){
            e= mid-1 ;
        }
        else{
            s = mid+1 ;
        }
    }
    cout<<-1<<endl;
    return 0 ;
}