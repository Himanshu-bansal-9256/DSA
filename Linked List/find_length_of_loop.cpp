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

int countLengthofLoop(Node *head)
{
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
        int count = 1;
        slow = fast->next;;
        while (slow != fast)
        {
            count++;
            slow = slow->next;
        }
        return count;
    }
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

    if (countLengthofLoop(head))
        cout << "Loop length is: " << countLengthofLoop(head) << endl;
    else
        cout << "No loop detected" << endl;

    return 0;
}
