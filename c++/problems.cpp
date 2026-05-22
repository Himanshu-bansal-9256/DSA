#include <bits/stdc++.h>
using namespace std;
int main()
{

    // sqrt (x)
    // int num,i=0;
    // cin>>num;
    // while(i*i<=num)
    // {
    //     i++;
    // }
    // cout<<i-1;

    // PALINDROME
    // int num , rem, ans=0;
    // cin>>num;
    // if(num<0){
    //     cout<<"NOT PALINDROME";
    //     return 0;
    // }
    // while(num){
    //     rem = num%10;
    //     num/=10;
    //     if(ans>INT_MAX/10) {
    //         cout<<"NOT PALINDROME";
    //         return 0;
    //     }
    //     ans = rem + ans*10;
    // }
    // if(ans==num){
    //     cout<<"PALINDROME";
    // }
    // else{
    //     cout<<"NOT PALINDROME";
    // }
    // return 0;

    // int num, rem, ans=0,mul=1;
    // cin>>num;
    // if(num==0) return 1;
    // while(num){
    //     rem=num%2;
    //     if(rem==1)
    //         rem=0;
    //     else
    //         rem=1;
    //     num/=2;
    //     ans = ans+rem*mul;
    // }
    // cout<<ans;

    // ugly number
    int num;
    cin >> num;
    if (num <= 0)
    {
        cout << "not ugly number";
        return 0;
    }
    while (num % 2 == 0)
    {
        num /= 2;
    }
    while (num % 3 == 0)
    {
        num /= 3;
    }
    while (num % 5 == 0)
    {
        num /= 5;
    }
    if (num == 1)
    {
        cout << "ugly number";
    }
    else
    {
        cout << "not ugly number";
    }
}
