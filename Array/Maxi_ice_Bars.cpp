#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        int count = 0;
        int sum = coins;
        sort(costs.begin(),costs.end());
        for(int i=0 ; i < n; i++){
            if(sum>=costs[i]){
                sum -=costs[i];
                count++;
            }
            if(sum==0){
                return count;
            }
        }
        if(sum!=0){
            return count;
        }
        return 0;
    }
};

int main() {
    Solution sol;
    vector<int> costs = {1, 3, 2, 4, 1};
    int coins = 7;
    cout << sol.maxIceCream(costs, coins) << endl;
    return 0;
}