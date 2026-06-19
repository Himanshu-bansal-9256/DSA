#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

// method 1 : using level order traversal
class Solution {
    void find(Node*root , int pos ,  int &l , int &r){
        if(!root) return ;
        l = min(l , pos);
        r = max(r , pos);
        
        find(root->left , pos-1 ,l ,r);
        find(root->right , pos+1 ,l ,r);
    }
  public:
    vector<int> topView(Node *root) {
        int l = 0;
        int r = 0;
        find(root,0,l,r);
        vector<int>ans(r-l+1);
        vector<bool>filled(r-l+1,0);
        
        queue<Node*>q;
        queue<int>index;
        q.push(root);
        index.push(-1*l);
        while(!q.empty()){
            Node*temp = q.front();
            q.pop();
            int pos = index.front();
            index.pop();
            
            if(!filled[pos]){
                filled[pos]=1;
                ans[pos] = temp->data;
            }
            if(temp->left){
                q.push(temp->left);
                index.push(pos-1);
            }
            if(temp->right){
                q.push(temp->right);
                index.push(pos+1);
            }
        }
        return ans;
    }
};


Node* binarytree(){
    int x;
    cin >> x;

    if(x == -1){
        return NULL;
    }

    Node* temp = new Node(x);

    cout << "enter the left child of " << temp->data << " : ";
    temp->left = binarytree();

    cout << "enter the right child of " << temp->data << " : ";
    temp->right = binarytree();

    return temp;
}

int main(){
    cout << "enter the root Node value : ";
    Node* root = binarytree();

    Solution s;
    vector<int> ans = s.topView(root);

    cout << "Top View of Binary Tree: ";
    for(int value : ans){
        cout << value << " ";
    }

    cout << endl;
    return 0;
}
