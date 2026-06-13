#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        unordered_map<char, int> mp;
        int count = 0;
        while (r < n) {
            mp[s[r]]++;
            while (mp.size() == 3) {
                count+=(n-r);
                mp[s[l]]--;
                if (mp[s[l]] == 0){
                    mp.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    string s = "bbacba";
    int result = sol.numberOfSubstrings(s);
    cout << result << endl; // Output: 10
    return 0;
}