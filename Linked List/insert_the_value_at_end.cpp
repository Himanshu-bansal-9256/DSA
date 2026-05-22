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

int main()
{
    Node *Head = NULL;

    int arr[] = {10, 20, 30, 40, 50};

    Head = new Node(arr[0]);
    Node *temp = Head;
    for (int i = 1; i < 5; i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // insert the node at particular position
    int x = 3;       // insert position
    int value = 100; // value to be inserted

    temp = Head;
    x--; // because head already at position 1

    while (x--)
    {
        temp = temp->next;
    }

    Node *temp2 = new Node(value);  
    temp2->next = temp->next;
    temp->next = temp2;

    // print the linked list
    temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
