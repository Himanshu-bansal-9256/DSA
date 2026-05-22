#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *createLL(int arr[], int size, int index)
{
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createLL(arr, size, index + 1);
    return temp;
}

Node *reverseKGroup(Node *head, int k) {
        // dummy node create karo 
        Node * first = new Node(0);
        first ->next = head;
        head = first;
        int x;
        Node *second,*prev ,*curr, *front;
        while(first->next){
            x = k;
            second = first ->next;
            prev = first;
            curr = first->next;
            
            while(x&&curr)
            {
                front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
                x--;
            }
            first->next = prev;
            second->next = curr;
            first = second;
            
        }
        
        // dummy node delte
        
        first = head;
        head = head->next;
        delete first;
        
        return head;
    }


int main()
{
    int arr1[] = {1, 2, 3,5 ,5};        

    Node* head1 = createLL(arr1, 5, 0);
    Node* result =  reverseKGroup(head1, 2);

    // print the linked list
    Node*temp = result;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

