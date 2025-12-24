#include <iostream>
#include <vector>
using namespace std;

void search(int matrix[][100], int n, int m, int target)
{
    for(int  i = 0 ;i < n ; i++){
        if(matrix[i][0] <= target && matrix[i][m-1]>=target){
            //apply binary search in this row
            int start = 0 ; int end = m-1;
            while(start<=end){
                int mid = start + (end - start)/2;
                if(matrix[i][mid] == target){
                    cout<<"Found at index: "<<i<<","<<mid<<endl;
                    return;
                }
                else if(matrix[i][mid] < target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
    }
    cout<<"Not Found"<<endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int matrix[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout<<endl;

    int target; 
    cin>>target;

    search(matrix, n, m, target);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
