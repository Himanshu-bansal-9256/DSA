#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// 1st approach but this approach is not efficient because we are traversing the queue for every window and this will take O(n*k) time complexity
// int dispaly(queue<int> q){
//     while(!q.empty()){
//         if(q.front() < 0){
//             return q.front();
//         }
//         q.pop();
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {1, -3, 4, -2, 5, 3, -6, 7};
//     int n = 8;
//     int k = 3;

//     queue<int> q;
//     vector<int> ans;
//     for(int i = 0; i < k; i++){
//         q.push(arr[i]);
//     }
//     ans.push_back(dispaly(q));

//     for(int i = k; i < n; i++){
//         q.push(arr[i]);
//         q.pop();
//         ans.push_back(dispaly(q));
//     }

//     for(int i =0; i < ans.size(); i++){
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// 2nd approach is efficient because we are storing only the negative numbers in the queue and this will take O(n) time complexity
int main()
{
    int arr[] = {1, -3, 4, -2, 5, 3, -6, 7};
    int n = 8;
    int k = 3;

    queue<int> q;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    for (int i = k; i < n; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
        if (q.empty())
        {
            ans.push_back(0);
        }
        else
        {
            if (q.front() <= i - k)
            {
                q.pop();
            }
            if (q.empty())
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(arr[q.front()]);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}