#include<bits/stdc++.h>
using namespace std;

int main()
{
    // 1st method
    // vector<int> arr = {4, 5, 2, 25};
    // vector<int> ans;

    // for(int i = 0; i < arr.size(); i++){
    //     bool found = false;  

    //     for(int j = i + 1; j < arr.size(); j++){
    //         if(arr[j] > arr[i]){
    //             ans.push_back(arr[j]);
    //             found = true;
    //             break;
    //         }
    //     }

    //     if(!found){         
    //         ans.push_back(-1);
    //     }
    // }

    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    // 2nd method using stack
    vector<int> arr = {4, 5, 2, 25};
    vector<int> ans(arr.size(), -1);
    stack<int> st;
    for(int i = 0  ; i < arr.size() ; i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
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
