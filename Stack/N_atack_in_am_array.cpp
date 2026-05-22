#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int index;
    Node *next;

    Node(int x)
    {
        index = x;
        next = NULL;
    }
};
class NStack
{
public:
    stack<int> st;
    int *arr;
    Node **top;
    NStack(int N, int S)
    {
        arr = new int[S];
        top = new Node *[N];
        for (int i = 0; i < N; i++)
            top[i] = NULL;
        for (int i = 0; i < S; i++)
            st.push(i);
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if (st.empty())
        {
            return 0;
        }
        arr[st.top()] = x;
        Node *temp = new Node(st.top());
        temp->next = top[m - 1];
        top[m - 1] = temp;
        st.pop();
        return 1;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if (top[m - 1] == NULL)
            return -1;
        st.push(top[m - 1]->index);
        int element = arr[top[m - 1]->index];
        top[m - 1] = top[m - 1]->next;
        return element;
    }
};
int main()
{
    NStack ns(3, 6);   // 3 stacks, array size 6

    ns.push(10, 1);
    ns.push(20, 1);
    ns.push(30, 2);
    ns.push(40, 3);

    cout << ns.pop(1) << endl; // 20
    cout << ns.pop(2) << endl; // 30
    cout << ns.pop(3) << endl; // 40
    cout << ns.pop(3) << endl; // -1

    return 0;
}
