#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool backspaceCompare(string s, string t) {
        stack<char> st1;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '#' && st1.empty()){
                
            }
             else if(s[i] == '#' && !st1.empty()) {
                st1.pop();
            } else {
                st1.push(s[i]);
            }
        }
        vector<char> ans1;
        while (!st1.empty()) {
            ans1.push_back(st1.top());
            st1.pop();
        }

        stack<char> st2;
        for (int i = 0; i < t.size(); i++) {
            if(t[i] == '#' && st2.empty()){
                
            }
            else if(t[i] == '#' && !st2.empty()) {
                st2.pop();
            } else {
                st2.push(t[i]);
            }
        }

        vector<char> ans2;
        while (!st2.empty()) {
            ans2.push_back(st2.top());
            st2.pop();
        }

        if (ans1 == ans2)
            return true;
        return false;
}
int main()
{
    // compare two strings with backspace using stack
    string str1 = "ab#c";
    string str2 = "ad#c";
    cout<<backspaceCompare(str1, str2)<<endl;
    return 0;
}
