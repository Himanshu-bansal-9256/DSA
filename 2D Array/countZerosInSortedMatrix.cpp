#include <iostream>
#include <vector>
using namespace std;

void count(int matrix[][100], int n, int m)
{
    int cnt = 0 ; 
    int row = 0 ; int col = m-1;
    while(row<n*m){
        int row_index = row/m;
        int col_index = row%m;
        if(matrix[row_index][col_index] == 0){
            cnt++;
        }
        row++;
    }
    cout << "Number of zeros: " << cnt << endl;
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
    count(matrix, n, m);
}
