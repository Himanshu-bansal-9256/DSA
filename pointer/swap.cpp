#include<iostream>
using namespace std;

// pass by pointer

// void swapping(int *p1 , int *p2)  
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }
// int main(){
//    int a = 10;
//    int b = 20;
//     cout<<"Before swapping "<<endl;
//    cout<<"a: "<<a<<endl; 
//    cout<<"b: "<<b<<endl;
//    swapping(&a, &b); 
//    cout<<"After swapping "<<endl;
//    cout<<"a: "<<a<<endl; // should print 20 
//    cout<<"b: "<<b<<endl; // should print 10
//     return 0;
// }


//  pass by value  

// void swapping(int p1 , int p2) 
// {
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;
// }
// int main(){
//    int a = 10;
//    int b = 20;
//     cout<<"Before swapping "<<endl;
//    cout<<"a: "<<a<<endl; 
//    cout<<"b: "<<b<<endl;
//    swapping(a, b); 
//    cout<<"After swapping "<<endl;
//    cout<<"a: "<<a<<endl; // should print 20 
//    cout<<"b: "<<b<<endl; // should print 10
//     return 0;
// }


// pass by refernece

void swapping(int &p1 , int p2) 
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
int main(){
   int a = 10;
   int b = 20;
    cout<<"Before swapping "<<endl;
   cout<<"a: "<<a<<endl; 
   cout<<"b: "<<b<<endl;
   swapping(a, b); 
   cout<<"After swapping "<<endl;
   cout<<"a: "<<a<<endl; // should print 20 
   cout<<"b: "<<b<<endl; // should print 10
    return 0;
}