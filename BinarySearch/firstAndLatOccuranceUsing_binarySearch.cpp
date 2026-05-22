#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int first = -1, last = -1;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    // first occurrence
    int s = 0, e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {
            first = mid;
            e = mid - 1;
        } 
        else if (arr[mid] < key) {
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }

    // last occurrence
    s = 0, e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {
            last = mid;
            s = mid + 1;
        } 
        else if (arr[mid] < key) {
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }

    cout << first << " " << last << endl; 
    return 0;
}
