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
int main(){
    Node*head;
    head = NULL; 

    int arr[] = {10,20,30,40,50};
    
    // insert the node at beginning
    
    // ll dosesnt ext
    for(int i = 0  ;  i < 5 ; i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }
    // ll exists
        else
        {
            Node*temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }

    // print the ll
    Node *temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    };
    

}