#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class myQueue {
    Node* front;
    Node* rear;
    public:
    myQueue(){
        front = nullptr;
        rear = nullptr;
    } 

    bool isEmpty() {
        return front == nullptr;
    }
    void push(int x) {
        // Adds an element x at the rear of the queue.
        if(isEmpty()){
        front = new Node(x);
        rear = front;
        }
        else{
            rear->next = new Node(x);
            rear = rear->next;
        }
    }

    void pop() {
        if(isEmpty())
        return;
        else{
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    int getFront() {
        if(isEmpty()){
            return -1;
        }
        else{
            return front->data;
        }
    }

    int getRear() {
        if(isEmpty())
        return -1;
        else{
            return rear->data;
        }
    }

    int size() {
        int count = 0;
        Node* temp = front;
        while(temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    myQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.getFront() << endl; // Output: 10
    cout << "Rear element: " << q.getRear() << endl;   // Output: 30

    q.pop();
    cout << "Front element after dequeue: " << q.getFront() << endl; // Output: 20

    return 0;
}