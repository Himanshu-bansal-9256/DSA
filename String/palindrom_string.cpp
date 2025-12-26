#include<iostream>
using namespace std;

int main(){
    string s = "naman";
    int start = 0 , end = s.size()-1;
    while(start<end){
        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{
            cout<<"Not Palindrome"<<endl;
            return 0;
        }

    }
    cout<<"Palindrome"<<endl;
}