#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = e + (s - e) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
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
    cout << peakIndexInMountainArray(arr, n) << endl;
    return 0;
}