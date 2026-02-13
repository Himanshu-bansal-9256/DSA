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
    
}

     