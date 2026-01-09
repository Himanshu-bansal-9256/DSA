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

    // delete at start
    // if (Head != NULL)
    // {
    //     // if only one node present

    //     if (Head->next == NULL)
    //     {
    //         delete Head;
    //         Head = NULL;
    //     }
    //     // if more than one node present
    //     else
    //     {
    //         Node *curr = Head;
    //         Head = Head->next;
    //         delete curr;
    //         Head->prev = NULL;
    //     }
    // }

    // delete at end
    // if (Head != NULL)
    // {
    //     // if only one node present

    //     if (Head->next == NULL)
    //     {
    //         delete Head;
    //         Head = NULL;
    //     }
    //     // if more than one node present
    //     else
    //     {
    //         Node *curr = Head;
    //         while (curr->next)
    //         {
    //             curr = curr->next;
    //         }
    //         curr->prev->next = NULL;
    //         delete curr;
    //     }
    // }

    // delete at specific position
    int pos = 3; 
    // delete at pos ==0
    if (pos == 1){
        //  if only one node present

        if (Head->next == NULL)
        {
            delete Head;
            Head = NULL;
        }
        // if more than one node present
        else
        {
            Node *curr = Head;
            Head = Head->next;
            delete curr;
            Head->prev = NULL;
        }
    }
    else{
        Node *curr = Head;
        while (--pos)
        {
            curr = curr->next;
        }
        // delte at end
        if(curr->next==NULL){
            curr->prev->next = NULL;
            delete curr;
        }
        else{
            // delte at middle
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }

    }
    

    // print the linked list
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
}