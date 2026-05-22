#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);

    int x = 100; 
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    temp.push(x);

    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }

    // print stack
    cout << "Stack after inserting at bottom:\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
