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

//  Method 2 – Counting Nodes Using recursion 
void total(Node *root, int &count)
{
    if (root == NULL)
        return;

    count++;
    total(root->left, count);
    total(root->right, count);
}

// Method 2 – Counting Nodes Using Return Value
int totalNodes(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + totalNodes(root->left) + totalNodes(root->right);
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
    // tree creation code
    int count = 0;
    total(root, count);
    cout << "total number of nodes in the tree is : " << count << endl;
}
