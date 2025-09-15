#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin>>n ;
    char arr[n] ;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
    for(int i=n-2;i>=0;i--){
        for(int j = 0; j<=i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]) ;    
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" " ;
    }

}
