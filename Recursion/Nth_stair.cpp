#include<iostream>
using namespace std;

// int totalways(int num){
//     if(num <=1){
//         return 1;
//     }
//     int ans = totalways(num-1)+totalways(num-2);
//     return ans;
// }
int main(){
   int num;
   cin>>num;
   int first = 1;
   int second = 1;
   int totalways = 0;
   for(int  i = 2 ; i<= num ; i++){
    totalways = first +second;
    first = second;
    second = totalways;
   }
   cout << totalways;
}