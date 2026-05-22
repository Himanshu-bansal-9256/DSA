#include <bits/stdc++.h>
using namespace std;
// funvction to check prime number
//function declaration
// int  prime(int n){
//     //function definition
//     if(n<2) return 0;
//     for (int i =2;i<=n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// long long fact(int n) {
//     if (n == 0) return 1;
//     long long ans = 1;
//     for (int i = 1; i <= n; i++) {
//         ans = ans * i;
//     }
//     return ans;
// }

// same code previously
// void prime(int n){
//     //function definition
//     if(n<2) 
//     cout<<0<<endl;
//     return ;
//     for (int i = 2;i<n;i++){
//         if(n%i==0){
//             cout<<0<<endl;
//             return ;
//         }
//     }
//     cout<<1<<endl;
//     return ;
// }
// long long fact(int n) {
//     if (n == 0) return 1;
//     long long ans = 1;
//     for (int i = 1; i <= n; i++) {
//         ans = ans * i;
//     }
//     return ans;
// }

// int main(){
//  int num;
//  cin>>num;
//  //function call
//     prime(num);
//     cout<<fact(num);
// }


// pass by value 
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;    
// }

// pass by reference
// void swap(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp; 
// }

// int cube(int n){
//     return n*n*n;
// }   

// int reverse(int n){
//     int ans=0;
//     while(n){
//         int rem = n%10;
//         ans = ans*10 + rem;
//         n/=10;
//     }
//     return ans;
// }


// void putthreenumbers(int &a, int &b , int &c){
//     int d;
//     d=a;
//     a=c;
//     c=b;
//     b=d;
// }
// int main(){
//     int a1,a2,a3;
//     cin>>a1>>a2>>a3;
//     putthreenumbers(a1,a2,a3);
//     cout<<a1<<" "<<a2<<" "<<a3;
// }


//convert small letter into capital letter

// char convert(char n){
//     int ans;
//     ans = int(n)-32;
//     return ans;
// }
// int main(){
//     char name;
//     cin>>name;
//     cout<<convert(name);
// }


// armstrong numbers

// 



// count the number of zeors in a factorial of a number

long long countzero(int n){
    long long ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    } 
    int count=0;
    while(n){
        if(ans%10==0){
            count++;
            ans/=10;
        }
        else{
            break;
        }
    }
    return count;
}
int main()
{
    int num ;
    cin>>num;
    cout<<countzero(num);
}