#include<iostream>
using namespace std;

class myQueue {
    int *arr;
    int front, rear,size;
    public:
    myQueue(int n) {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }


    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isEmpty()){
        front = rear = 0;
        arr[0] = x;
        }
        else if(isFull()){
            return;            
        }
        else{
            rear = (rear + 1) % size;
            arr[rear] = x;
        }
    }

    void dequeue() {
        if(isEmpty())
        return;
        else{
            if(front==rear){
                front = rear = -1;
                
            }
            else{
                front = (front + 1) % size;
            }
        }
    }

    int getFront() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear() {
        if(isEmpty())
        return -1;
        else{
            return arr[rear];
        }
    }
};

int main() {
    myQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl; // Output: 10
    cout << "Rear element: " << q.getRear() << endl;   // Output: 30

    q.dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl; // Output: 20

    return 0;
}