#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* duplicate = curr->next;
            bool flag = false;

            while (duplicate != nullptr && duplicate->val == curr->val) {
                duplicate = duplicate->next;
                flag = true;
            }

            if (flag) {
                if (prev == nullptr) {
                    head = duplicate;
                } 
                else {
                    prev->next = duplicate;
                }

                curr = duplicate;
            } 
            else {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n == 0) {
        cout << "List is empty" << endl;
        return 0;
    }

    int val;
    cout << "Enter values in sorted order: ";

    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> val;
        tail->next = new ListNode(val);
        tail = tail->next;
    }

    cout << "Original List: ";
    ListNode* temp = head;

    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    ListNode* result = sol.deleteDuplicates(head);

    cout << "After Removing Duplicates: ";

    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }

    cout << endl;

    return 0;
}