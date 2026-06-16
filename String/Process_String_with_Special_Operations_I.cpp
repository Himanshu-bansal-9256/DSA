#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string processStr(string s) {
        int n = s.size();
        string s1 = "";
        for(int i = 0 ; i < n ; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s1 += s[i];
            }
            else if(s[i]=='#'){
                s1 += s1;
            }
            else if(s[i]=='%'){
                reverse(s1.begin(),s1.end());
            }
            else if(s[i]=='*'){
                if(!s1.empty()) s1.pop_back();
            }
        }
        return s1;
    }
};

int main(){
    string s;
    cout<<"enter the string : ";
    cin>>s;
    Solution sol;
    string ans = sol.processStr(s);
    cout<<"processed string is : "<<ans<<endl;
    return 0;
}