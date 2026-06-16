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

class Solution {
public:
    vector<vector<int>> levelOrderBottom(Node* root) {
        vector<vector<int>> ans;
        if(root == NULL)
        return {};
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();
                level.push_back(temp->data);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            ans.push_back(level);
        }
        reverse(ans.begin(), ans.end());
        return ans;
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
    // tree creation code
    Solution s;
    vector<vector<int>> ans = s.levelOrderBottom(root);
    for (const auto& level : ans) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}