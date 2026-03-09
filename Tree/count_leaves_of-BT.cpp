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

//  Method 2 – count the leaves of Nodes Using recursion
void countLeaves(Node *root, int &count)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        count++;
        return;
    }
    countLeaves(root->left, count);
    countLeaves(root->right, count);
}

// Method 2 – count the leaves of BT without using count variable
int countLeaves(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeaves(root->left) + countLeaves(root->right);
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
    countLeaves(root, count);
    cout << "total number of leaves in the tree is : " << count << endl;
    // Alternative method
    cout << "total number of leaves in the tree is : " << countLeaves(root) << endl;
}
