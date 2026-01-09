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

    // for(int i= 0 ; i< 5; i++){
    //     if(Head == NULL){
    //         Head = new Node(arr[i]);
    //         tail = Head;
    //     }
    //     else{
    //         Node* temp = new Node(arr[i]);
    //         tail->next = temp;
    //         temp->prev = tail;
    //         tail = temp;
    //     }
    // }

    // insert at start
    // if(Head == NULL){
    //     Head = new Node(5); }
    // else{
    //     Node* temp = new Node(5);
    //     temp->next = Head;
    //     Head->prev = temp;
    //     Head = temp;
    // }

    // insert at end
    // if(Head == NULL){
    //     Head = new Node(60);
    // }
    // else{
    //     Node*curr = Head;
    //     while(curr->next != NULL){
    //         curr = curr->next;
    //     };
    //     Node* temp = new Node(60);
    //     curr->next = temp;
    //     temp->prev = curr;
    // }

    // insert at specific position
    int pos = 3; // 0 based indexing

    // insert at pos ==0
    if (pos == 0)
    {
        // ll exists naa kare
        if (Head == NULL)
        {
            Head = new Node(25);
        }
        // ll exists
        else
        {
            Node *temp = new Node(25);
            temp->next = Head;
            Head->prev = temp;
            Head = temp;
        }
    }
    else
    {
        // ll at end

        Node *curr = Head;
        while (--pos)
        {
            curr = curr->next;
        }

        // if insert in ll at end
        if (curr->next == NULL)
        {
            Node *temp = new Node(25);
            curr->next = temp;
            temp->prev = curr;
            return 0;
        }
        // if insert in middle
        else
        {
            Node *temp = new Node(25);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    // print the linked list
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
}