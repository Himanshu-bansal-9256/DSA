#include <bits/stdc++.h>
using namespace std;

class twoStacks
{
public:
    int *arr;
    int top1, top2;
    int size;

    // constructor
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }
    void push1(int x)
    {
        if (top1 + 1 == top2)
            return;
        else
        {
            top1++;
            arr[top1] = x;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x)
    {

        if (top1 + 1 == top2)
            return;
        else
        {
            top2--;
            arr[top2] = x;
        }
    }

    // Function to remove an element from top of the stack1.

    int pop1()
    {
        if (top1 == -1)
            return -1;

        int ele = arr[top1];
        top1--;
        return ele;
    }

    // Function to remove an element from top of the stack2.
    int pop2()
    {
        if (top2 == size)
            return -1;

        int ele = arr[top2];
        top2++;
        return ele;
    }
};
int main()
{
    // two stack in an array
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack2 is " << ts.pop2() << endl;
    return 0;
}
