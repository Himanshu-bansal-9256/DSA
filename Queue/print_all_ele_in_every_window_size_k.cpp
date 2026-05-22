#include<iostream>
#include<queue>
using namespace std;

void dispaly(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
   int arr[] = {1, 3, 4, 2, 5, 3, 6, 7};
   int n = 8;
    int k = 3;

    queue<int> q;
    for(int i = 0 ; i < k ; i++){
        q.push(arr[i]);

    }
    for(int i = k; i < n ; i++){
        q.push(arr[i]);
        dispaly(q);
        q.pop();
    }


}