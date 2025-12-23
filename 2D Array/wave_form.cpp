#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for(int j = 0 ; j<m ; j++){
        if(j%2 == 0){
            for(int i = 0 ; i<n ; i++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int i = n-1 ; i>=0 ; i--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }



}
