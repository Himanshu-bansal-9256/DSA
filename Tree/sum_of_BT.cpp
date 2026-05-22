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

//  Method 2 – sum of Nodes Using recursion 
void sum(Node *root, int &total)
{
    if (root == NULL)
        return;

    total += root->data;
    sum(root->left, total);
    sum(root->right, total);
}

// Method 2 – sum of BT without using total variable
int sumNodes(Node *root)
{
    if (root == NULL)
        return 0;

    return (root->data + sumNodes(root->left) + sumNodes(root->right));
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
    int total = 0;
    sum(root, total);
    cout << "sum of all nodes in the tree is : " << total << endl;
    // Alternative method
    cout << "sum of all nodes in the tree is : " << sumNodes(root) << endl;
}
