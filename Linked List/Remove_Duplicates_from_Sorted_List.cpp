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

// Delete duplicates
Node* deleteDuplicates(Node* head) {

    if(head == NULL){
        return head;
    }

    Node* temp = head;

    while(temp != NULL && temp->next != NULL){

        // Duplicate found
        if(temp->data == temp->next->data){

            Node* duplicate = temp->next;

            temp->next = temp->next->next;

            delete duplicate;
        }

        else{
            temp = temp->next;
        }
    }

    return head;
}

int main(){

    int arr[] = {10,10,20,30,30,40};

    Node* Head = createLL(arr, 6, 0);

    cout << "Before deleting duplicates:\n";

    Node* temp = Head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Delete duplicates
    Head = deleteDuplicates(Head);

    cout << "After deleting duplicates:\n";

    temp = Head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}