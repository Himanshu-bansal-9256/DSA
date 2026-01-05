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

Node*createLL(int arr[], int size, int index, Node* prev){
    // base case
    if(index == size){
        return prev;
    }

    // recursive case
    Node*temp = new Node(arr[index]);
    temp->next = prev;
    return createLL(arr, size, index + 1, temp);


}
int main(){
    Node*Head;
    Head = NULL;

    int arr[] = {10,20,30,40,50};
    
    Head = createLL(arr, 5, 0, Head);

    // print the ll
    Node *temp = Head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    };
}