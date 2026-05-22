#include<bits/stdc++.h>
using namespace std;
int mineatingSpeed(int arr[],int n , int h){
    int start =1;
    int end = *max_element(arr,arr+n);
    int ans =-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        long long total=0;
        for(int i=0;i<n;i++){
            total += ceil((double)arr[i]/mid);
        }
        if(total<=h){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mineatingSpeed(arr,n,8);  

}