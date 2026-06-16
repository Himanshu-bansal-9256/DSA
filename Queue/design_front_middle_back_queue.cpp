#include <iostream>
#include <vector>
using namespace std;

class FrontMiddleBackQueue {
    vector<int>q;
public:
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        q.insert(q.begin(),val);
    }
    
    void pushMiddle(int val) {
        int mid = (q.size())/2;
        q.insert(q.begin()+mid,val);
    }
    
    void pushBack(int val) {
        q.push_back(val);
    }
    
    int popFront() {
        if (q.empty()) return -1;
        int a = q[0];
        q.erase(q.begin());
        return a;
    }
    
    int popMiddle() {
        if (q.empty()) return -1;
        int mid = (q.size()-1)/2;
        int a = q[mid];
        q.erase(q.begin()+mid);
        return a;
    }
    
    int popBack() {
        if (q.empty()) return -1;
        int a = q.back();
        q.pop_back();
        return a;
    }
};

int main()
{
    FrontMiddleBackQueue *obj = new FrontMiddleBackQueue();
    obj->pushFront(1);
    obj->pushBack(2);
    obj->pushMiddle(3);
    obj->pushMiddle(4);
    cout<<obj->popFront()<<endl;
    cout<<obj->popMiddle()<<endl;
    cout<<obj->popMiddle()<<endl;
    cout<<obj->popBack()<<endl;
    cout<<obj->popFront()<<endl;
}
