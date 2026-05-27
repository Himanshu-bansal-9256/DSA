#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // Find the middle using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;

        // recursive sort
        ListNode* left = sortList(head);
        ListNode* right = sortList(second);

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (left && right) {
            if (left->val <= right->val) {
                tail->next = left;
                left = left->next;
                tail = tail->next;
            } else {
                tail->next = right;
                right = right->next;
                tail = tail->next;
            }
        }
        if (left) {
            tail->next = left;
        } else {
            tail->next = right;
        }
        head = dummy->next;
        delete dummy;

        return head;
    }
};

int main() {
    // Example usage
    Solution sol;
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    head = sol.sortList(head);

    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}


