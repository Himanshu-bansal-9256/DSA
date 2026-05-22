#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // make array beautiful using stack
    string arr[] = {"ab","aa","aa","bcd","ab"};
    stack<string> st;
        for(int i = 0 ; i < 5; i++){
            if(st.empty())
            st.push(arr[i]);
            else if(st.top() == arr[i])
            st.pop();
            else
            st.push(arr[i]);
        }
        cout << "Final stack size: " << st.size() << endl;
    return 0;
}
