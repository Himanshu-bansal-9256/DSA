#include <bits/stdc++.h>
using namespace std;

vector<int> maxOfMins(vector<int> &arr)
{
    //  code here
    int n = arr.size();
    vector<int> ans(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        // value kab tak pop hogi
        // NSR NSL
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            int index = st.top();
            st.pop();
            // i = nect smallest right
            // stack ke andar jo index , NSL
            if (st.empty())
            {
                int range = i; // maximum window size bata rha hai ye
                ans[range - 1] = max(ans[range - 1], arr[index]);
            }
            else
            {
                int range = i - st.top() - 1;
                ans[range - 1] = max(ans[range - 1], arr[index]);
            }
        }
        st.push(i);
    }
    // stack ke element ko empty aro
    int i = n;
    while (!st.empty())
    {
        int index = st.top();
        st.pop();
        // i = next smallest right
        // stack ke andar jo index , NSL
        if (st.empty())
        {
            int range = n; // maximum window size bata rha hai ye
            ans[range - 1] = max(ans[range - 1], arr[index]);
        }
        else
        {
            int range = n - st.top() - 1;
            ans[range - 1] = max(ans[range - 1], arr[index]);
        }
    }

    // ans array ki value ko update kar do
    for (int i = n - 2; i >= 0; i--)
    {
        ans[i] = max(ans[i], ans[i + 1]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {10, 20, 30, 50, 10, 70, 30};
    vector<int> result = maxOfMins(arr);
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
