#include <bits/stdc++.h>
using namespace std;
 int main(){
    //create a 2d vector
    vector<vector<int> >matrix(4, vector<int>(3,2));
    for(int i = 0 ; i< 3 ; i++)
    for(int j= 0 ; j<4 ; j++)
    cout<<matrix[i][j]<<" ";
   return 0;
 }