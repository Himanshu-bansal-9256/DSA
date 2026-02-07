#include<iostream>
using namespace std;

// priint even number from 1 to n using two parameters
// void print(int num , int n){
//     if(num>n)
//     return;

//     print(num+2,n);
//     cout<<num<<endl;
// }

// print even number from 1 to n using one parameter
void print(int num){
    if(num<2)
    return;
    print(num-2);
    cout<<num<<endl;
}
int main(){
    int n = 23;
    if(n%2==1)
    n--;
    print(n);
}