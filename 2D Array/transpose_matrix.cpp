#include <iostream>
#include <vector>
using namespace std;
void transpose(int matrix[][100], int n, int m)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
                swap(matrix[i][j], matrix[j][i]);
                cout << matrix[j][i] << " ";
            }
            cout << endl;
        }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    transpose(matrix, n, m);
    return 0;
}