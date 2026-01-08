#include<iostream>
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
    if(index == size){
        return NULL;
    }
    Node* temp = new Node(arr[index]);
    temp->next = createLL(arr, size, index + 1);
    return temp;
}

int main(){
    Node* Head = NULL;

    int arr[] = {10,20,30,40,50};
    Head = createLL(arr, 5, 0);

    // -------- WITHOUT EXTRA SPACE PALINDROME --------

    // count nodes
    int count = 0;
    Node* temp = Head;
    while(temp){
        count++;
        temp = temp->next;
    }

    // move to middle
    int mid = count / 2;
    Node* curr = Head;
    Node* prev = NULL;

    while(mid--){
        prev = curr;
        curr = curr->next;
    }

    // split list
    prev->next = NULL;

    // reverse second half
    Node* nextNode = NULL;
    Node* rev = NULL;

    while(curr){
        nextNode = curr->next;
        curr->next = rev;
        rev = curr;
        curr = nextNode;
    }

    // compare both halves
    Node* first = Head;
    Node* second = rev;
    bool isPal = true;

    while(first && second){
        if(first->data != second->data){
            isPal = false;
            break;
        }
        first = first->next;
        second = second->next;
    }

    if(isPal)
        cout << "true\n";
    else
        cout << "false\n";
}
