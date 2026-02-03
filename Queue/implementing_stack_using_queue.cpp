#include<iostream>
#include<queue>
using namespace std;

class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {}

    bool empty() {
        return q1.empty()&&q2.empty();
    }
    void push(int x) {
        if(empty())
        q1.push(x);
        else if(q1.empty()) {
            q2.push(x);
        }
        else{
            q1.push(x);
        } 
    }

    int pop() {
        if(empty())
        return 0;
        else if(q1.empty()){
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            int ele = q2.front();
            q2.pop();
            return ele;
        }
        else{
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
            int ele = q1.front();
            q1.pop();
            return ele;
        }
    }

    int top() {
        // stack khali ho
        if(empty())
        return 0;
        else if(q1.empty()){
            return q2.back();
            
        }
        else{
            return q1.back();
        }
    }

};

int main() {
    MyStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // Output: 30

    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Output: 20

    return 0;
}