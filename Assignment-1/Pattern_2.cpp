# include <iostream>
using namespace std;

int main(){
    int n; cin>>n;

    if (n == 1) cout<<1;
    else{
        for (int l = 1; l<(n+1); l++){
            for (int s = 0; s<(n-l); s++){
                cout<<" ";
            }            
            for (int r = l; r>0; r--){
                cout<<r;
            }
            cout<<"\n";
        }
    }
}