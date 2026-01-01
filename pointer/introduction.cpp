#include<iostream>
using namespace std;

int main(){
    int a = 20 ; 
    cout<<&a<<endl; // prints the address of variable a
    int *ptr = &a; // pointer variable ptr holds the address of variable a
    cout<<ptr<<endl; // prints the address stored in pointer variable ptr
    cout<<*ptr<<endl; // dereferencing pointer variable ptr to get the value of variable a

    float b = 5.5;
    float *ptr1 = &b; // pointer variable ptr1 holds the address of variable b
    cout<<ptr1<<endl; // prints the address stored in pointer variable ptr1
    cout<<*ptr1<<endl; // dereferencing pointer variable ptr1 to get the value of variable b

    //size of ptr
    cout<<sizeof(ptr)<<endl; // prints the size of pointer variable ptr
    cout<<sizeof(ptr1)<<endl; // prints the size of pointer variable ptr1

    return 0;
}