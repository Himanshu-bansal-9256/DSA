#include <bits/stdc++.h>
using namespace std;

// brute force method
// int maxDiffbetweenTwoElements(vector<int> arr)
// {
//     int maxi = INT_MIN;
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int small = arr[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             int diff = arr[j] - small;
//             maxi = max(maxi, diff);
//         }
//     }
//     return maxi;
// }
int main()
{
    int arr[100] = {9,5,8,12,2,3,7,4};

    vector<int> v(arr, arr + 8);
    int maxi = INT_MIN;
    for (int i = 7; i >= 0; i--)
    {
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        v.push_back(maxi);
    }
    reverse(v.begin(),v.end());
    int ans = INT_MIN;
    for(int i = 0 ; i <8 ; i++){
        ans = max(ans,v[i]-arr[i]);
    }
    cout<<ans;

    // cout << maxDiffbetweenTwoElements(v);
}