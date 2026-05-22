#include<iostream>
using namespace std;

int feb(int num , int n){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    num = feb(num-1)+feb(num-2);
    return num;
}
int main(){
   int num = 2;
   int result = feb(num);
   cout<<result;
}