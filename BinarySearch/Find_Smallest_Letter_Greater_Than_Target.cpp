#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {

        int low = 0;
        int high = arr.size() - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(arr[mid] <= target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return arr[low % arr.size()];
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
