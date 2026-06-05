#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        vector<int> ans(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() &&
                   temperatures[i] > temperatures[st.top()]) {

                int prevIndex = st.top();
                st.pop();

                ans[prevIndex] = i - prevIndex;
            }

            st.push(i);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = sol.dailyTemperatures(temperatures);
    
    for (int days : result) {
        cout << days << " ";
    }
    cout << endl;
    
    return 0;
}