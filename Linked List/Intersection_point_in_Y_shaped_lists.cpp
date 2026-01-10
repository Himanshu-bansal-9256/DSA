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

// function to find intersection point
Node* intersectPoint(Node* head1, Node* head2) {

    if (head1 == NULL || head2 == NULL)
        return NULL;

    // count length of list 1
    int len1 = 0;
    Node* temp1 = head1;
    while (temp1) {
        len1++;
        temp1 = temp1->next;
    }

    // count length of list 2
    int len2 = 0;
    Node* temp2 = head2;
    while (temp2) {
        len2++;
        temp2 = temp2->next;
    }

    // find difference
    int diff = abs(len1 - len2);

    Node* curr1 = head1;
    Node* curr2 = head2;

    // move pointer of longer list
    if (len1 > len2) {
        while (diff--) {
            curr1 = curr1->next;
        }
    } else {
        while (diff--) {
            curr2 = curr2->next;
        }
    }

    // move both pointers together
    while (curr1 && curr2) {
        if (curr1 == curr2) {
            return curr1;   // intersection found
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    return NULL; // no intersection
}

int main() {

    // common part
    Node* common = new Node(6);
    common->next = new Node(7);
    common->next->next = new Node(8);

    // first list: 1->2->3->6->7->8
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = common;

    // second list: 4->5->6->7->8
    Node* head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = common;

    Node* ans = intersectPoint(head1, head2);

    if (ans)
        cout << "Intersection Point: " << ans->data << endl;
    else
        cout << "No Intersection" << endl;

    return 0;
}
