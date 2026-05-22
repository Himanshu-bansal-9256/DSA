#include <bits/stdc++.h>
using namespace std;
int main()
{
    // asteroid collision
    vector<int> asteroids = {3, 5, -2, -6, 4, -1};
    stack<int> st;
    for(int i = 0 ; i < n;i++){
        int curr = asteroids[i];
        if(curr > 0){
            st.push(curr);
        }
        else{
            while(!st.empty() && st.top() > 0 && st.top() < abs(curr)){
                st.pop();
            }
            if(!st.empty() && st.top() == abs(curr)){
                st.pop();
            }
            else if(st.empty() || st.top() < 0){
                st.push(curr);
            }
        }
    }

    return 0;
}
