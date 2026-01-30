#include <bits/stdc++.h>
using namespace std;

int main() {
    // remove k digits
    string num = "1432219";
    int k = 3;

    stack<char> st;

    for (int i = 0; i < num.size(); i++) {
        while (!st.empty() && k > 0 && num[i] < st.top()) {
            st.pop();
            k--;
        }
        st.push(num[i]);
    }

    while (k > 0 && !st.empty()) {
        st.pop();
        k--;
    }

    string result = "";
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());

    int idx = 0;
    while (idx < result.size() && result[idx] == '0') {
        idx++;
    }
    result = result.substr(idx);

    if (result.empty()) result = "0";

    cout << result << endl;  

    return 0;
}
