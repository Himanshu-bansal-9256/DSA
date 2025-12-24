#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>>& matrix, int n, int m){
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int num =1;
    while(top <= bottom && left <= right){
        for(int j = left; j <= right; j++){
            matrix[top][j] = num++;
        }
        top++;
        for(int i = top; i <= bottom; i++){
            matrix[i][right] = num++;
        }
        right--;
        if(top <= bottom){
            for(int j = right; j >= left; j--){
                matrix[bottom][j] = num++;
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                matrix[i][left] = num++;
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
