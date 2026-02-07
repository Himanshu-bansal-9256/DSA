#include<iostream>
using namespace std;

// n to 1 print
// void fun3(int n){
//     if(n==1) {
//         cout<<n;
//         return;
//     }
//     cout<<n<<endl;
//     fun3(n-1);
// }

// 1 to n print using two parameters
// void print(int num , int n){
//     if(num==n){
//         cout<<num;
//         return;
//     }
//     else{
//         cout<<num<<endl;
//         print(num+1,n);
//     }
// }

// 1 to n print using one parameter

void print(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main(){
    print(30);
}