#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin>>n;
    int arr[1000];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
    int key ;
    cin>>key ;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==key){
            cout<<i<<" ";
            break;
        }
    }
    for(int i = n-1 ; i>=0 ; i--){
        if(arr[i]==key){
            cout<<i<<" ";
            break;
        }
    }
}