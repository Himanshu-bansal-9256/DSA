#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> S;

    // push elements onto the stack
    S.push(10);
    S.push(20);
    S.push(30);
    cout<<S.size()<<endl;

    // pop elements from the stack
    while(!S.empty()){
        cout<<"Popped "<<S.top()<<" from stack"<<endl;
        S.pop();
    }

    // peek the top element
    if(!S.empty()){
        cout<<"Top element is "<<S.top()<<endl;
    } else {
        cout<<"Stack is empty"<<endl;
    }

    // check if stack is empty
    if(S.empty()){
        cout<<"Stack is empty now"<<endl;
    } else {
        cout<<"Stack is not empty"<<endl;
    }

    return 0;
}