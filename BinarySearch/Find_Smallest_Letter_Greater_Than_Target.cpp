#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // char nextGreatestLetter(vector<char>& arr, char target) {
    //     // binary search method 
    //     int low = 0;
    //     int high = arr.size() - 1;

    //     while(low <= high) {

    //         int mid = low + (high - low) / 2;

    //         if(arr[mid] <= target)
    //             low = mid + 1;
    //         else
    //             high = mid - 1;
    //     }

    //     return arr[low % arr.size()];
    // }

    // using vector method
    char nextGreatestLetter(vector<char>& arr, char target) {
        vector<int>v1;
        for(int i = 0 ; i < arr.size(); i++){
            v1.push_back(arr[i]-target);
        }
        int index = -1;

        for(int i = 0 ; i <v1.size();i++){
            if(v1[i]>0){
                index = i;
                break;
            }
        }
        if(index == -1)
        return arr[0];

        return arr[index];
    }
};
int main() {
    Solution sol;
    vector<char> arr = {'c', 'f', 'j'};
    char target = 'a';
    char result = sol.nextGreatestLetter(arr, target);
    
    cout << "Next greatest letter: " << result << endl;
    
    return 0;
}
