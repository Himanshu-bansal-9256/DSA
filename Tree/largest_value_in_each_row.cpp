#include <bits/stdc++.h>
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

// largest value in each row of a binary tree
 vector<int> largestValues(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<int> ans;
        if (root == NULL)
            return ans;
        while (!q.empty()) {
            int maxi = INT_MIN;
            int size = q.size();
            for (int i = 0; i < size; i++) {
                Node*temp = q.front();
                q.pop();
                maxi = max(maxi, temp->data);

                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
            ans.push_back(maxi);
        }
        return ans;
}

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
    cout << "enter the root Node value : ";
    Node *root = binarytree();
    vector<int> ans = largestValues(root);
    cout << "largest value in each row of the binary tree is : ";
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
}
