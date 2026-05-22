#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node *createLL(int arr[], int size, int index) {
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createLL(arr, size, index + 1);
    return temp;
}

void removeLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }

    // no loop
    if (fast == NULL || fast->next == NULL)
        return;

    // find length of loop 
    slow = fast->next;
    int count = 1;
    while (slow != fast) {
        count++;
        slow = slow->next;
    }

    // slow & fast ko head pe lao
    slow = head;
    fast = head;

    // fast ko count distance aage bhejo
    while (count--) {
        fast = fast->next;
    }

    // loop ka starting node
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // last node tak le jao 
    while (slow->next != fast) {
        slow = slow->next;
    }

    slow->next = NULL; // loop remove
}

void printLL(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    Node *head = createLL(arr, 6, 0);

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head->next;

    removeLoop(head);

    cout << "Loop removed, linked list is:\n";
    printLL(head);

    return 0;
}
