#include<bits/stdc++.h>
using namespace std;


// method 1


// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int n = fruits.size();
//         int l = 0;
//         int r = 0;
//         int maxlen = 0;
//         unordered_map<int, int> mpp;

//         while(r<n){
//             mpp[fruits[r]]++;


//             while(mpp.size()>2){
//                 mpp[fruits[l]]--;
//                 if(mpp[fruits[l]]==0){
//                     mpp.erase(fruits[l]);
//                 }
//                 l++;
//             }
//             if(mpp.size()<=2){
//                 maxlen = max(maxlen, r-l+1);
//             }
//             r++;
//         }
//         return maxlen;
//     }
// };

// method 2

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0;
        int r = 0;
        int maxlen = 0;
        unordered_map<int, int> mpp;

        while(r<n){
            mpp[fruits[r]]++;


            if(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            if(mpp.size()<=2){
                maxlen = max(maxlen, r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};


int main(){
    Solution sol;
    vector<int> fruits = {1, 2, 1};
    int result = sol.totalFruit(fruits);
    cout << "Total fruits in baskets: " << result << endl;
    return 0;
}