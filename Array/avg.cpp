#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[18];
    for(int i = 0 ; i<18;i++){
        cin>>arr[i];
    }
    int sum = 0 ;
    for(int i  = 0 ; i < 18; i ++){
        sum = sum+arr[i];
    }
    cout<<sum<<endl;
    float avg = sum/18;
    cout<<avg;
}