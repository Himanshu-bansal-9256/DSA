#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int gvalue = 0;
        int svalue = 0;

        while(gvalue<g.size() && svalue<s.size()){
            if(g[gvalue]<=s[svalue]){
                gvalue++;
            }
            svalue++;
        }
        return gvalue;
    }
};

int main() {
    Solution sol;
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};
    cout << sol.findContentChildren(g, s) << endl;
    return 0;
}