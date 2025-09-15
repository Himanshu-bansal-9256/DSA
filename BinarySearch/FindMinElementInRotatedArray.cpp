#include <bits/stdc++.h>
using namespace std;
int FindMinElementInRotatedArray(int arr[], int n)
{
    int s = 0, e = n - 1;
    int ans = arr[0];
    while (s <= e)
    {
        int mid = e + (s - e) / 2;
        if (arr[mid] >=arr[0])
        {
            s = mid + 1;
        }
        else
        {
            ans = arr[mid];
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << FindMinElementInRotatedArray(arr, n) << endl;
    return 0;
}