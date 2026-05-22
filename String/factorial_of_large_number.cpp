#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>factorial(int N){
vector<int>ans(1,1);
while(N>1){
    int carry = 0 , size= ans.size();
    for(int i = 0  ; i < size ; i++){
        int res = ans[i]*N +carry;
        carry = res /10;
        ans[i] = res %10;
    }
    while(carry){
        ans.push_back(carry%10);
        carry /=10;
    }
    N--;
}
reverse(ans.begin(),ans.end());
return ans;
}

int main() {
    int N;
    cin>>N;
    vector<int>result = factorial(N);
    for(int digit : result){
        cout<<digit;
    }
    return 0;
}
