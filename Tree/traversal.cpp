#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ; 
    Node *left , *right;
    Node(int value){
        data = value ;
        left = right = NULL;
    }
};

void PreOrder(Node *root){
    if(root==NULL)
    return;

    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node *root){
    if(root==NULL)
    return;

    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
}

void PostOrder(Node *root){
    if(root==NULL)
    return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
}

Node* binarytree(){
    int x ;
    cin>>x;
    if(x == -1){
        return NULL;
    }
    Node * temp = new Node(x);
    cout<<"enter the left child of "<<temp->data<<" : ";
    temp->left = binarytree();
    cout<<"enter the right child of "<<temp->data<<" : ";
    temp->right = binarytree();
    return temp;
}

int main(){
    cout<< "enter the root Node value : ";
    Node* root = binarytree();
    // tree creation code 

    // preorder print 
    cout<<"\n Pre Order ";
    PreOrder(root);

    // inorder print
    cout<<"\n In Order";
    InOrder(root);

    // postorder print
    cout<<"\n Post Order";
    PostOrder(root);

    
}

     