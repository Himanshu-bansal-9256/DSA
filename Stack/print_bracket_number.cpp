#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> bracketNumbers(string str) {
        // Your code goes here
        int count = 0;
        stack<int> st;
        vector<int> ans;
        
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i]=='('){
                count++;
                st.push(count);
                ans.push_back(count);
            }
            else if(str[i]==')'){
                    ans.push_back(st.top());
                    st.pop();
                
            }
            
        }
        return ans;
}
int main()
{
    // print bracket numbers using stack
    string str = "(())()";
    vector<int> result = bracketNumbers(str);
    for(int i = 0 ; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
