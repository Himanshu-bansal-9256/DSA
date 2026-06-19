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

// class Solution{
// public:
//     vector<int> rightView(Node* root){
//         vector<int> ans;
//         if(root == NULL){
//             return ans;
//         }

//         queue<Node*> q;
//         q.push(root);

//         while(!q.empty()){
//             int size = q.size();

//             for(int i = 0; i < size; i++){
//                 Node* temp = q.front();
//                 q.pop();

//                 if(i == 0){
//                     ans.push_back(temp->data);
//                 }

//                 if(temp->right != NULL){
//                     q.push(temp->right);
//                 }
//                 if(temp->left != NULL){
//                     q.push(temp->left);
//                 }

//             }
//         }

//         return ans;
//     }
// };
// method 2 : using recursion

class Solution {
    void Rview(Node*root , int level , vector<int>&ans){
        if(!root){
            return;
        }
        if(level == ans.size())
        ans.push_back(root->data);
        Rview(root->right , level+1 , ans);
        Rview(root->left , level+1 , ans);
    }
	public:
	vector<int> rightView(Node* root) {
		vector<int> ans;
		
		if (!root)
			return ans;
		Rview(root, 0 , ans);
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
    vector<int> ans = s.rightView(root);

    cout << "Right View of Binary Tree: ";
    for(int value : ans){
        cout << value << " ";
    }

    cout << endl;
    return 0;
}
