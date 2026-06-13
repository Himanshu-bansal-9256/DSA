#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long maxsum = 0;
        unordered_map<int, int> mp;
        int l = 0;
        int r = 0;
        long long sum = 0;
        while (r < n) {
            sum += nums[r];
            mp[nums[r]]++;
            if (r - l + 1 > k) {
                sum -= nums[l];
                mp[nums[l]]--;
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
            if (r - l + 1 == k && mp.size() == k) {
                maxsum = max(maxsum, sum);
            }
            r++;
        }
        return maxsum;
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
    long long result = sol.maximumSubarraySum(nums, k);
    cout << "Maximum sum of distinct subarray of length " << k << " is: " << result << endl;
    return 0;
}