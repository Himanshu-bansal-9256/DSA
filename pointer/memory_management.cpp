#include<iostream>
using namespace std;

int main(){
   // variable ke liye heap memory create karo
    int *ptr1 = new int; // dynamic memory allocation
    *ptr1 = 5
    cout<< *ptr1 << endl;

    float *ptr2 = new float;
    *ptr2 = 3.14;
    cout<< *ptr2 << endl;

    int n ; 
    cout<<"Enter size of array: ";
    cin>>n;

    int *ptr3 = new int[n];
    
    //value assign karna
    for(int i=0; i<n; i++){
        ptr3[i] = i+1;
    }

    //print karna
    for(int i=0; i<n; i++){
        cout<< ptr3[i] << " ";
    }

    //delete keyword ka use karna
    delete ptr1; // single variable ke liye
    delete ptr2; // single variable ke liye
    delete[] ptr3; // array ke liye
}
