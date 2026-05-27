#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   int numberOfSpecialChars(string word) {
        int n = word.length();
        int count =0;
        set<char> lower;
        set<char> upper;
        for(int i = 0 ; i < n ; i++){
            if(word[i] >= 'a' && word[i] <= 'z') {
                lower.insert(word[i]);
            }
            else if(word[i] >= 'A' && word[i] <= 'Z'){
                upper.insert(word[i]);
            }
        }
        for(char ch : lower){
            if(upper.count(toupper(ch)))
                count++;
        }
        return count;

    }
};
int main() {
    Solution sol;
    string word = "aAbBcC";
    cout << sol.numberOfSpecialChars(word) << endl; // Output: 3
    return 0;
}