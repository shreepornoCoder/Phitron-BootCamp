#include <iostream>
using namespace std;

int main(){
    int n, index, val; cin>>n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cin>>index>>val;

    arr[index] = val;

    for (int i = n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}