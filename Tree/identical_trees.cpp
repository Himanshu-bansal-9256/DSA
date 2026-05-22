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

// two trees are identical or not
bool isIdentical(Node* r1, Node* r2) {
        // code here
        if(r1==NULL && r2 == NULL)
        return 1;
    
        if((!r1 && r2)||(r1 && !r2)){
            return 0;
        }
        if(r1->data != r2->data)
        return 0;
        return isIdentical(r1->left , r2->left)&&isIdentical(r1->right , r2->right);
}


Node *binarytree1()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "enter the left child of " << temp->data << " : ";
    temp->left = binarytree1();
    cout << "enter the right child of " << temp->data << " : ";
    temp->right = binarytree1();
    return temp;
}

Node *binarytree2()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "enter the left child of " << temp->data << " : ";
    temp->left = binarytree2();
    cout << "enter the right child of " << temp->data << " : ";
    temp->right = binarytree2();
    return temp;
}

int main()
{
    cout << "enter the root Node value : ";
    Node *root1 = binarytree1();
    cout << "enter the root Node value for the second tree : ";
    Node *root2 = binarytree2();
    if (isIdentical(root1, root2))
    {
        cout << "The two trees are identical." << endl;
    }
    else
    {
        cout << "The two trees are not identical." << endl;
    }
    return 0;
}
