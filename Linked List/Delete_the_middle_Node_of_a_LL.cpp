#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* createLL(int arr[], int size, int index){

    // Base case
    if(index == size){
        return NULL;
    }

    // Recursive case
    Node* temp = new Node(arr[index]);

    temp->next = createLL(arr, size, index + 1);

    return temp;
}

// Delete middle node
Node* deleteMiddle(Node* head) {

    // If LL has 0 or 1 node
    if(head == NULL || head->next == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL){

        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // Delete middle node
    prev->next = slow->next;

    delete slow;

    return head;
}

int main(){

    int arr[] = {10,20,30,40,50};

    Node* Head = createLL(arr, 5, 0);

    cout << "Before deletion:\n";

    Node* temp = Head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Delete middle node
    Head = deleteMiddle(Head);

    cout << "After deletion:\n";

    temp = Head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}