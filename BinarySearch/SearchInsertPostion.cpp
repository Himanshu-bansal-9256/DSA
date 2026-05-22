#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin>>n;
    int index = n;
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
            index = mid ;
        }
        else if(arr[mid]<key){
            s= mid+1 ;
        }
        else{
            e = mid-1 ;
            index = mid ;
        }
    }
    cout<<index<<endl;
    return 0 ;

}