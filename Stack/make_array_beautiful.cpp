#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // make array beautiful using stack
    int arr[] = {2, 3, 5, -4, 6, -2, -8, 9};
    stack<int> st;
    for (int i = 0; i < 5; i++)
    {
        if (st.empty())
        {
            st.push(arr[i]);
        }
        if (arr[i] >= 0 && st.top() >= 0)
        {
            st.push(arr[i]);
        }
        else if (arr[i] < 0 && st.top() < 0)
        {
            st.push(arr[i]);
        }
        else
        {
            st.pop();
        }
    }

    cout << "Final stack elements:\n";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
