#include<bits/stdc++.h>
using namespace std;

// method 1 brute force
// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             unordered_map<int, int> mp;
//             for (int j = i; j < n; j++) {
//                 mp[nums[j]]++;
//                 if (mp.size() == k) {
//                     count++;
//                 } else if (mp.size() > k) {
//                     break;
//                 }
//             }
//         }
//         return count;
//     }
// };

// method 2 sliding window

class Solution {
public:
    int atMostK(vector<int>& nums, int k) {
        if (k < 0) return 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        int l = 0;
        int r = 0;
        int count = 0;

        while(r<n){
            mp[nums[r]]++;
            while (mp.size() > k) {
                mp[nums[l]]--;
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
            count += (r - l + 1);
            r++;
        }

        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};

int main() {
    Solution sol;
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    int result = sol.subarraysWithKDistinct(nums, k);
    cout << "Number of subarrays with exactly " << k << " distinct integers is: " << result << endl;
    return 0;
}