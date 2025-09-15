#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int ans=0,mul=1,rem;
    while(num>0){
        rem = num%10;
        num/=10;

        ans = rem*mul+ans;

        mul*=2;
    }
    cout<<ans<<endl;
}