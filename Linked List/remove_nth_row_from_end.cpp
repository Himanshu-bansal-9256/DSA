#include<iostream>
using namespace std;    

class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node*createLL(int arr[], int size, int index){
    // base case
    if(index == size){
        return NULL;
    }
    // recursive case
    Node*temp = new Node(arr[index]);
    temp->next = createLL(arr, size, index + 1);
    return temp;
}
int main(){
    Node*Head;
    Head = NULL;

    int arr[] = {10,20,30,40,50};
    
    Head = createLL(arr, 5, 0);

    // remove the nth node from the end of the linked list
    int k = 2;
    int count = 0 ;
    if(Head == NULL){
        return 0;
    }

    Node* temp = Head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    count= count-k;
    if(k==count){
        Node*newNode = Head;
        Head = Head->next;
        delete newNode;
        // print the linked list
        while(Head != NULL){
            cout<<Head->data<<" ";
            Head = Head->next;
        }
    }
    Node* current = Head;
    Node* prev = NULL;
    while(count--){
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    delete current;

    // print the linked list
    while(Head != NULL){
        cout << Head->data << " ";
        Head = Head->next;
    }
}