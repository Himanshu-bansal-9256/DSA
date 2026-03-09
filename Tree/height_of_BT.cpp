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

// Method 1 – height of BT without using height variable
int height (Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    return (1 + max(height(root->left), height(root->right)));
}

// Method 2 – height of BT using height variable
void height(Node* root , int count , int &ans){
    if(root==NULL){
        return;
    }
    ans = max(ans, count);
    height(root->left , count+1 , ans);
    height(root->right , count+1 , ans);
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
    cout << "height of the tree is : " << height(root) << endl;
    // Alternative method
    int ans = 0;
    int count = 0;
    height(root , count , ans);
    cout << "height of the tree is : " << ans << endl;
}
