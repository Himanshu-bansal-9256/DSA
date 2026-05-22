#include <bits/stdc++.h>
using namespace std;        
int main(){
 int arr[5]={8,7,11,4,2};
    int ans = INT_MAX;
    for(int i = 0;i<5;i++){
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout<<ans<<endl;
}