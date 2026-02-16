#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j = 0;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // method 1
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] >= 0)
    //     {
    //         swap(arr[i], arr[j]);
    //         j++;
    //     }
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // method 2
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            temp.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            temp.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}