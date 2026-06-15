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

// Average value in each row of a binary tree
class Solution
{
public:
    vector<double> averageOfLevels(Node *root)
    {
        vector<double> ans;
        if (root == NULL)
        {
            return ans;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            double sum = 0;
            int size = q.size();

            for (int i = 0; i < size; i++)
            {
                Node *temp = q.front();
                q.pop();
                sum += temp->data;

                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }

            ans.push_back(sum / size);
        }

        return ans;
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
    Solution solution;
    vector<double> ans = solution.averageOfLevels(root);

    cout << "average value in each row of the binary tree is : ";
    for (double val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
