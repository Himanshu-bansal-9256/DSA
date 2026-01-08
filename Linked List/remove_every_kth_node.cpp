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

    //remove every k-th node from the linked list using recursion
    int k=2;
    
    if(Head == NULL || k <= 0){
        return 0;
    }
    Node* curr = Head;
    Node* prev = NULL;
    int count = 1;
    while(curr != NULL){
        if(count==k){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;

        }
        else{
            prev = curr;
            curr = curr->next;
            count++;
        }
    }


    // print the linked list
    while(Head != NULL){
        cout << Head->data << " ";
        Head = Head->next;
    }
}