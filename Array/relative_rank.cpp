#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> scoreCopy(n);
        unordered_map<int, int> scoreToIndex;

        // for (int i = 0; i < n; i++) {
        //     scoreCopy.push_back(score[i]);
        // }

        // we should copy the array using copy redefind function
        copy(score.begin(),score.end(),scoreCopy.begin());
        for (int i = 0; i < n; i++) {
            scoreToIndex[scoreCopy[i]] = i;
        }

        // sort this array in desending order
        sort(scoreCopy.begin(), scoreCopy.end(), greater<int>());

        // assign the rank
        vector<string> ans(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                ans[scoreToIndex[scoreCopy[i]]] = "Gold Medal";
            } else if (i == 1) {
                ans[scoreToIndex[scoreCopy[i]]] = "Silver Medal";
            } else if (i == 2) {
                ans[scoreToIndex[scoreCopy[i]]] = "Bronze Medal";
            } else {
                ans[scoreToIndex[scoreCopy[i]]] = to_string(i + 1);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> scores = {10, 3, 8, 9, 4};
    vector<string> ranks = sol.findRelativeRanks(scores);
    
    for (const string& rank : ranks) {
        cout << rank << " ";
    }
    cout << endl;
    
    return 0;
}