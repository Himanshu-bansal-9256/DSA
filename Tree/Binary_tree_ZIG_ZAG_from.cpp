#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(Node* root) {
        if (root == NULL)
            return {};

        stack<Node*> s1;
        stack<Node*> s2;

        vector<vector<int>> ans;

        s1.push(root);

        while (!s1.empty() || !s2.empty()) {
            if (!s1.empty()) {
                vector<int> level;
                while (!s1.empty()) {
                    Node* temp = s1.top();
                    s1.pop();

                    level.push_back(temp->data);

                    if (temp->left)
                        s2.push(temp->left);

                    if (temp->right)
                        s2.push(temp->right);
                }
                ans.push_back(level);
            }

            else {
                vector<int> level;
                while (!s2.empty()) {
                    Node* temp = s2.top();
                    s2.pop();

                    level.push_back(temp->data);

                    if (temp->right)
                        s1.push(temp->right);

                    if (temp->left)
                        s1.push(temp->left);
                }
                ans.push_back(level);
            }
        }
        return ans;
    }
};

Node *binarytree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "enter the left child of " << temp->data << " : ";
    temp->left = binarytree();
    cout << "enter the right child of " << temp->data << " : ";
    temp->right = binarytree();
    return temp;
}
int main()
{
    cout << "Enter the root node value : ";
    Node* root = binarytree();

    Solution sol;
    vector<vector<int>> result = sol.zigzagLevelOrder(root);

    cout << "Zigzag Level Order Traversal: " << endl;
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}