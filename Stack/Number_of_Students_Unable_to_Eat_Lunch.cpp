#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> st;

        for (int preference : students) {
            q.push(preference);
        }

        // Push in reverse so sandwiches[0] is on top.
        for (int i = static_cast<int>(sandwiches.size()) - 1; i >= 0; i--) {
            st.push(sandwiches[i]);
        }

        int cnt = 0;

        while (!q.empty() && q.size()) {
            if (q.front() == st.top()) {
                q.pop();
                st.pop();
                cnt = 0;
            } else {
                q.push(q.front());
                q.pop();
                cnt++;
            }
        }

        return q.size();
    }
};

int main() {
    Solution solution;
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1};

    cout << solution.countStudents(students, sandwiches) << endl;
    return 0;
}
