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
    Node*Head;
    Head = NULL;
    Node*Tail;
    Tail = NULL; 

    int arr[] = {10,20,30,40,50};
    
    // insert the node at end
    
    // ll dosesnt ext
    for(int i = 0  ;  i < 5 ; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
            Tail = Head;
        }
    // ll exists
        else
        {
           Tail->next = new Node(arr[i]);
           Tail = Tail->next;
        }
    }

    // print the ll
    Node *temp = Head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    };
}