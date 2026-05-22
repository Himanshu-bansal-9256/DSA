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

// mirror tree
void mirror(Node* root) {
        if(root == NULL)
            return;
        swap(root->left , root->right);
        mirror(root->left);
        mirror(root->right);
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

// preorder traversal to print tree
void preorder(Node* root)
{
    if(root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    cout << "Enter the root node value : ";

    Node* root = binarytree();

    mirror(root);

    cout << "\nMirror Tree (Preorder Traversal): ";
    preorder(root);

    return 0;
}
