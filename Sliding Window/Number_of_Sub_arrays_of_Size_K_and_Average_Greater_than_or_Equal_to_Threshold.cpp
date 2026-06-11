#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        double avg = 0;
        double sum = 0;
        int count =0;
        int left = 0 ;
        int right = 0;
        while(right<n){
            sum += arr[right];
            if(right-left+1==k){
                avg = sum/k;
                if(avg>=threshold){
                    count++;
                }
                sum -= arr[left];
                left++;
            }
            right++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {11, 13, 17, 23, 29, 31, 7, 5, 2, 3};
    int k = 3;
    int threshold = 5;
    int result = sol.numOfSubarrays(arr, k, threshold);
    cout << result << endl; // Output: 3
    return 0;
}