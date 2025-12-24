#include <iostream>
#include <vector>
using namespace std;

void rotate(int matrix[][100], int n, int m)
{
    // first reverse the rows
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
    // then reverse the columns
    for (int j = 0; j < m; j++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }
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
    rotate(matrix, n, m);

    //print the rotated matrix
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
