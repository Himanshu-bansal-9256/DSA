#include <bits/stdc++.h>
using namespace std;
int SearchInrotatedArray(int arr[], int n , int t)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = e + (s - e) / 2;
        if (arr[mid] == t)
        {
            return t;
        }
        else if(arr[mid]>=arr[0]){
            if(arr[0]<=t && t<arr[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(arr[mid]<t && t<=arr[n-1]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }
    return t;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << SearchInrotatedArray(arr, n, target) << endl;
    return 0;
}