#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // Print and remove all elements from the queue
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    // return 0;

    // print and keep all elements in the queue

    int n = q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
    cout<<"size of the queue after printing the elements " << q.size();
}