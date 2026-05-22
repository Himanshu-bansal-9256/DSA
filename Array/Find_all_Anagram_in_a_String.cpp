#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> ans;
        if (m > n)
            return ans;
        int left = 0;
        int right = 0;
        vector<int> v1(26, 0);
        for (int i = 0; i < m; i++) {
            v1[p[i] - 'a']++;
        }
        while (right < n) {
            v1[s[right] - 'a']--; // ele add hua
            if (right - left + 1 ==m) { // check karega ki size baraabr hai yaa nhi
                bool flag = true;
                for (int i = 0; i < 26; i++) {
                    if (v1[i] != 0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    ans.push_back(left);
                } // agr saare element 0 hai to ans me left index push karega

                v1[s[left] - 'a']++; // ab ppush karne ke baad left index aage badega to
                left++;// ek element remove karna hoga old element
            }
            right++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> result = sol.findAnagrams(s, p);
    
    cout << "Anagram indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}