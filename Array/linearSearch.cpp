#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n, int x){
    for(int i = 0; i<n ; i++){
        if(arr[i]==x)
        return i;
    }
    return -1;
}
    int main(){
        int n ; 
        cin>>n;
        int x; cin>>x;
        int arr[n];
        for(int i = 0 ; i <n ; i++){
            cin>>arr[i];
        }
        cout<<linearsearch(arr,n,x);
}
