# include <iostream>
using namespace std;

int main(){
    int n; cin>>n;

    for (int i = 1; i<(n+1); i++){
        if ((i % 3 == 0) && (i % 7 == 0)){
            cout<<i<<"\n";
        }
    }

    return 0;
}