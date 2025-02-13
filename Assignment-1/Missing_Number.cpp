# include <iostream>
using namespace std;

int main(){
    int t; cin>>t;

    while (t--){
        int arr[4];
        for (int i = 0; i<4; i++){
            cin>>arr[i];
        }
        int sum = arr[0];
        int val = arr[1]+arr[2]+arr[3];
        cout<<sum-val<<"\n";
    }

    return 0;
}