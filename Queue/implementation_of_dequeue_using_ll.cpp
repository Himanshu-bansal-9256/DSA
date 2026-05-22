#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next, *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Dequeue {
    Node *front;
    Node *rear;

public:
    Dequeue() {
        front = nullptr;
        rear = nullptr;
    }

    // push at front
    void push_front(int x) {
        if (front == nullptr) {
            front = rear = new Node(x);
        } else {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
    }

    // push at back
    void push_back(int x) {
        if (rear == nullptr) {
            front = rear = new Node(x);
        } else {
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
        }
    }

    // pop from front
    void pop_front() {
        if (front == nullptr)
            return;

        Node *temp = front;
        front = front->next;
        delete temp;

        if (front)
            front->prev = nullptr;
        else
            rear = nullptr;
    }

    // pop from back
    void pop_back() {
        if (rear == nullptr)
            return;

        Node *temp = rear;
        rear = rear->prev;
        delete temp;

        if (rear)
            rear->next = nullptr;
        else
            front = nullptr;
    }

    int getFront() {
        return (front == nullptr) ? -1 : front->data;
    }

    int getRear() {
        return (rear == nullptr) ? -1 : rear->data;
    }
};

int main() {
    Dequeue dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);

    cout << "Front: " << dq.getFront() << endl; // 3
    cout << "Rear: " << dq.getRear() << endl;   // 2

    dq.pop_front();
    cout << "Front after pop_front: " << dq.getFront() << endl; // 1

    dq.pop_back();
    cout << "Rear after pop_back: " << dq.getRear() << endl;   // 1

    return 0;
}
