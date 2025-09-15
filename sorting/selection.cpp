#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n ; cin>>n ;
    // int arr[n] ;
    // for(int i = 0 ; i < n ; i++){
    //     cin>>arr[i] ;
    // }
    // for(int i=0;i<n-1;i++){
    //     int index = i;
    //     for(int j = i+1; j<n;j++){
    //         if(arr[j]<arr[index])
    //             index = j ;
    //     }
    //         swap(arr[index],arr[i]) ;
    // }
    // for(int i = 0 ; i < n ; i++){
    //     cout<<arr[i]<<" " ;
    // }

// selection sort in decreasing order
    // int n ; cin>>n ;
    // int arr[n] ;
    // for(int i = 0 ; i < n ; i++){
    //     cin>>arr[i] ;
    // }
    // for(int i=0;i<n-1;i++){
    //     int index = i;
    //     for(int j = i+1; j<n;j++){
    //         if(arr[j]>arr[index])
    //             index = j ;
    //     }
    //         swap(arr[index],arr[i]) ;
    // }
    // for(int i = 0 ; i < n ; i++){
    //     cout<<arr[i]<<" " ;
    // }


    // selection sort for characters in decreasing order
    int n ; cin>>n ;
    char arr[n] ;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]>arr[index])
                index = j ;
        }
            swap(arr[index],arr[i]) ;
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" " ;
    }
}
