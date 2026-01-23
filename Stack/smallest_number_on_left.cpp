#include<bits/stdc++.h>
using namespace std;

int main()
{
    // smaller number on left
    vector<int> arr = {4, 13,11,5,9,7,8,6};
    vector<int> ans(arr.size(), -1);
    stack<int> st;
    for(int i = arr.size() - 1 ; i >= 0 ; i--){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i); 
    }
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
