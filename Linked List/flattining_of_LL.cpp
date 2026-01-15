#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

// merge two sorted bottom linked lists
Node* merge(Node* head1, Node* head2) {
    Node* dummy = new Node(0);
    Node* tail = dummy;

    while (head1 && head2) {
        if (head1->data <= head2->data) {
            tail->bottom = head1;
            head1 = head1->bottom;
        } else {
            tail->bottom = head2;
            head2 = head2->bottom;
        }
        tail = tail->bottom;
        tail->next = NULL;   // very important
    }

    if (head1)
        tail->bottom = head1;
    else
        tail->bottom = head2;

    return dummy->bottom;
}

// ITERATIVE flatten (no recursion)
Node* flatten(Node* root) {
    if (!root) return NULL;

    while (root->next) {
        Node* head1 = root;
        Node* head2 = root->next;
        Node* head3 = root->next->next;

        head1->next = NULL;
        head2->next = NULL;

        root = merge(head1, head2);
        root->next = head3;
    }
    return root;
}

// print using bottom pointer
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->bottom;
    }
    cout << endl;
}

int main() {
    // manually creating the linked list
    Node* head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);

    Node* result = flatten(head);
    printList(result);

    return 0;
}
