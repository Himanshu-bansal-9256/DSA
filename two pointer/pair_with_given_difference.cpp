#include<bits/stdc++.h>
using namespace std;

int pair_with_given_difference(int arr[] , int n , int target){
    int start = 0 , end = 1;
    sort(arr,arr+n);
    while(end<n){
        int diff = arr[end] - arr[start];
        if(diff==target){
            cout<<start<<" "<<end<<endl;
            return 0;
        }
        else if(diff<target){
            end++;
        }
        else{
            start++;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    pair_with_given_difference(arr,n,target);
    return 0;

}