#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int cnt = 0;
    int arr[n], b[n];

    int j = 0;
    for (int i = 0; i<n; i++){
        cin>>arr[i];
        if (i % 2 == 0){ 
            b[j] = arr[i];
            cnt++;
            j++;
        }
    }

    for (int i = cnt-1; i>=0; i--){
        cout<<b[i]<<" ";
    }

    return 0;
}