#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin>>target;

    // brute force approach


    // int i = 0, j = 1;
    // for (i = 0; i < n; i++)
    // {

    //     for (j = i + 1; j < n; j++)
    //     {
    //         int sum = arr[i] + arr[j];
    //         if (sum == target)
    //         {
    //             cout << i << " " << j << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << -1 << " " << -1 << endl;


    // better approach using binary search
//     sort(arr,arr+n);
//     for(int i = 0 ; i <n-1;i++){
//         int x = target -arr[i];
//         int start = i+1;
//         int end = n-1;
//         while(start<=end){
//             int mid = start + (end-start)/2;
//             if(arr[mid]==x){
//                 cout<<i<<" "<<mid<<endl;
//                 return 0;
//             }
//             else if(arr[mid]<x){
//                 start = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//         }
//     }

//     cout << " index now found" << " " << " index not found" << endl;


    // optimal approach using two pointer
    sort(arr,arr+n);
    int start = 0;
    int end = n-1;
    while(start<end){
        int sum = arr[start]+arr[end];
        if(sum==target){
            cout<<start<<" "<<end<<endl;
            return 0;
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }
    }
    cout << " index now found" << " " << " index not found" << endl;    
}