# include <iostream>
using namespace std;

int main(){
    int n; cin>>n;

    if (n <= 0){
        for (int i = n; i<2; i++){
            cout<<i<<" ";
        }
    }
    else{
        for (int i = 1; i<(n+1); i++){
            cout<<i<<" ";
        }     
    }

    return 0;
}