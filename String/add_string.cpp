#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string addstring(string num1, string num2){
    string result = "";
    int index1 = num1.size() -1 , index2 = num2.size()-1;
    int sum = 0 ; int carry = 0;
    while(index2 >=0){
        sum = num1[index1]-'0' + num2[index2] -'0' +carry;
        carry = sum /10;
        char c = '0' + (sum %10);
        result = c + result;
        index1--;
        index2--;
    }
    while(index1 >=0){
        sum = num1[index1]-'0' + carry;
        carry = sum /10;
        char c = '0' + (sum %10);
        result = c + result;
        index1--;
    }
    if(carry){
        result+='1';
    }
    // reverse(result.begin(), result.end());
    return result;
}


int main()
{
    string num1 , num2;
    cin >> num1 >> num2;
     if(num1.size()<num2.size())
        cout << addstring(num2,num1) << endl;
        else
        cout << addstring(num1,num2) << endl;
    return 0;
}