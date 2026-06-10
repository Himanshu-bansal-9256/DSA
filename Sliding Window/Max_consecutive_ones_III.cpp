#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int l = 0;
        int r = 0;
        int zeros = 0;
        int maxlen = 0;

        while (r < nums.size())
        {

            if (nums[r] == 0)
                zeros++;

            if(zeros > k)
            {
                if (nums[l] == 0)
                    zeros--;

                l++;
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1};
    int k = 2;
    int result = sol.longestOnes(nums, k);

    cout << "Longest consecutive ones with at most " << k << " zeros: " << result << endl;

    return 0;
}