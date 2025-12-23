#include <bits/stdc++.h>
using namespace std;

void printsumdig(int arr[][4], int row , int col){
    int fistsum= 0 ;
    int secondsum = 0;
    for(int i = 0 ;  i < row ; i++){
        fistsum = fistsum + arr[i][i];
    }
    int i = 0 , j = col-1;
    while(j>=0){
        secondsum = secondsum + arr[i][j];
        i++;
        j--;
    }
    cout<<fistsum << " " << secondsum<<endl;
    
}
int main()
{
    int arr[4][4] = {3,4,7,6,1,2,3,4,5,6,7,8,1,2,5,4};
    int result[4];

    // using function
    printsumdig(arr , 4 , 4);
}