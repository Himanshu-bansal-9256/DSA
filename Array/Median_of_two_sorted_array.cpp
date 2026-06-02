#include<bits/stdc++.h>
using namespace std;

class Solution {
    float median(vector<int>& arr) {
        int n = arr.size();
        if (n % 2 == 1) {
            return arr[n / 2];
        }

        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }

public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> arr;
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                arr.push_back(nums1[i]);
                i++;
            } else {
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while (i < m) {
            arr.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            arr.push_back(nums2[j]);
            j++;
        }
        return median(arr);
    }
};

int main() {
    Solution sol;
    int m, n;
    cin >> m >> n;
    vector<int> nums1(m);
    vector<int> nums2(n);
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    cout << sol.findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}