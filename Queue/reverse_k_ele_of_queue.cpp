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
    int k = 3;
    stack<int> st;
    while (k--)
    {
        st.push(q.front());
        q.pop();
    }
    int n = q.size();
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (n--)
    {
        q.push(q.front());
        q.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}