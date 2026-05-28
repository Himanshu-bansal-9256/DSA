#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> st;
        string ans = "";
        for(int i=0; i<S.size(); i++){
            if(S[i] == '('){
                if(!st.empty()){
                    ans += S[i];
                }
                st.push(S[i]);
            }
            else{
                st.pop();
                if(!st.empty()){
                    ans += S[i];
                }
            }
        }
        return ans;
    }
};
int main(){

    Solution sol;
    string S = "(()())(())";
    string result = sol.removeOuterParentheses(S);
    cout << "Result: " << result << endl; // Output: "()()()"
    return 0;
}