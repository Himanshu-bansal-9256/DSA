#include <iostream>
#include <vector>
using namespace std;

int majority(int arr[100], int n)
{
    int candidate, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
            count++;
    }
    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int result = majority(arr, n);
    cout << result << endl;
}
