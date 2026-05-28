#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        string ans;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    s[i] = '#';
                }
            }
        }

        // remove '(' extra brackets
        while(!st.empty()){
            s[st.top()] = '#';
            st.pop();
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#') {
                ans += s[i];
            }
        }
        return ans;
    }
};
int main() {
    Solution sol;
    string s = "lee(t(c)o)de)";
    string result = sol.minRemoveToMakeValid(s);
    cout << "Result: " << result << endl; 
    return 0;
}