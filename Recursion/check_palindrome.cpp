#include<iostream>
using namespace std;

// check palindrome or not
bool check(string str, int start, int end){
    if(start>=end)
    return 1;
    if(str[start]!=str[end])
    return 0;
    return check(str, start+1, end-1);
}

int main(){
    string str;
    cin>>str;
    cout<<check(str,0,str.length()-1);
}