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
    int arr[] = {10, 20, 30, 40, 50};

    Node* head = createLL(arr, 5, 0);

    vector<int> ans;
    Node* temp = head;
    while (temp != NULL) {
        ans.push_back(temp->data);
        temp = temp->next;
    }

    int i = ans.size() - 1;
    temp = head;
    while (temp != NULL) {
        temp->data = ans[i];
        i--;
        temp = temp->next;
    }
    // print the linked list
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}