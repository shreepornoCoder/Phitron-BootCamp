# include <iostream>
using namespace std;

int main(){
    int r, line; cin>>r>>line;

    for (int i = 0; i<line; i++){
        for (int j = 1; j<(r+1); j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}