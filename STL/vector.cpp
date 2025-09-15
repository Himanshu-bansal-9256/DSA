#include<bits/stdc++.h>
using namespace std;
int main(){
    // create vector , declare
    // vector<int> v;
    // // initialize vector
    // vector<int> v1(5,1); // 5 size and all element 1
    // vector<int> v2{1,2,3,4,5}; // list initialization
    // // insert element
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // // size and capacity
    // cout<<v.size()<<endl; // size
    // cout<<v.capacity()<<endl; // capacity
    // // update element
    // v[2] = 10;
    // // print element
    // for(int i=0;i<v.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    // pop element

    // vector<int> vnew;
    // vnew.push_back(1);
    // vnew.push_back(2);
    // vnew.push_back(3);
    // vnew.push_back(4);
    // vnew.push_back(5);
    // vnew.pop_back();
    // cout<<vnew.size()<<endl;
    // cout<<vnew.capacity()<<endl;

    // vnew.erase(vnew.begin()+1); // erase element at index 1
    // // print element
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";

    // }
    // // insert element at index 1
    // vnew.insert(vnew.begin()+1,50);
    // cout<<endl;
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }

    // // clear vector
    // vnew.clear();
    // cout<<vnew.size()<<endl;
    // cout<<vnew.capacity()<<endl;

    // vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // cout<<arr[0]<<endl; // first element
    // cout<<arr.at(0)<<endl; // both are same
    // cout<<arr.front()<<endl; // first element
    // cout<<arr[arr.size()-1]<<endl;// last element
    // cout<<arr.back()<<endl; // last element

    // vector<int> a;
    // // copy value of one vector to another
    // a = arr; // copy arr to a
    // cout<<a.size()<<endl;
    // for(auto it  = arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // for(auto i: arr){
    //     cout<<i<<" ";
    // }


     vector<int> ans;
     ans.push_back(5);
        ans.push_back(100);
        ans.push_back(10);
        ans.push_back(3);
        ans.push_back(400);

        // sort vector in increasing order
        sort(ans.begin(),ans.end());
        for(int i = 0 ; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        // sort vector in decreasing order
        cout<<endl;
        // sort(ans.rbegin(),ans.rend());
        // for(int i = 0 ; i < ans.size(); i++){
        //     cout<<ans[i]<<" ";
        // }


        // search in binary search
        cout<<binary_search(ans.begin(),ans.end(),10)<<endl; // return 1 if found else 0

}