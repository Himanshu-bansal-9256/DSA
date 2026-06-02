#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         set<int> s;
//         for (int num : nums) {
//             s.insert(num);
//             if (s.size() > 3) {
//                 s.erase(s.begin());
//             }
//         }
//         if (s.size() < 3) {
//             return *s.rbegin();
//         } else {
//             return *s.begin();
//         }
//     }
// };

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(), greater<int>());
        int n = nums.size();
        int count =1;
        int prev = nums[0];
        for(int i = 1 ; i < n ; i++){
            if(nums[i] != prev){
                count++;
                prev = nums[i];
            }
            if(count==3){
                return prev;
            }
        }
        return nums[0];
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 1};
    cout << sol.thirdMax(nums) << endl;
    return 0;
}