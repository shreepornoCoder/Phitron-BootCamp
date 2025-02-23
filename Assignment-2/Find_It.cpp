#include <iostream>
using namespace std;

int main(){
    int n, val; cin>>n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cin>>val;

    int cnt = 0;
    for (int i = 0; i<n; i++){
        if (arr[i] == val) cnt++;
    }
    cout<<cnt;

    return 0;
}