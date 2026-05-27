#include<bits/stdc++.h>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int value) {
        val = value;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return NULL;
        }
        while(head && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* curr= head;
        ListNode* prev= nullptr;

        while(curr){
            if(curr->val!=val){
                prev = curr;
                curr= curr->next;

            }
            else{
                prev->next = curr->next;
                ListNode* deletenode = curr;
                curr= deletenode->next;
                delete deletenode;
            }
        }
        return head;
    }
};
int main(){
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    int val = 6;
    ListNode* result = sol.removeElements(head, val);

    // Print the modified linked list
    ListNode* temp = result;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}