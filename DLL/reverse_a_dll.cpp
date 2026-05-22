#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

Node *crateDLL(int arr[], int index, int size, Node *back)
{
    // base case
    if (index == size)
    {
        return NULL;
    }
    // node crweate karo
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = crateDLL(arr, index + 1, size, temp);
    return temp;
}

int main()
{
    Node *Head;
    Head = NULL;

    Node *tail = NULL;

    // create doubly linked list
    int arr[] = {10, 20, 30, 40, 50};

    // create dll

    Head = crateDLL(arr, 0, 5, NULL);

    // reverse the doubly linked list
    Node* curr = Head;
    Node* back = NULL;
    while(curr->next!=NULL){
        curr->prev = curr->next;
        curr->next = back;
        back = curr;
        curr= curr->prev;
    }
    curr->prev = NULL;
    curr->next = back;
    Head = curr;

    

    // print the linked list
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
}