#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n =s.size();
        unordered_map<char, int> mp;
        int l = 0;
        int maxFreq = 0;
        int r = 0;
        int maxlen = 0;
        while(r<n){
            mp[s[r]]++;
            maxFreq = max(maxFreq, mp[s[r]]);
            while ((r - l + 1) - maxFreq > k) {
                mp[s[l]]--;
                // if(mp[s[l]]==0){
                //     mp.erase(s[l]);
                //     maxFreq = max(maxFreq,mp[s[r]]);
                // }

                // that block of code does not reflect any type of chnages 
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
    string s = "AABABBA";
    int k = 1;

    cout << sol.characterReplacement(s, k) << endl;

    return 0;
}
