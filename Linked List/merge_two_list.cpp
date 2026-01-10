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

// meage two sorted linked lists using extra space
Node* mergesortedLLWithExtraaSpace(Node* head1, Node* head2){
    // base case
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;

    Node* head = NULL;
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1 && temp2){
        if(temp1->data <= temp2->data){
            Node* newNode = new Node(temp1->data);

            if(head == NULL){
                head = newNode;
            }
            else{
                Node* curr = head;
                while(curr->next){
                    curr = curr->next;
                }
                curr->next = newNode;
            }
            temp1 = temp1->next;   // ✅ missing movement
        }
        else{
            Node* newNode = new Node(temp2->data);

            if(head == NULL){
                head = newNode;
            }
            else{
                Node* curr = head;
                while(curr->next){
                    curr = curr->next;
                }
                curr->next = newNode;
            }
            temp2 = temp2->next;   // ✅ missing movement
        }
    }

    // ✅ remaining elements
    while(temp1){
        Node* newNode = new Node(temp1->data);
        Node* curr = head;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = newNode;
        temp1 = temp1->next;
    }

    while(temp2){
        Node* newNode = new Node(temp2->data);
        Node* curr = head;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = newNode;
        temp2 = temp2->next;
    }

    return head;
}


// merge two sorted linked lists without using extra space
// Node* mergeSortedLL(Node* head1, Node* head2){
//     Node* head = new Node(0);  
//     Node* tail = head;

//     while(head1 && head2){
//         if(head1->data <= head2->data){
//             tail->next = head1;
//             head1 = head1->next;
//         }
//         else{
//             tail->next = head2;
//             head2 = head2->next;
//         }
//         tail = tail->next;
//         tail->next = NULL;
//     }

//     if(head1){
//         tail->next = head1;
//     }
//     else{
//         tail->next = head2;
//     }

//     Node* result = head->next;
//     delete head;
//     return result;
// }

// print linked list
void printLL(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    int arr1[] = {10, 30, 50};
    int arr2[] = {20, 40, 60 ,80, 90};

    Node* head1 = createLL(arr1, 3, 0);
    Node* head2 = createLL(arr2, 5, 0);
    printLL(head1);
    printLL(head2);

    Node* mergedHead = mergesortedLLWithExtraaSpace(head1, head2);
    // Node* mergedHead1 = mergeSortedLL(head1, head2);
    printLL(mergedHead);

    return 0;
}
