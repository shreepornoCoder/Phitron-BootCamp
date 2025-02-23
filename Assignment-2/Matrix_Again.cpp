#include <iostream>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    int grid[n][m];

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin>>grid[i][j];
        }
    }

    for (int i = n-1; i<n; i++){
        for (int j = 0; j<m; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }

    for (int i = 0; i<n; i++){
        for (int j = m-1; j<m; j++){
            cout<<grid[i][j]<<" ";
        }
    }

    return 0;
}