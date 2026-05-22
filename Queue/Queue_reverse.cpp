#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // 1st Approach: Using an array
    vector<int> ans;
    while (!q.empty())
    {
        int Front = q.front();
        ans.push_back(Front);
        q.pop();
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        q.push(ans[i]);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    // 2nd Approach: Using stack
    stack<int> st;
        while(!q.empty()){
           st.push(q.front());
           q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}