#include<bits/stdc++.h>
using namespace std;

int findKthPositive(int arr[], int n, int k) {
        int start = 0 , end = n-1,ans=n;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]-mid-1>=k){
                ans = mid;
                end = mid-1;
            }
            else 
            start = mid+1;
        }
        return ans+k;
    }
int main(){
     int n;
    cin >> n;
    int arr[n];
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findKthPositive(arr, n, k) << endl;
}