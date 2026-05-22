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

vector<int> levelOrder(Node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }
    
    queue<Node*> q;
    q.push(root);
    
    Node* temp;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        
        if (temp->left != NULL) {
            q.push(temp->left);
        }
        
        if (temp->right != NULL) {
            q.push(temp->right);
        }
    }
    
    return ans;
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


    vector<int> levelOrderValues = levelOrder(root);
    cout << "Level Order Traversal: ";
    for (int val : levelOrderValues) {
        cout << val << " ";
    }
    cout << endl;
}

     