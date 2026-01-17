#include <iostream>
#include <stack>
using namespace std;

// 1st method
bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                } else if (s[i] == ')') {
                    if (st.top() != '(')
                        return false;
                    else {
                        st.pop();
                    }
                } else if (s[i] == ']') {
                    if (st.top() != '[')
                        return false;
                    else {
                        st.pop();
                    }
                } else if (s[i] == '}') {
                    if (st.top() != '{')
                        return false;
                    else {
                        st.pop();
                    }
                }
            }

        }
        return st.empty();
}

// 2nd method 

bool check(string str){
    int left = 0 ;
    for(int i = 0 ; i < str.size(); i++){
        if(str[i] == '('){
            left++;
        }
        else{
            if(left==0) return false;
            else{
                left--;
            }
        }
    }
    return left == 0;
}
int main()
{
    // check for valid parenthesis using stack
    string str = "{}[]]()";
    cout<<isValid(str)<<endl;
    cout<<check(str)<<endl;
    return 0;
}
