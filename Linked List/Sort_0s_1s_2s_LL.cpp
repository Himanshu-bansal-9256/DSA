#include<iostream>
#include<vector>
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
int main() {
    int arr[] = {0, 2, 1, 2, 0, 1};


    Node* head = createLL(arr, 6, 0);
    // 1 st meethod
    //  int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    //     Node* curr = head;

    //     // Count 0s, 1s, 2s
    //     while (curr) {
    //         if (curr->data == 0) cnt0++;
    //         else if (curr->data == 1) cnt1++;
    //         else cnt2++;
    //         curr = curr->next;
    //     }

    //     curr = head;
    //     while (cnt0--) {
    //         curr->data = 0;
    //         curr = curr->next;
    //     }
    //     while (cnt1--) {
    //         curr->data = 1;
    //         curr = curr->next;
    //     }
    //     while (cnt2--) {
    //         curr->data = 2;
    //         curr = curr->next;
    //     };


    // 2nd method (creating separate lists for 0s, 1s and 2s and then merging them)
    Node* head0 = new Node(0);
    Node* head1 = new Node(0);
    Node* head2 = new Node(0);
    Node* tail0 = head0;
    Node* tail1 = head1;
    Node* tail2 = head2;

    Node* curr = head;
    while(curr){
        if(curr->data ==0){
            tail0->next = curr;
            tail0 = tail0->next;
        }
        else if(curr->data ==1){
            tail1->next = curr;
            tail1 = tail1->next;
        }
        else{
            tail2->next = curr;
            tail2 = tail2->next;
        }
        curr = curr->next;
    }
    // merge the three lists
    // if list1 is not empty
    if(head1->next!=NULL){
        tail0->next = head1->next;
    }
    else{
        tail0->next = head2->next;
    }
    tail1->next = head2->next;
    tail2->next = NULL;
    head = head0->next;

     // delete dummy nodes
    delete head0;
    delete head1;
    delete head2;

    // print the linked list
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}