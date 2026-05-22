#include<bits/stdc++.h>
using namespace std;

// brute force method
// int largestSumContigousSubarray(vector<int>arr){
//    int maxi = INT_MIN;
//    int n = arr.size();
//    for(int i = 0 ; i < n ;  i++){
//     int prefix = 0;
//     for(int j = i ; j<n; j++){
//         prefix += arr[j];
//         maxi = max(maxi,prefix);
//     }
//    }
//    return maxi;
// }


// kadan's algorithm

int largestSumContigousSubarray(vector<int>arr){
   int maxi = INT_MIN;
   int n = arr.size();
   int prefix = 0;
   for(int i = 0 ; i < n ;  i++){
        prefix += arr[i];
        maxi = max(maxi,prefix);
        if(prefix<0) prefix =0;
    }
   return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
   for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    cout<<largestSumContigousSubarray(v);

}