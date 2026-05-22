#include<iostream>
using namespace std;

// lower to upper case
void lowerToUpper(string &str, int index){
    if(index==-1)
    return;
    str[index] = 'A' +str[index] - 'a';
    lowerToUpper(str, index-1);
}

int main(){
    string str;
    cin>>str;
    lowerToUpper(str, str.length()-1);
    cout<<str;
}