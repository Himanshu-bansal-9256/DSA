#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double avg = INT_MIN;
        double sum = 0;
        int left = 0 ;
        int right = 0;
        while(right<n){
            sum += nums[right];
            if(right-left+1==k){
                avg = max(sum/k,avg);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return avg;
    }
};

int main() {
    Solution sol;
    
    // Example test case
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    
    cout << "Maximum average is: " << sol.findMaxAverage(nums, k) << endl;
    
    return 0;
}
