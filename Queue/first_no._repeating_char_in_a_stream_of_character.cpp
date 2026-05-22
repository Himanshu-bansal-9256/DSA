#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    vector<char> ans;
    string B = "";
    queue<char> q;
    vector<int> repeat(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        if (repeat[str[i] - 'a'] >= 1)
        {
            repeat[str[i] - 'a']++;

            while (!q.empty() && repeat[q.front() - 'a'] > 1)
            {
                q.pop();
            }

            if (q.empty())
                B += '#';
            else
                B += q.front();
        }
        else
        {
            repeat[str[i] - 'a']++;
            q.push(str[i]);

            while (!q.empty() && repeat[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            B += q.front();
        }
    }

    cout << B;
    return 0;
}