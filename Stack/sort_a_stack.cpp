#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    //sort a stack 
    stack<int> st;
    st.push(34);
    st.push(3);
    st.push(31);
    st.push(98);    
    st.push(92);
    st.push(23);

    stack<int> tempStack;
    while(!st.empty()){
        int curr = st.top();
        st.pop();

        while(!tempStack.empty() && tempStack.top() > curr){
            st.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(curr);
    }
    st = tempStack;
    cout << "Sorted numbers are: \n";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
