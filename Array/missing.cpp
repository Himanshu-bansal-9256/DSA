#include<bits/stdc++.h>
using namespace std;
    int missingNum(int arr[], int n){
        int sum = 0;
        for (int i = 0; i < n-1; i++) {
            sum += arr[i];
        }
        int ans =  n * (n + 1) / 2;  
        return (ans - sum);          
    }
int main(){
    int n ; 
    cin>> n; 
    int arr[1000];
    for(int i = 0 ; i< n -1 ; i++){
        cin>>arr[i];
    }
    cout<<missingNum(arr,n);

}