#include<iostream>
#include<stack>
using namespace std;

int main(){
    // reverse an array using stack
    stack<int> St;
    int arr[] = {1,2,3,4,5};
    for(int i = 0 ; i<5; i++){
        St.push(arr[i]);
    }
    for(int i = 0 ; i < 5; i++){
        arr[i] = St.top();
        St.pop();
    }
    for(int i = 0 ; i < 5 ; i++){

        cout << arr[i] << " ";
    }
    



    return 0;
}