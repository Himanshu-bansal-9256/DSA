#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *createLL(int arr[], int size, int index)
{
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createLL(arr, size, index + 1);
    return temp;
}

Node* addTwoNumbers(Node* head1, Node* head2) {
// add two numbers 
    Node * curr = head1 ;
        Node * prev = NULL ;
        Node* fut = NULL;
        while(curr){
            fut = curr->next;
            curr->next= prev;
            prev = curr;
            curr = fut;
        }
        head1 = prev;
        
        Node * curr1 = head2 ;
        Node * prev1 = NULL ;
        Node* fut1 = NULL;
        while(curr1){
            fut1 = curr1->next;
            curr1->next= prev1;
            prev1 = curr1;
            curr1 = fut1;
        }
        head2 = prev1;
        curr = prev;
        curr1 = prev1;
        
        Node* head3 = new Node(0);
        Node* tail = head3;
        int sum = 0;
        int carry = 0;
        while(curr &&curr1){
            int total = curr->data + curr1->data + carry;
            sum = total % 10;
            carry = total / 10;
            tail->next = new Node(sum);
            tail = tail->next;
            curr = curr->next;
            curr1 = curr1->next;
        }
        
        while(curr){
            int total = curr->data + carry;
            sum = total % 10;
            carry = total / 10;
            tail->next = new Node(sum);
            tail = tail->next;
            curr = curr->next;
        }
        while(curr1){
            int total = curr1->data + carry;
            sum = total % 10;
            carry = total / 10;
            tail->next = new Node(sum);
            tail = tail->next;
            curr1= curr1->next;
        }
        if(carry){
            tail->next = new Node(carry);
        }
        tail = head3->next;
        delete head3;
        
        // reverse the sum list 
        
        Node * curr2 = tail ;
        Node * prev2 = NULL ;
        Node* fut2 = NULL;
        while(curr2){
            fut2 = curr2->next;
            curr2->next= prev2;
            prev2 = curr2;
            curr2 = fut2;
        }
        tail = prev2;
        
        // edge cases
        
        while(tail &&tail->data==0 && tail->next)
        tail = tail->next;
        
        if(head1==NULL && head2 == NULL){
            return NULL;
        }
        
        return tail;
}


int main()
{
    int arr1[] = {1, 2, 3,5};   
    int arr2[] = {9, 9};      

    Node* head1 = createLL(arr1, 4, 0);
    Node* head2 = createLL(arr2, 2, 0);
    Node* result = addTwoNumbers(head1, head2);

    // print the linked list
    Node*temp = result;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

