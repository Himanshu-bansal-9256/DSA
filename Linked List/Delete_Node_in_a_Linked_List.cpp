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

// Delete node when only that node is given
void deleteNode(Node* node) {
    node->data = node->next->data;
    node->next = node->next->next;
}

int main(){

    int arr[] = {10,20,30,40,50};

    Node* head = createLL(arr, 5, 0);

    // Find node 30
    Node* temp = head;

    while(temp->data != 30){
        temp = temp->next;
    }

    // Delete node 30
    deleteNode(temp);

    // Print LL
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}