#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>>& matrix, int n, int m){
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    while(top <= bottom && left <= right){
        for(int j = left; j <= right; j++){
            cout << matrix[top][j] << " ";
        }
        top++;
        for(int i = top; i <= bottom; i++){
            cout << matrix[i][right] << " ";
        }
        right--;
        if(top <= bottom){
            for(int j = right; j >= left; j--){
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    spiral(matrix, n, m);

    return 0;
}
