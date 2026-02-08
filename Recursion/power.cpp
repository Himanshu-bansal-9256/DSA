#include<iostream>
using namespace std;

int power(int num , int n){
    if(n == 0){
        return 1;
    }   
    num = num*power(num,n-1);
    return num;
}
int main(){
   int num = 2;
   int n = 5;
   int result = power(num,n);
   cout<<result;
}