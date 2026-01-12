#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* createLL(int arr[], int size, int index) {
    if (index == size)
        return NULL;

    Node* temp = new Node(arr[index]);
    temp->next = createLL(arr, size, index + 1);
    return temp;
}

bool detectLoop(Node* head) {
    unordered_map<Node*, bool> visited;
    Node* curr = head;

    while (curr != NULL) {
        if (visited[curr] == true)
            return true;

        visited[curr] = true;
        curr = curr->next;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    Node* head = createLL(arr, 6, 0);

    // create a loop for testing
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head->next;

    if (detectLoop(head))
        cout << "Loop detected" << endl;
    else
        cout << "No loop detected" << endl;

    return 0;
}
