#include <iostream>
using namespace std;

class Dequeue
{
    int *arr;
    int front, rear, size;

public:
    Dequeue(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isEmpty()
    {
        return (front == -1);
    }
    bool isFull()
    {
        return ((rear + 1) % size == front);
    }
    // push at front
    void push_front(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            return;
        }
        else if (isFull())
        {
            return;
        }
        else
        {
            front = (front - 1 + size) % size;
            arr[front] = x;
            return;
        }
    }

    // push at back
    void push_back(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            return;
        }
        else if (isFull())
        {
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            return;
        }
    }

    // pop from front
    void pop_front()
    {
        if (isEmpty())
            return;
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % size;
            }
        }
    }
    // pop from back
    void pop_back()
    {
        if (isEmpty())
            return;
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                rear = (rear - 1 + size) % size;
            }
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    };
};

int main()
{

    Dequeue dq(5);
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    cout << "Front element: " << dq.getFront() << endl; // Output: 5
    cout << "Rear element: " << dq.getRear() << endl;   // Output: 20
    dq.pop_front();
    cout << "Front element after pop: " << dq.getFront() << endl; // Output: 10

    return 0;
}
