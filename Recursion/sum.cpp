#include<iostream>
using namespace std;

int fact(int num){
    if(num==1||num==0){
        return 1;
    }
    num = num+fact(num-1);
    return num;
}
int main(){
   int num = 5;
   int result = fact(num);
   cout<<result;
}