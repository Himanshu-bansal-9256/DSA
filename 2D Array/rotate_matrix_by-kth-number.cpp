#include <iostream>
#include <vector>
using namespace std;

void rotate(int matrix[][100], int n, int m)
{
    // transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // then reverse the columns
    for (int i = 0; i < m; i++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
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
    int k ;
    cin>>k;
    k = k%4; //as after 4 rotations matrix will be same
    while(k){
        rotate(matrix, n, m);
        k--;    
    }
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
