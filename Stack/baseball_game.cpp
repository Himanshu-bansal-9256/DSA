#include <bits/stdc++.h>
using namespace std;
int main()
{
    // baseball game
    vector<string> operations = {"5","2","C","D","+"};
    stack<int> st;
        for (int i = 0; i < operations.size(); i++) {
            if (st.empty())
                st.push(stoi(operations[i]));
            // c ke liye
            else if (operations[i] == "C")
                st.pop();
            // d ke liye
            else if (operations[i] == "D")
                st.push(st.top() * 2);
            // + ke liye
            else if (operations[i]=="+"){
                int element = st.top();
                st.pop();
                int sum = element + st.top();
                st.push(element);
                st.push(sum);
            }
            // x ko push karna hai
            else {
                st.push(stoi(operations[i]));
            }
        }
         int sum = 0;
        while (!st.empty()) {
            sum+=st.top();
            st.pop();
        }
        cout<<sum;
    return 0;
}
