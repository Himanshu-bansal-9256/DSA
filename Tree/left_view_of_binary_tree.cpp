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

class Solution{
public:
    vector<int> leftView(Node* root){
        vector<int> ans;
        if(root == NULL){
            return ans;
        }

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();

            for(int i = 0; i < size; i++){
                Node* temp = q.front();
                q.pop();

                if(i == 0){
                    ans.push_back(temp->data);
                }

                if(temp->left != NULL){
                    q.push(temp->left);
                }

                if(temp->right != NULL){
                    q.push(temp->right);
                }
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
    vector<int> ans = s.leftView(root);

    cout << "Left View of Binary Tree: ";
    for(int value : ans){
        cout << value << " ";
    }

    cout << endl;
    return 0;
}
