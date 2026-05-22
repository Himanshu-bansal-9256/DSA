#include<iostream>
using namespace std;

int main(){
    int arr[5] = {20, 30, 40, 50, 60};
    int *ptr = arr; // pointer variable ptr holds the address of first element of array arr
    // prints the address of first element 0 index
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl; 
    // cout<<arr+0<<endl;
    // cout<<ptr<<endl;

    // // print the addrees of second element or 1 index
    // cout<<&arr[1]<<endl;
    // cout<<arr+1<<endl;
    // cout<<ptr+1<<endl;
   
    // //print the value of first element or 0 index
    // cout<<arr[0]<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptr<<endl;

    // //saare address ko print karna 
    // for(int i = 0 ; i<5 ; i++){
    //     cout<<(arr+i)<<endl;
    // }

    //print all the values
    // for(int i = 0 ; i<5 ; i++){
    //     cout<<*(arr+i)<<endl;
    // }

    //print all the values using pointer variable
    // for(int i = 0 ; i<5 ; i++){
    //     cout<<ptr[i]<<endl;
    // }
    // //print all the addresses using pointer variable
    // for(int i = 0 ; i<5 ; i++){
    //     cout<<(ptr+i)<<endl;
    // }

    //arithematic opertaions ptr++ , ptr-- , ptr = ptr+1

    //print alll the values 
    // for(int i = 0 ; i < 5 ; i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }


    char name = 'a';
    cout<<&name<<endl; // it will print the string until it finds a null character
    char *ptr1 = &name;
    cout<<(void*)ptr1<<endl;// print the address
    cout<<(void*)&name<<endl;// print the address

    cout<<static_cast<void*>(&name)<<endl;// print the address using static cast
}