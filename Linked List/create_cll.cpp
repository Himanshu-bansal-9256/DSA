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

    // insert at circular linked list at the start
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return 0;
    }
    Node* temp = new Node(7);
    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    head = temp;
    curr->next = head;


    // print the linked list
    curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    // cout << curr->data << " ";
    return 0;
}
