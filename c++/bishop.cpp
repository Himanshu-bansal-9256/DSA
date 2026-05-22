#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count = 0 ;
     count += min(8-a,8-b);
     count += min(a-1,8-b);
     count +=min(8-a,b-1);
     count +=min(a-1,b-1);
     cout<<count;
}