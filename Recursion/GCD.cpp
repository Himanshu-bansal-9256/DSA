#include<iostream>
using namespace std;

void GCD(int a , int b){
    if(b==0){
        return a;
    }
    int b1= a%b;
    a=b;
    b=b1;
    return GCD(a,b);
    
}
int main(){
   int a , b;
    cin>>a>>b;
   int result = GCD(a,b);
   cout<<result;
}