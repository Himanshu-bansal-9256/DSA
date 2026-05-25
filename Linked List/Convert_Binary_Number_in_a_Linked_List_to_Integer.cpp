#include<bits/stdc++.h>
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
int getDecimalValue(Node* head) {
        int ans = 0 ;
        Node * temp = head;
        while(temp){
            ans = ans*2 + temp->data;
            temp = temp->next;
        }
        return ans;
}
int main(){
    int arr[] = {1,0,1};
    Node* head = createLL(arr, 3, 0);
    cout << getDecimalValue(head);
}