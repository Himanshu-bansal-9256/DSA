#include<iostream>
using namespace std;
int main(){
    //print i to n num 
    // int i =1, n;
    // cin>>n;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i++;
    // }

// print factor of a number
    // int i =1, n;
    // cin>>n;
    // while(i<=n){
    //     if(n%i==0)
    //     cout<<i<<" ";
    //     i++;
    // }

    // print tabel 
    // int i =1, n;
    // cin>>n;
    // while(i<=n){
    //     cout<<n*i<<" ";
    //     i++;
    // }


    // print 1 to n using continnue statement 
    int i =1, n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i%4==0)
        {
            continue;
        }
        cout<<i<<" ";
        
    }
    
}