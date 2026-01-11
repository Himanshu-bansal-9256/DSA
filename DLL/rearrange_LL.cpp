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

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    Node *head = createLL(arr, 6, 0);

    if (head == NULL || head->next == NULL)
    {
        cout << "List is too short to rearrange." << endl;
        return 0;
    }

    // dummy heads
    Node *oddhead = new Node(0);
    Node *oddtail = oddhead;
    Node *evenhead = new Node(0);
    Node *eventail = evenhead;

    Node *curr = head;
    int pos = 1;

    // split based on POSITION (1-based)
    while (curr)
    {
        if (pos % 2 == 1)
        { // odd position
            oddtail->next = curr;
            oddtail = oddtail->next;
        }
        else
        { // even position
            eventail->next = curr;
            eventail = eventail->next;
        }
        curr = curr->next;
        pos++;
    }

    // merge odd list first, then even list
    oddtail->next = evenhead->next;
    eventail->next = NULL;

    // update head to new rearranged list
    head = oddhead->next;

    // delete dummy nodes
    delete oddhead;
    delete evenhead;

    // print the linked list
    curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
