#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int x = 0;
    ptr = &x;
    int y = *ptr;
    *ptr = 1;
    cout<<x<<" "<<y<<endl;
}