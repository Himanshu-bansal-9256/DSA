#include<bits/stdc++.h>
using namespace std;

int main()
{
    // next greater element in circular array
    vector<int> arr = {100,80,55,70,60,75,85};
     vector<int> ans(arr.size(), 1);
    stack<int> st;
    // for(int i = arr.size()-1  ; i >=0 ; i--){
    //     while(!st.empty() && arr[st.top()] < arr[i]){
    //         ans[st.top()] = st.top()-i;
    //         st.pop();
    //     }
    //     st.push(i); 
    // }
    // while(!st.empty()){
    //     ans[st.top()] = st.top()+1;
    //     st.pop();
    // }
    
    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    // return 0;
    for(int i =0 ; i < arr.size() ; i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = i + 1;
        }
        else{
            ans[i] = i - st.top();
        }
        st.push(i);
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
