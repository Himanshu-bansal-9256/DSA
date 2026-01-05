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
    Node *Head;
    Head = NULL;

    int arr[] = {10, 20, 30, 40, 50};

    // insert the node at particular position
    int x = 3;       // insrt postion
    int value = 100; // value to be inserted
    Node *temp = Head;
    x--;
    while (x--)
    {
        temp = temp->next;
    }
    node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;
    // print the ll
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}
