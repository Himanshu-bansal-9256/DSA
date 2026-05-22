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

    // rotate the linked list by k nodes
    int k = 2;
    if(Head == NULL || k == 0){
        return Head;
    }
    int count = 0 ;
    Node* temp = Head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    k = k % count;
    if(k == 0){
        return Head;
    }
    count-=k;
    Node* current = Head;
    Node* prev = NULL;
    while(count--){
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    Node* newNode = current;
    while(newNode->next != NULL){
        newNode = newNode->next;
        
    }
    newNode->next = Head;
    Head = current;
    // print the linked list
    while(Head != NULL){
        cout << Head->data << " ";
        Head = Head->next;
    }
}