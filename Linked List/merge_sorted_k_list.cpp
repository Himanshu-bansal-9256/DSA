#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// merge two sorted next linked lists
Node* merge(Node* head1, Node* head2) {
    Node* dummy = new Node(0);
    Node* tail = dummy;

    while (head1 && head2) {
        if (head1->data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
        tail->next = NULL;   
    }

    if (head1)
        tail->next = head1;
    else
        tail->next = head2;

    return dummy->next;
}
void mergesort(Node*arr[], int start , int end){
    if(start>=end) return;
    int mid = start + (end - start)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    arr[start] = merge(arr[start], arr[mid+1]);
}


// print using next pointer
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // List 1: 5 -> 7 -> 8 -> 30
    Node* l1 = new Node(5);
    l1->next = new Node(7);
    l1->next->next = new Node(8);
    l1->next->next->next = new Node(30);

    // List 2: 10 -> 20
    Node* l2 = new Node(10);
    l2->next = new Node(20);

    // List 3: 19 -> 22 -> 50
    Node* l3 = new Node(19);
    l3->next = new Node(22);
    l3->next->next = new Node(50);

    // List 4: 28 -> 35 -> 40 -> 45
    Node* l4 = new Node(28);
    l4->next = new Node(35);
    l4->next->next = new Node(40);
    l4->next->next->next = new Node(45);

    Node* arr[] = {l1, l2, l3, l4};
    int k = 4;

    mergesort(arr, 0, k - 1);

    Node* result = arr[0];
    printList(result);

    return 0;
}