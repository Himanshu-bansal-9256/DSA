#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m)
            return false;

        unordered_map<char, int> mp;

        for (char ch : s1) {
            mp[ch]++;
        }

        int count = mp.size();
        int l = 0;
        int r = 0;
        while (r < m) {
            if (mp.find(s2[r]) != mp.end()) {
                mp[s2[r]]--;

                if (mp[s2[r]] == 0) {
                    count--;
                }
            }
            if (r - l + 1 == n) {
                if (count == 0) {
                    return true;
                }
                if (mp.find(s2[l]) != mp.end()) {
                    if (mp[s2[l]] == 0) {
                        count++;
                    }
                    mp[s2[l]]++;
                }
                l++;
            }
            r++;
        }
        return false;
    }
};

int main() {
    Solution sol;
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool result = sol.checkInclusion(s1, s2);
    cout << (result ? "True" : "False") << endl;
    return 0;
}