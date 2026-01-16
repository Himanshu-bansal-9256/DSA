#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

class Stack{
    Node*top;
    int size;

    public:
    Stack(){
        top = NULL;
        size = 0;
    }

    // push operation
    void push(int value){
        Node* temp = new Node(value);
        if(temp==NULL){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else{
            temp->next = top;
            top = temp;
            size++;
            cout<<"Pushed "<<value<<" to stack"<<endl;
        }
    }

    // pop operation
    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else{
            Node* temp = top;
            cout<<"Popped "<<top->data<<" from stack"<<endl;
            top = top->next;
            delete temp;
            size--;
        }
    }

    // peek operation
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    // isEmpty operation
    bool IsEmpty(){
        return top==NULL;
    }
    // size operation
    int IsSize(){
        return size;
    }
};

int main(){
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    cout<<"Top element is: "<<S.peek()<<endl;
    cout<<"Stack size is: "<<S.IsSize()<<endl;
    S.pop();
    cout<<"Top element is: "<<S.peek()<<endl;
    cout<<"Stack size is: "<<S.IsSize()<<endl;
    return 0;
}