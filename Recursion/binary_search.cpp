#include<iostream>
using namespace std;

// linear search using recursion
bool linearSearch(int arr[], int index, int n, int key){
    if(index==n)
    return 0;
    if(arr[index]==key)
    return 1;
    return linearSearch(arr, index+1, n, key);
}

int main(){
    int arr[] = {2,3,6,7,1,5};
    int key;
    cin>>key;
    cout<<linearSearch(arr, 0 , 6, key);
}