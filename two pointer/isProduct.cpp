#include<bits/stdc++.h>
using namespace std;

bool isProduct(int arr[] , int n , long long x){
    int start = 0 , end = n-1;
    sort(arr,arr+n);
     while(start<end){
            long long mul = 1LL*arr[start]*arr[end];
            if(mul==x){
                return true;
            }
            else if(mul<x) {
                start++;
            }
            else{
                end--;
            }
        }
        return false;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    long long target;
    cin>>target;
    if (isProduct(arr, n, target))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;

}