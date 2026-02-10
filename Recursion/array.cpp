#include<iostream>
using namespace std;

// using when our index will start from the last element of the array and we will decrease the index by 1 in each recursive call
void print(int arr[], int index){
    if(index==-1)
    return;
    print(arr, index-1);
    cout<<arr[index]<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    print(arr, 9);
}