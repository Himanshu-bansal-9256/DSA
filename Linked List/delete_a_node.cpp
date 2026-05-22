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

    // delete a node at the first position
    // if(Head != NULL){
    //     Node*temp = Head;
    //     Head = Head->next;
    //     delete temp;
    // }
    // else{
    //     cout << "LL is empty, can't delete" << endl;
    // }


    // delete a node at end position

    // if(Head!= NULL){
    //     // only one node is present
    //     if(Head->next == NULL){
    //         Node*temp = Head;
    //         Head = NULL;
    //         delete temp;
    //     }

    //     // more than one node is present
    //     else{
    //         Node*current = Head;
    //         Node*previous = NULL;

    //         while(current->next != NULL){
    //             previous = current;
    //             current = current->next;
    //         }
    //         previous->next = current->next;
    //         delete current;
    //     }
    // }


    // delete a node at particular position
    // int x = 3;
    // if(Head!=NULL){
    //     //delete first node
    //     if(x == 1){
    //         Node*temp = Head;
    //         Head = Head->next;
    //         delete temp;
    //         return 0;
    //     }
    //     // more than one node is present
    //     Node*temp = Head;
    //     Node*previous = NULL;
    //     x--;
    //     while(x--){
    //         previous = temp;
    //         temp = temp->next;
    //     }
    //     previous->next = temp->next;
    //     delete temp;
    // }



    // delete node using the recursion at particular position
    int deleteAtPosition(Node* curr, int x){
        // base case
        if(curr == NULL){
            return curr;
        }
        if(x == 0){
            Node* temp = curr->next;
            delete temp;
            return curr;
        }
        // recursive case
        curr->next = deleteAtPosition(curr->next, x - 1);
        return curr;
    }

    // print the linked list
    while(Head != NULL){
        cout << Head->data << " ";
        Head = Head->next;
    }
}