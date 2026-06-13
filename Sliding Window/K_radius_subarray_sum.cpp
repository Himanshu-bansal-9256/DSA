#include<bits/stdc++.h>
using namespace std;


// method 1 brute force but it will give TLE
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        double avg = 0;
        vector<int> ans(n, -1);
        while (i < n) {
            if (i - k < 0 || i + k >= n) {
                ans[i] = -1;
            } 
            else {
                long long sum = 0;
                for (int j = i - k; j <= i + k; j++) {
                    sum += nums[j];
                }
                avg = sum / (2 * k + 1);
                ans[i] = avg;
            }
            i++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {7, 4, 3, 9, 1, 8, 5, 2, 6};
    int k = 3;
    vector<int> result = sol.getAverages(nums, k);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl; // Output: [-1, -1, -1, 5, 4, 5, -1, -1, -1]
    return 0;
}