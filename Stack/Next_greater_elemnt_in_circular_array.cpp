#include<bits/stdc++.h>
using namespace std;

int main()
{
    // next greater element in circular array
    vector<int> arr = {4, 5, 2, 25};
    vector<int> ans(arr.size(), -1);
    stack<int> st;
    for(int i = 0  ; i < 2*arr.size() ; i++){
        int idx = i % arr.size();
        while(!st.empty() && arr[st.top()] < arr[idx]){
            ans[st.top()] = arr[idx];
            st.pop();
        }
        st.push(idx); 
    }
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
