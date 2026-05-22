#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int size ;
    int top;
    public:

    bool flag;

    Stack(int S){
        size = S;
        arr = new int[S];
        top = -1;
        flag = 1; // true
    }
    void push(int value){
        if(top == size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = value;
        cout<<"Pushed "<<value<<" to stack"<<endl;
        flag = 0; // false
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        cout<<"Popped "<<arr[top]<<" from stack"<<endl;
        top--;
        if(top == -1){
            flag = 1; 
        }
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool IsEmpty(){
        return top == -1;
    }

    int IsSize(){
        return top+1;
    }

};

int main(){
    Stack S(5);
    // S.push(-1);
    int value = S.peek();
    if(S.flag == 0){
        cout<<value<<endl;
    }



}