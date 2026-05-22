#include<iostream>
using namespace std;

void swapping(int &p1 , int p2) 
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
int main(){
   int n = 10 ;
   int *p = &n;
    int **p2 = &p;
    int ***p3 = &p2;
    cout<<p<<endl; // address of n
    cout<<&p<<endl;
    cout<<p2<<endl; // address of n
    cout<<&p2<<endl; // address of n
    cout<<p3<<endl; // value of n 

    // value ko modify karna hai jo n me store hai
    *p = *p+5;
    cout<<n<<endl;
    return 0;

}