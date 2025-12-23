#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][4] = {3,4,7,6,1,2,3,4,5,6,7,8,1,2,5,4,0,1,2,3};
    int result[5];
    int maxsum = INT_MIN;
    int rowindex = -1;
    for (int row = 0; row < 5; row++)
    {
        int sum = 0 ; 
        for (int col = 0; col < 4; col++)
        {
           sum = arr[row][col] + sum;
        }
        result[row] = sum;
        cout<<result[row]<<" ";

    }
    for(int i = 0 ;i < 5 ; i++){
        if(result[i]>maxsum){
            maxsum = result[i];
            rowindex = i;
        }
    }
    cout<<rowindex<<endl;
        // for (int row = 0; row < 5; row++)
        // {
        //     for (int col = 0; col < 4; col++)
        //     {
        //         cout << result[row][col] << " ";
        //     }
        //     cout << endl;
        // }
    }
