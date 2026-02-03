#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {}
    bool empty() { return st1.empty() && st2.empty(); }

    void push(int x) { st1.push(x); }

    int pop() {
        if (empty()) {
            return 0;
        }
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int element = st2.top();
        st2.pop();
        return element;
    }

    int peek() {
        if (empty()) {
            return 0;
        }
        if (!st2.empty()) {
            return st2.top();
        } else {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
};


int main() {
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front element: " << q.peek() << endl; // Output: 10

    q.pop();
    cout << "Front element after pop: " << q.peek() << endl; // Output: 20

    return 0;
}