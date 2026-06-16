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

class Solution {
	bool parent(Node* root, int x, int y) {
		if (!root)
			return 0;
		
		if (root->left && root->right) {
			if (root->left->data == x && root->right->data == y)
				return 1;
			if (root->left->data == y && root->right->data == x)
				return 1;
		}
		return parent(root->left, x, y) || parent(root->right, x, y);
	}
	public:
	// Function to check if two nodes are cousins in a tree
	bool isCousins(Node* root, int x, int y) {
		if (x == y)
        return false;

		queue<Node*> q;
		q.push(root);
		
		int l1 = -1, l2 = -1;
		int level = 0;
		
		while (!q.empty()) {
			
			int size = q.size();
			
			while (size--) {
				
				Node* temp = q.front();
				q.pop();
				
				if (temp->data == x)
					l1 = level;
				
				if (temp->data == y)
					l2 = level;
				
				if (temp->left)
					q.push(temp->left);
				
				if (temp->right)
					q.push(temp->right);
			}
			
			if (l1 != l2)
				return false;
			
			if (l1 != -1)
				break;
			
			level++;
		}
		
		if (l1 == -1 || l2 == -1)
			return false;
		
		return !parent(root, x, y);
	}
};

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
    int x, y;
    cout << "Enter the two nodes to check if they are cousins: ";
    cin >> x >> y;

    Solution sol;
    if (sol.isCousins(root, x, y)) {
        cout << "The nodes " << x << " and " << y << " are cousins." << endl;
    } else {
        cout << "The nodes " << x << " and " << y << " are not cousins." << endl;
    }

    return 0;
}