#include <iostream>
#include <unordered_map>
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

int index(Node *head)
{
    if(head == NULL || head->next == NULL)
        return -1;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
        if (fast == NULL || fast->next == NULL)
            return -1;
        slow = head;
        int index = 0;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
            index++;
        }
        return index;
    }
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    Node *head = createLL(arr, 6, 0);

    // create a loop for testing
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head->next;

    if (index(head))
        cout << "Loop starts at index: " << index(head) << endl;
    else
        cout << "No loop detected" << endl;

    return 0;
}
