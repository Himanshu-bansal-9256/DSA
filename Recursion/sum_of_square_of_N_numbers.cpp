#include<iostream>
using namespace std;

int sqsum(int num){
    if(num == 1){
        return 1;
    }   
    num = (num*num)+sqsum(num-1);
    return num;
}
int main(){
   int num = 1;
   int result = sqsum(num);
   cout<<result;
}