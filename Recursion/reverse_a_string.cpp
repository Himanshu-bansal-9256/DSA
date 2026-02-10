#include<iostream>
using namespace std;

// reverse a string
 void reverse(string &str , int start , int end){
    if(start>=end)
    return;
    swap(str[start], str[end]);
    reverse(str, start+1, end-1);
 }

int main(){
    string str;
    cin>>str;
    reverse(str, 0, str.length()-1);
    cout<<str;
}