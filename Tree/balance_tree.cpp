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


// balance tree
int height(Node* root , int &valid){
        if(!root)
            return 0;
        
        int l = height(root->left , valid);
        int r = height(root->right , valid);
        
        if(abs(l - r) > 1){
            valid = 0;
        }
        
        return 1 + max(l, r);
    }

    bool isBalanced(Node* root) {
        int valid = 1;
        height(root, valid);
        return valid;
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
    cout << "Enter the root node value : ";
    Node* root = binarytree();

    
    if(isBalanced(root))
        cout << "The tree is balanced." << endl;
    else
        cout << "The tree is not balanced." << endl;

    return 0;
}
